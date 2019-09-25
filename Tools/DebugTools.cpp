/*******************************************************************************
File Name   : DLL Decompile Debug Tools
Author      : Zhixian Lin
Date        : 2017
Description : The debug tools for decompile work.
Copyright   : www.dll-decompiler.com, all rights reserved.
E-mail      : support@dll-decompiler.com
*******************************************************************************/

#include "StdAfx.h"
#include "DDTools.h"
#include "DebugTools.h"

#ifdef _DEBUG
TlsIndex _debuggerTlsIndex;

DebugContext::DebugContext(INT nInst)
{
	m_nStackSize = 1000;
	m_stack = (CallRecord*)malloc(m_nStackSize * sizeof(CallRecord));
	m_nStackUsed = 0;

	m_nInst = nInst;
	m_espEbp = (EspEbpOfs*)malloc(m_nInst * sizeof(EspEbpOfs));
	memset(m_espEbp,0,m_nInst * sizeof(EspEbpOfs));
}

DebugContext::~DebugContext()
{
	if(m_stack)
		free(m_stack);
	if(m_espEbp)
		free(m_espEbp);
}

void DebugContext::PushRecord(DWORD _esp, DWORD _idFun)
{
	if(m_nStackUsed + 1 > m_nStackSize)
	{
		m_nStackSize *= 2;
		m_stack = (CallRecord*)realloc(m_stack,m_nStackSize * sizeof(CallRecord));
	}

	m_stack[m_nStackUsed]._esp = _esp;
	m_stack[m_nStackUsed]._idFun = _idFun;
	m_nStackUsed++;
}

INT DebugContext::PopRecord(DWORD _esp)
{
	if(m_nStackUsed <= 0)
		return m_nStackUsed;

	while(m_nStackUsed > 0)
	{
		if(m_stack[m_nStackUsed - 1]._esp > _esp)
			return m_nStackUsed;

		m_nStackUsed--;
	}

	return m_nStackUsed;
}

void DebugContext::LogEspEbp(DWORD idFun, INT iInst, DWORD addr, DWORD _esp, DWORD _ebp)
{
	if(m_nStackUsed <= 0)
		return;

	if(iInst >= 0 && iInst < m_nInst)
	{
		DWORD funEsp;

		INT index = m_nStackUsed - 1;
		while(index >= 0)
		{
			if(m_stack[index]._idFun==idFun)
			{
				funEsp = m_stack[index]._esp;
				
				/* Log the ESP and EBP offset value to know which local variable or argument the instruction is using. */
				m_espEbp[iInst].addr = addr;
				m_espEbp[iInst].espOfs = _esp - funEsp;
				m_espEbp[iInst].ebpOfs = _ebp - funEsp;
				break;
			}

			index--;
		}
	}
}

static void __stdcall __Debug_OnEnterFun(DWORD _esp, DWORD _idFun, INT nInst)
{
	DebugContext* ctx;

	_esp += 0x38; //Get the esp value before _Debug_OnEnterFun is invoked

	ASSERT(_debuggerTlsIndex != TLS_OUT_OF_INDEXES);

	ctx = (DebugContext*)TlsGetValue(_debuggerTlsIndex);
	if(!ctx)
	{
		ctx = new DebugContext(nInst);
		TlsSetValue(_debuggerTlsIndex,ctx);
	}

	ctx->PushRecord(_esp,_idFun);
}

__declspec(naked) void __stdcall _Debug_OnEnterFun(DWORD idFun, INT nInst)
{
	__asm{
		pushad
		pushfd

		push dword ptr [esp + 0x2C] //nInst
		push dword ptr [esp + 0x2C] //idFun
		push esp
		call __Debug_OnEnterFun

		popfd
		popad
		retn 8
	}
}

void DebugContext::OutputThreadLog(FOutputThreadLog fOut)
{
	if(!fOut)
		return;

	fOut(m_espEbp,m_nInst);
}

static void __stdcall __Debug_OnExitFun(DWORD _esp, FOutputThreadLog fOut)
{
	DebugContext* ctx;

	_esp += 0x30; //Get the esp value before _Debug_OnExitFun is invoked

	ASSERT(_debuggerTlsIndex != TLS_OUT_OF_INDEXES);

	ctx = (DebugContext*)TlsGetValue(_debuggerTlsIndex);
	if(ctx && ctx->PopRecord(_esp) <= 0)
	{
		ctx->OutputThreadLog(fOut);

		/* It is about to exit the first invoked function, so we delete the DebugContext. */
		delete ctx;
		TlsSetValue(_debuggerTlsIndex,NULL);
	}
}

__declspec(naked) void __stdcall _Debug_OnExitFun(FOutputThreadLog fOut)
{
	__asm{
		pushad
		pushfd

		push dword ptr [esp + 0x28] //fOut
		push esp
		call __Debug_OnExitFun

		popfd
		popad
		retn 4
	}
}

static void __stdcall __Debug_LogEspEbp(DWORD idFun, INT iInst, DWORD addr, DWORD _esp, DWORD _ebp)
{
	DebugContext* ctx;

	_esp += 0x38; //Get the esp value before _Debug_LogEspEbp is invoked

	ASSERT(_debuggerTlsIndex != TLS_OUT_OF_INDEXES);

	ctx = (DebugContext*)TlsGetValue(_debuggerTlsIndex);
	if(ctx)
		ctx->LogEspEbp(idFun,iInst,addr,_esp,_ebp);
}

__declspec(naked) void __stdcall _Debug_LogEspEbp(DWORD idFun, INT iInst, DWORD addr)
{
	__asm{
		pushad
		pushfd
		
		push ebp
		push esp
		push dword ptr [esp + 0x38] //addr
		push dword ptr [esp + 0x38] //iInst
		push dword ptr [esp + 0x38] //idFun
		call __Debug_LogEspEbp

		popfd
		popad
		retn 0xC
	}
}
#endif //#ifdef _DEBUG