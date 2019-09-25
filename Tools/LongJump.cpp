/*******************************************************************************
  File Name   : Long Jumps
  Author      : Zhixian Lin
  Date        : 2016
  Description : As a part of DLL to C.
  Copyright   : www.dll-decompiler.com, all rights reserved.
  E-mail      : support@dll-decompiler.com
*******************************************************************************/

#include "StdAfx.h"
#include "LongJump.h"

__declspec(naked) void __stdcall ja_long(DWORD destAddr)
{
__asm{
	ja jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jae_long(DWORD destAddr)
{
__asm{
	jae jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jb_long(DWORD destAddr)
{
__asm{
	jb jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jbe_long(DWORD destAddr)
{
__asm{
	jbe jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jc_long(DWORD destAddr)
{
__asm{
	jc jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jecxz_long(DWORD destAddr)
{
__asm{
	jecxz jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall je_long(DWORD destAddr)
{
__asm{
	je jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jl_long(DWORD destAddr)
{
__asm{
	jl jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jle_long(DWORD destAddr)
{
__asm{
	jle jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jg_long(DWORD destAddr)
{
__asm{
	jg jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jge_long(DWORD destAddr)
{
__asm{
	jge jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jna_long(DWORD destAddr)
{
__asm{
	jna jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnae_long(DWORD destAddr)
{
__asm{
	jnae jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnb_long(DWORD destAddr)
{
__asm{
	jnb jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnbe_long(DWORD destAddr)
{
__asm{
	jnbe jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnc_long(DWORD destAddr)
{
__asm{
	jnc jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jne_long(DWORD destAddr)
{
__asm{
	jne jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jng_long(DWORD destAddr)
{
__asm{
	jng jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnge_long(DWORD destAddr)
{
__asm{
	jnge jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnl_long(DWORD destAddr)
{
__asm{
	jnl jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnle_long(DWORD destAddr)
{
__asm{
	jnle jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jno_long(DWORD destAddr)
{
__asm{
	jno jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnp_long(DWORD destAddr)
{
__asm{
	jnp jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jns_long(DWORD destAddr)
{
__asm{
	jns jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jnz_long(DWORD destAddr)
{
__asm{
	jnz jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jo_long(DWORD destAddr)
{
__asm{
	jo jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jp_long(DWORD destAddr)
{
__asm{
	jp jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jpe_long(DWORD destAddr)
{
__asm{
	jpe jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jpo_long(DWORD destAddr)
{
__asm{
	jpo jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall js_long(DWORD destAddr)
{
__asm{
	js jump
	retn 4
jump:
	add esp,4
	retn
}
}

__declspec(naked) void __stdcall jz_long(DWORD destAddr)
{
__asm{
	jz jump
	retn 4
jump:
	add esp,4
	retn
}
}