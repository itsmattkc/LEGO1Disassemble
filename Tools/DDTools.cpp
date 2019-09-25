/*******************************************************************************
File Name   : DLL Decompile Tools
Author      : Zhixian Lin
Date        : 2017
Description : The tools for decompile work.
Copyright   : www.dll-decompiler.com, all rights reserved.
E-mail      : support@dll-decompiler.com
*******************************************************************************/

#include "StdAfx.h"
#include "DDTools.h"

TlsIndex::~TlsIndex()
{
	if(m_tlsIndex != (DWORD)-1)
		TlsFree(m_tlsIndex);
}

typedef void (__stdcall *FPassReg)(DWORD regVal);

__declspec(naked) static void __stdcall PassEax(DWORD regVal)
{
	__asm{

	}
}

__declspec(naked) static void __stdcall PassReg(Register reg, DWORD regVal)
{
	__asm{
		add dword ptr [esp + 4], offset _NoPass //reg
		jmp dword ptr [esp + 4]

_NoPass:
		retn 8
		nop
		nop
		nop
		nop
//_PassEax:
		mov eax,dword ptr [esp + 8]
		retn 8
//_PassEbx:
		mov ebx,dword ptr [esp + 8]
		retn 8
//_PassEcx:
		mov ecx,dword ptr [esp + 8]
		retn 8
//_PassEdx:
		mov edx,dword ptr [esp + 8]
		retn 8
//_PassEsi:
		mov esi,dword ptr [esp + 8]
		retn 8
//_PassEdi:
		mov edi,dword ptr [esp + 8]
		retn 8
//_PassEbp:
		mov ebp,dword ptr [esp + 8]
		retn 8
	}
}

#define PASS_REGS \
	__asm push dword ptr [esp + 0xC] __asm push dword ptr [esp + 0xC] __asm call PassReg \
	__asm push dword ptr [esp + 0x14] __asm push dword ptr [esp + 0x14] __asm call PassReg \
	__asm push dword ptr [esp + 0x1C] __asm push dword ptr [esp + 0x1C] __asm call PassReg \
	__asm push dword ptr [esp + 0x24] __asm push dword ptr [esp + 0x24] __asm call PassReg \
	__asm push dword ptr [esp + 0x2C] __asm push dword ptr [esp + 0x2C] __asm call PassReg \
	__asm push dword ptr [esp + 0x34] __asm push dword ptr [esp + 0x34] __asm call PassReg \
	__asm push dword ptr [esp + 0x3C] __asm push dword ptr [esp + 0x3C] __asm call PassReg

__declspec(naked) DWORD InvokeFunEx(LPCVOID fun, RegValues regValues)
{
	__asm{
		PASS_REGS
		call dword ptr [esp + 4]
		ret
	}
}

__declspec(naked) DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x40] //arg1
		call dword ptr [esp + 8]
		ret
	}
}

__declspec(naked) DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x44] //arg2
		push dword ptr [esp + 0x44] //arg1
		call dword ptr [esp + 0xC]
		ret
	}
}

__declspec(naked) DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x48] //arg3
		push dword ptr [esp + 0x48] //arg2
		push dword ptr [esp + 0x48] //arg1
		call dword ptr [esp + 0x10]
		ret
	}
}

__declspec(naked) DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x4C] //arg4
		push dword ptr [esp + 0x4C] //arg3
		push dword ptr [esp + 0x4C] //arg2
		push dword ptr [esp + 0x4C] //arg1
		call dword ptr [esp + 0x14]
		ret
	}
}

__declspec(naked) DWORD InvokeFunExC(LPCVOID fun, RegValues regValues)
{
	__asm{
		PASS_REGS
		call dword ptr [esp + 4]
		ret
	}
}

__declspec(naked) DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x40] //arg1
		call dword ptr [esp + 8]
		add esp,4
		ret
	}
}

__declspec(naked) DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x44] //arg2
		push dword ptr [esp + 0x44] //arg1
		call dword ptr [esp + 0xC]
		add esp,8
		ret
	}
}

__declspec(naked) DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x48] //arg3
		push dword ptr [esp + 0x48] //arg2
		push dword ptr [esp + 0x48] //arg1
		call dword ptr [esp + 0x10]
		add esp,0xC
		ret
	}
}

__declspec(naked) DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4)
{
	__asm{
		PASS_REGS
		push dword ptr [esp + 0x4C] //arg4
		push dword ptr [esp + 0x4C] //arg3
		push dword ptr [esp + 0x4C] //arg2
		push dword ptr [esp + 0x4C] //arg1
		call dword ptr [esp + 0x14]
		add esp,0x10
		ret
	}
}

__declspec(naked) void __stdcall imul8(CHAR val, DWORD* vEaxEdx)
{
	__asm{
		mov ecx,dword ptr [esp + 8] //vEaxEdx		
		mov al,byte ptr [ecx]
		mov dl,byte ptr [esp + 4] //val
		imul dl
		mov word ptr [ecx],ax
		retn 8
	}
}

__declspec(naked) void __stdcall imul32(INT val, DWORD* vEaxEdx)
{
	__asm{
		mov ecx,dword ptr [esp + 8] //vEaxEdx		
		mov eax,dword ptr [ecx]
		mov edx,dword ptr [esp + 4] //val
		imul edx
		mov dword ptr [ecx],eax
		mov dword ptr [ecx + 4],edx
		retn 8
	}
}

__declspec(naked) void __stdcall idiv8(CHAR val, DWORD* vEaxEdx)
{
	__asm{
		mov ecx,dword ptr [esp + 8] //vEaxEdx		
		mov ax,word ptr [ecx]
		idiv byte ptr [esp + 4] //val
		mov byte ptr [ecx],al
		mov byte ptr [ecx + 1],ah
		retn 8
	}
}

__declspec(naked) void __stdcall idiv32(INT val, DWORD* vEaxEdx)
{
	__asm{
		mov ecx,dword ptr [esp + 8] //vEaxEdx
		mov eax,dword ptr [ecx]
		mov edx,dword ptr [ecx + 4]
		idiv dword ptr [esp + 4] //val
		mov dword ptr [ecx],eax
		mov dword ptr [ecx + 4],edx
		retn 8
	}
}

DWORD MagicDiv7(INT val, INT nShift)
{
	DWORD _vEaxEdxBuf[2];
	DWORD& vEax = _vEaxEdxBuf[0];
	DWORD& vEdx = _vEaxEdxBuf[1];

	vEax = 0x92492493;
	imul32(val,&vEax);
	vEdx += val;
	*(INT*)&vEdx >>= nShift;

	return vEdx;
}

DWORD MagicDiv100(INT val, INT nShift)
{
	DWORD _vEaxEdxBuf[2];
	DWORD& vEax = _vEaxEdxBuf[0];
	DWORD& vEdx = _vEaxEdxBuf[1];

	vEax = 0x51EB851F;
	imul32(val,&vEax);
	*(INT*)&vEdx >>= nShift;

	return vEdx;
}