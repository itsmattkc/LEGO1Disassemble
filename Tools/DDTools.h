/*******************************************************************************
  File Name   : DLL Decompile Tools
  Author      : Zhixian Lin
  Date        : 2017
  Description : The tools for decompile work.
  Copyright   : www.dll-decompiler.com, all rights reserved.
  E-mail      : support@dll-decompiler.com
*******************************************************************************/

#pragma once

#ifndef ASSERT
#ifdef _DEBUG
#define ASSERT(expr) if(!(expr)){__asm int 3}
#else
#define ASSERT(expr)
#endif
#endif

#if _MSC_VER==1600
#define MSVCR_DLL "MSVCR100.DLL"
#endif

#if _MSC_VER==1500
#define MSVCR_DLL "MSVCR90.DLL"
#endif

#if _MSC_VER==1400
#define MSVCR_DLL "MSVCR80.DLL"
#endif

#if _MSC_VER==1310
#define MSVCR_DLL "MSVCR71.DLL"
#endif

#if _MSC_VER==1300
#define MSVCR_DLL "MSVCR70.DLL"
#endif

#if _MSC_VER==1200
#define MSVCR_DLL "MSVCR60.DLL"
#endif

#if _MSC_VER==1100
#define MSVCR_DLL "MSVCR50.DLL"
#endif

#define JMP_TABLE_BEGIN(tableName,indexReg) __asm jmp dword ptr [offset tableName + indexReg*8 + 1] __asm tableName:
#define JT_ITEM(destAddr) __asm push destAddr DB(0xCC) DB(0xCC) DB(0xCC) //Jmp table item
#define JMP_TABLE_END()

class TlsIndex
{
private:
	DWORD m_tlsIndex;
public:
	TlsIndex()
	{
		m_tlsIndex = TlsAlloc();
	}

	~TlsIndex();

	operator DWORD()const{return m_tlsIndex;}
};

DWORD _InvokeFun(LPCVOID fun, INT nArg, ...);

typedef DWORD (__stdcall *FStd0Args)();
typedef DWORD (__stdcall *FStd1Args)(DWORD arg1);
typedef DWORD (__stdcall *FStd2Args)(DWORD arg1,DWORD arg2);
typedef DWORD (__stdcall *FStd3Args)(DWORD arg1,DWORD arg2,DWORD arg3);
typedef DWORD (__stdcall *FStd4Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4);
typedef DWORD (__stdcall *FStd5Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5);
typedef DWORD (__stdcall *FStd6Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6);
typedef DWORD (__stdcall *FStd7Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7);
typedef DWORD (__stdcall *FStd8Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8);
typedef DWORD (__stdcall *FStd9Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									 DWORD arg9);
typedef DWORD (__stdcall *FStd10Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									 DWORD arg9,DWORD arg10);
typedef DWORD (__stdcall *FStd11Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11);
typedef DWORD (__stdcall *FStd12Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12);
typedef DWORD (__stdcall *FStd13Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13);
typedef DWORD (__stdcall *FStd14Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14);
typedef DWORD (__stdcall *FStd15Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14,DWORD arg15);
typedef DWORD (__stdcall *FStd16Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
									  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14,DWORD arg15,
									  DWORD arg16);

inline DWORD _Invoke(LPCVOID fun)
{
	return ((FStd0Args)fun)();
}

template <class T1> DWORD _Invoke(LPCVOID fun,T1 arg1)
{
	return ((FStd1Args)fun)((DWORD)arg1);
}

template <class T1,class T2> DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2)
{
	return ((FStd2Args)fun)((DWORD)arg1,(DWORD)arg2);
}

