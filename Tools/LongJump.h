/*******************************************************************************
  File Name   : Long Jumps
  Author      : Zhixian Lin
  Date        : 2016
  Description : As a part of DLL to C.
  Copyright   : www.dll-decompiler.com, all rights reserved.
  E-mail      : support@dll-decompiler.com
*******************************************************************************/

#pragma once

void __stdcall ja_long(DWORD destAddr);
void __stdcall jae_long(DWORD destAddr);
void __stdcall jb_long(DWORD destAddr);
void __stdcall jbe_long(DWORD destAddr);
void __stdcall jc_long(DWORD destAddr);
void __stdcall jecxz_long(DWORD destAddr);
void __stdcall je_long(DWORD destAddr);
void __stdcall jg_long(DWORD destAddr);
void __stdcall jge_long(DWORD destAddr);
void __stdcall jl_long(DWORD destAddr);
void __stdcall jle_long(DWORD destAddr);
void __stdcall jna_long(DWORD destAddr);
void __stdcall jnae_long(DWORD destAddr);
void __stdcall jnb_long(DWORD destAddr);
void __stdcall jnbe_long(DWORD destAddr);
void __stdcall jnc_long(DWORD destAddr);
void __stdcall jne_long(DWORD destAddr);
void __stdcall jng_long(DWORD destAddr);
void __stdcall jnge_long(DWORD destAddr);
void __stdcall jnl_long(DWORD destAddr);
void __stdcall jnle_long(DWORD destAddr);
void __stdcall jno_long(DWORD destAddr);
void __stdcall jnp_long(DWORD destAddr);
void __stdcall jns_long(DWORD destAddr);
void __stdcall jnz_long(DWORD destAddr);
void __stdcall jo_long(DWORD destAddr);
void __stdcall jp_long(DWORD destAddr);
void __stdcall jpe_long(DWORD destAddr);
void __stdcall jpo_long(DWORD destAddr);
void __stdcall js_long(DWORD destAddr);
void __stdcall jz_long(DWORD destAddr);

#define CALL_LONG(func) __asm push func __asm add esp,4 __asm call dword ptr [esp-4]
#define JA_LONG(destAddr) __asm push destAddr __asm call ja_long
#define JAE_LONG(destAddr) __asm push destAddr __asm call jae_long
#define JB_LONG(destAddr) __asm push destAddr __asm call jb_long
#define JBE_LONG(destAddr) __asm push destAddr __asm call jbe_long
#define JC_LONG(destAddr) __asm push destAddr __asm call jc_long
#define JECXZ_LONG(destAddr) __asm push destAddr __asm call jecxz_long
#define JE_LONG(destAddr) __asm push destAddr __asm call je_long
#define JG_LONG(destAddr) __asm push destAddr __asm call jg_long
#define JGE_LONG(destAddr) __asm push destAddr __asm call jge_long
#define JL_LONG(destAddr) __asm push destAddr __asm call jl_long
#define JLE_LONG(destAddr) __asm push destAddr __asm call jle_long
#define JNA_LONG(destAddr) __asm push destAddr __asm call jna_long
#define JNAE_LONG(destAddr) __asm push destAddr __asm call jnae_long
#define JNB_LONG(destAddr) __asm push destAddr __asm call jnb_long
#define JNBE_LONG(destAddr) __asm push destAddr __asm call jnbe_long
#define JNC_LONG(destAddr) __asm push destAddr __asm call jnc_long
#define JNE_LONG(destAddr) __asm push destAddr __asm call jne_long
#define JNG_LONG(destAddr) __asm push destAddr __asm call jng_long
#define JNL_LONG(destAddr) __asm push destAddr __asm call jnl_long
#define JNLE_LONG(destAddr) __asm push destAddr __asm call jnle_long
#define JNGE_LONG(destAddr) __asm push destAddr __asm call jnge_long
#define JNO_LONG(destAddr) __asm push destAddr __asm call jno_long
#define JNP_LONG(destAddr) __asm push destAddr __asm call jnp_long
#define JNS_LONG(destAddr) __asm push destAddr __asm call jns_long
#define JNZ_LONG(destAddr) __asm push destAddr __asm call jnz_long
#define JO_LONG(destAddr) __asm push destAddr __asm call jo_long
#define JP_LONG(destAddr) __asm push destAddr __asm call jp_long
#define JPE_LONG(destAddr) __asm push destAddr __asm call jpe_long
#define JPO_LONG(destAddr) __asm push destAddr __asm call jpo_long
#define JS_LONG(destAddr) __asm push destAddr __asm call js_long
#define JZ_LONG(destAddr) __asm push destAddr __asm call jz_long
#define JMP_LONG(destAddr) __asm push destAddr __asm ret