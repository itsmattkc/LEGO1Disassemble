/*******************************************************************************
  File Name   : DLL Decompile Debug Tools
  Author      : Zhixian Lin
  Date        : 2017
  Description : The debug tools for decompile work.
  Copyright   : www.dll-decompiler.com, all rights reserved.
  E-mail      : support@dll-decompiler.com
*******************************************************************************/

#pragma once

#ifdef _DEBUG
struct CallRecord
{
	DWORD _esp; //The ESP value when enter the function
	DWORD _idFun; //Function id
};

//ESP EBP offset
struct EspEbpOfs
{
	DWORD addr; //Address of the instruction
	INT espOfs; //ESP offset in current function
	INT ebpOfs; //EBP offset in current function
};

typedef void (*FOutputThreadLog)(const EspEbpOfs* espEbp, INT nInst);

class DebugContext
{
protected:
	CallRecord* m_stack; //Call Record Stack
	INT m_nStackSize; //Call Record Stack size
	INT m_nStackUsed; //Call Record Stack size used

	EspEbpOfs* m_espEbp; //ESP EBP log
	INT m_nInst; //Instruction count
public:
	DebugContext(INT nInst);
	~DebugContext();

	void PushRecord(DWORD _esp, DWORD _idFun);
	INT PopRecord(DWORD _esp);

	void LogEspEbp(DWORD idFun, INT iInst, DWORD addr, DWORD _esp, DWORD _ebp);
	void OutputThreadLog(FOutputThreadLog fOut);
};

void __stdcall _Debug_OnEnterFun(DWORD idFun, INT nInst);
void __stdcall _Debug_OnExitFun(FOutputThreadLog fOut);
void __stdcall _Debug_LogEspEbp(DWORD idFun, INT iInst, DWORD addr);

/*
	Log the exit function event.
	Must be put before each RET instruction and at the end of each fuction.
	fOutputThreadLog: The function to output the log of current thread.
*/
#define ON_EXIT_FUN(fOutputThreadLog) __asm push offset fOutputThreadLog __asm call _Debug_OnExitFun

/* 
	Log the current ESP value.
	iInst: The instruction index.
*/
#define LOG_ESP_EBP(idFun, iInst, addr) __asm push addr __asm push iInst __asm push idFun __asm call _Debug_LogEspEbp

#else
#define ON_EXIT_FUN(fOutputThreadLog)
#define LOG_ESP_EBP(idFun, iInst, addr)
#endif //#ifdef _DEBUG