template <class T1,class T2,class T3> DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3)
{
	return ((FStd3Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3);
}

template <class T1,class T2,class T3,class T4> DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4)
{
	return ((FStd4Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4);
}

template <class T1,class T2,class T3,class T4,class T5> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5)
{
	return ((FStd5Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5);
}

template <class T1,class T2,class T3,class T4,class T5,class T6> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6)
{
	return ((FStd6Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7)
{
	return ((FStd7Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8)
{
	return ((FStd8Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9)
{
	return ((FStd9Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10> 
DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10)
{
	return ((FStd10Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11)
{
	return ((FStd11Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12)
{
	return ((FStd12Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13)
{
	return ((FStd13Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14)
{
	return ((FStd14Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14,class T15> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14,T15 arg15)
{
	return ((FStd15Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14,(DWORD)arg15);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14,class T15,class T16> 
	DWORD _Invoke(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14,T15 arg15,T16 arg16)
{
	return ((FStd16Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14,(DWORD)arg15,(DWORD)arg16);
}

#define INVOKE(fun, ...) _Invoke(fun,__VA_ARGS__)

typedef DWORD (*FCdecl0Args)();
typedef DWORD (*FCdecl1Args)(DWORD arg1);
typedef DWORD (*FCdecl2Args)(DWORD arg1,DWORD arg2);
typedef DWORD (*FCdecl3Args)(DWORD arg1,DWORD arg2,DWORD arg3);
typedef DWORD (*FCdecl4Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4);
typedef DWORD (*FCdecl5Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5);
typedef DWORD (*FCdecl6Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6);
typedef DWORD (*FCdecl7Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7);
typedef DWORD (*FCdecl8Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8);
typedef DWORD (*FCdecl9Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							 DWORD arg9);
typedef DWORD (*FCdecl10Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10);
typedef DWORD (*FCdecl11Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11);
typedef DWORD (*FCdecl12Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12);
typedef DWORD (*FCdecl13Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13);
typedef DWORD (*FCdecl14Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14);
typedef DWORD (*FCdecl15Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14,DWORD arg15);
typedef DWORD (*FCdecl16Args)(DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4,DWORD arg5,DWORD arg6,DWORD arg7,DWORD arg8,
							  DWORD arg9,DWORD arg10,DWORD arg11,DWORD arg12,DWORD arg13,DWORD arg14,DWORD arg15,
							  DWORD arg16);

inline DWORD _InvokeC(LPCVOID fun)
{
	return ((FCdecl0Args)fun)();
}

template <class T1> DWORD _InvokeC(LPCVOID fun,T1 arg1)
{
	return ((FCdecl1Args)fun)((DWORD)arg1);
}

template <class T1,class T2> DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2)
{
	return ((FCdecl2Args)fun)((DWORD)arg1,(DWORD)arg2);
}

template <class T1,class T2,class T3> DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3)
{
	return ((FCdecl3Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3);
}

template <class T1,class T2,class T3,class T4> DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4)
{
	return ((FCdecl4Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4);
}

template <class T1,class T2,class T3,class T4,class T5> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5)
{
	return ((FCdecl5Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5);
}

template <class T1,class T2,class T3,class T4,class T5,class T6> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6)
{
	return ((FCdecl6Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7)
{
	return ((FCdecl7Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8)
{
	return ((FCdecl8Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9)
{
	return ((FCdecl9Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10> 
DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10)
{
	return ((FCdecl10Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11)
{
	return ((FCdecl11Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12)
{
	return ((FCdecl12Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13)
{
	return ((FCdecl13Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14)
{
	return ((FCdecl14Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14,class T15> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14,T15 arg15)
{
	return ((FCdecl15Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14,(DWORD)arg15);
}

template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,
class T11,class T12,class T13,class T14,class T15,class T16> 
	DWORD _InvokeC(LPCVOID fun,T1 arg1,T2 arg2,T3 arg3,T4 arg4,T5 arg5,T6 arg6,T7 arg7,T8 arg8,T9 arg9,T10 arg10,
	T11 arg11,T12 arg12,T13 arg13,T14 arg14,T15 arg15,T16 arg16)
{
	return ((FCdecl16Args)fun)((DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4,(DWORD)arg5,(DWORD)arg6,(DWORD)arg7,(DWORD)arg8,
		(DWORD)arg9,(DWORD)arg10,(DWORD)arg11,(DWORD)arg12,(DWORD)arg13,(DWORD)arg14,(DWORD)arg15,(DWORD)arg16);
}

#define INVOKE_C(fun, ...) _InvokeC(fun,__VA_ARGS__)

enum Register{
	REG_UNK = 0,
	R32_EAX = 7,
	R32_EBX = 7*2,
	R32_ECX = 7*3,
	R32_EDX = 7*4,
	R32_ESI = 7*5,
	R32_EDI = 7*6,
	R32_EBP = 7*7,
};

struct RegVal
{
	Register reg;
	DWORD value;
};

class RegValues
{
public:
	RegVal regValues[7];

	RegValues(Register r1 = REG_UNK,DWORD v1 = 0,Register r2 = REG_UNK,DWORD v2 = 0,
			Register r3 = REG_UNK,DWORD v3 = 0,Register r4 = REG_UNK,DWORD v4 = 0,
			Register r5 = REG_UNK,DWORD v5 = 0,Register r6 = REG_UNK,DWORD v6 = 0,
			Register r7 = REG_UNK,DWORD v7 = 0)
	{
		memcpy(&regValues,&r1,sizeof(regValues));
	}
};

DWORD InvokeFunEx(LPCVOID fun, RegValues regValues);
DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1);
DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2);
DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3);
DWORD InvokeFunEx(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4);

inline DWORD _InvokeFunEx(LPCVOID fun,RegValues& regValues)
{
	return InvokeFunEx(fun,regValues);
}

template <class T1> DWORD _InvokeFunEx(LPCVOID fun, RegValues& regValues, T1 arg1)
{
	return InvokeFunEx(fun,regValues,(DWORD)arg1);
}

template <class T1,class T2> DWORD _InvokeFunEx(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2)
{
	return InvokeFunEx(fun,regValues,(DWORD)arg1,(DWORD)arg2);
}

template <class T1,class T2,class T3> DWORD _InvokeFunEx(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2,T3 arg3)
{
	return InvokeFunEx(fun,regValues,(DWORD)arg1,(DWORD)arg2,(DWORD)arg3);
}

template <class T1,class T2,class T3,class T4> 
	DWORD _InvokeFunEx(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2,T3 arg3,T4 arg4)
{
	return InvokeFunEx(fun,regValues,(DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4);
}

#define INVOKE_EX(fun, ...) _InvokeFunEx(fun,__VA_ARGS__)

DWORD InvokeFunExC(LPCVOID fun, RegValues regValues);
DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1);
DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2);
DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3);
DWORD InvokeFunExC(LPCVOID fun, RegValues regValues, DWORD arg1,DWORD arg2,DWORD arg3,DWORD arg4);

inline DWORD _InvokeFunExC(LPCVOID fun,RegValues& regValues)
{
	return InvokeFunExC(fun,regValues);
}

template <class T1> DWORD _InvokeFunExC(LPCVOID fun, RegValues& regValues, T1 arg1)
{
	return InvokeFunExC(fun,regValues,(DWORD)arg1);
}

template <class T1,class T2> DWORD _InvokeFunExC(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2)
{
	return InvokeFunExC(fun,regValues,(DWORD)arg1,(DWORD)arg2);
}

template <class T1,class T2,class T3> DWORD _InvokeFunExC(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2,T3 arg3)
{
	return InvokeFunExC(fun,regValues,(DWORD)arg1,(DWORD)arg2,(DWORD)arg3);
}

template <class T1,class T2,class T3,class T4> 
	DWORD _InvokeFunExC(LPCVOID fun, RegValues& regValues, T1 arg1,T2 arg2,T3 arg3,T4 arg4)
{
	return InvokeFunExC(fun,regValues,(DWORD)arg1,(DWORD)arg2,(DWORD)arg3,(DWORD)arg4);
}

#define INVOKE_EX_C(fun, ...) _InvokeFunExC(fun,__VA_ARGS__)

struct _EH4_SCOPETABLE_RECORD {
	DWORD EnclosingLevel;
	LPVOID FilterFunc;
	LPVOID HandlerFunc;
};

struct _EH4_SCOPETABLE {
	UINT GSCookieOffset;
	UINT GSCookieXOROffset;
	UINT EHCookieOffset;
	UINT EHCookieXOROffset;
	_EH4_SCOPETABLE_RECORD ScopeRecord[1];
};

#define SEH_SET_FILTER(_tbl,_index,_fFilter,_fHandler) \
	__asm mov dword ptr [offset _tbl + 16 + _index*12 + 4], offset _fFilter \
	__asm mov dword ptr [offset _tbl + 16 + _index*12 + 8], offset _fHandler

void __stdcall imul8(CHAR val, DWORD* vEaxEdx);
void __stdcall imul32(INT val, DWORD* vEaxEdx);
void __stdcall idiv8(CHAR val, DWORD* vEaxEdx);
void __stdcall idiv32(INT val, DWORD* vEaxEdx);

DWORD MagicDiv7(INT val, INT nShift);
DWORD MagicDiv100(INT val, INT nShift);