#include "stdafx.h"
#include "LEGO1.h"

#pragma warning (disable:4730)
#pragma warning (disable:4733)
#pragma warning (disable:4799)
#define DB(b) __asm _emit b

__declspec(naked) DWORD LEGO1_sub_1000C41D()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB110_loc_1000C110])
}
}

__declspec(naked) DWORD LEGO1_loc_1000C550()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mB59B_proc_1000C59B]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.mCD8_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH 0x01
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.mB44F0_sub_100B54F0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mB5A5_sub_1000C5A5])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1000C5A5()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mAF00___1MxPresenter__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1000C6ED()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mAF00___1MxPresenter__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_loc_1000C740()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mB78B_proc_1000C78B]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.mBE8_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH 0x01
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.mB17B0_sub_100B27B0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mB795_sub_1000C795])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1000C795()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_sub_1000C97D()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_sub_1000CC8F()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m525D0_loc_100535D0])
}
}

__declspec(naked) DWORD LEGO1_sub_1000CE3D()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB740_loc_1000C740])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D0CD()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D23C()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	ADD ECX, 0x54
	JMP_LONG(offset [LEGO1_text.mAD420___1MxString__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D251()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D3C9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D421()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB550_loc_1000C550])
}
}

__declspec(naked) DWORD LEGO1_loc_1000D430()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mC47B_proc_1000D47B]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.mB08_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH 0x01
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.mB0A50_sub_100B1A50])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mC485_sub_1000D485])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1000D485()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC3E0_loc_1000D3E0])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D62D()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC3E0_loc_1000D3E0])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D695()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC430_loc_1000D430])
}
}

__declspec(naked) DWORD LEGO1_sub_1000D87D()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC430_loc_1000D430])
}
}

__declspec(naked) DWORD LEGO1_sub_1000DAA1()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mCA20_loc_1000DA20])
}
}

__declspec(naked) DWORD LEGO1_sub_1000DF59()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E09F()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E1E9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E419()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E5D9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E929()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mD940_loc_1000E940])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E981()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m2C320_loc_1002D320])
}
}

__declspec(naked) DWORD LEGO1_sub_1000E9E9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m2C320_loc_1002D320])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F429()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F499()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m67670_loc_10068670])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F50C()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	ADD ECX, 0x70
	JMP_LONG(offset [LEGO1_text.m10670_loc_10011670])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F521()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC640_loc_1000D640])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F589()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14D40_loc_10015D40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F5F9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F669()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB290___1LegoEntity__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F6D9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mE6F0_loc_1000F6F0])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F731()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F799()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mE6F0_loc_1000F6F0])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F809()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F879()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F8E9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F959()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000F9C9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000FA39()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000FAA9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000FB19()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14030_loc_10015030])
}
}

__declspec(naked) DWORD LEGO1_sub_1000FD40()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mEDB7_proc_1000FDB7]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m19200_sub_1001A200])
	XOR EAX, EAX
	PUSH ESI
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m15F0_ptr]
	MOV BYTE PTR [ESI+0x00000160],AL
	MOV DWORD PTR [ESI+0x0000013C],0x41700000
	MOV DWORD PTR [ESI+0x00000150],0x40600000
	MOV BYTE PTR [ESI+0x00000148],0x01
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV EAX, ESI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1000FF80()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mEFE1_proc_1000FFE1]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m15F0_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH ECX
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.m14750_sub_10015750])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m27EA0_sub_10028EA0])
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mEFEB_sub_1000FFEB])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1000FFEB()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1E10_loc_10002E10])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010270(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.mF34B_proc_1001034B]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x0C
	PUSH ESI
	PUSH offset [LEGO1_data.m154_str]
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	MOV DWORD PTR [ESI+0x00000164],EAX
	TEST EAX, EAX
	JNZ loc_100102C0
	PUSH offset [LEGO1_data.m154_str]
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m3AC00_sub_1003BC00])
	MOV DWORD PTR [ESI+0x00000164],EAX
loc_100102C0:
	PUSH 0x000000C2
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH EAX
	MOV ECX,DWORD PTR [ESI+0x00000154]
	CALL_LONG(offset [LEGO1_text.m20790_sub_10021790])
	TEST EAX, EAX
	JZ loc_100102F5
	MOV ECX,DWORD PTR [EBP+arg1+0x4]
	MOV EDX,DWORD PTR [EAX]
	PUSH ECX
	MOV ECX, EAX
	CALL_LONG(DWORD PTR [EDX+0x54])
loc_100102E5:
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000], EAX
	MOV ESP, EBP
	POP EBP
	RETN 0x0004
loc_100102F5:
	XOR EAX, EAX
	CMP BYTE PTR [ESI+0x00000160],AL
	JZ loc_100102E5
	MOV DWORD PTR [EBP+var_1C+0x4],offset [LEGO1_rdata.m16E8_ptr]
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	MOV DWORD PTR [EBP+var_18+0x4],EAX
	MOV DWORD PTR [EBP+var_14+0x4],EAX
	MOV DWORD PTR [EBP+var_1C+0x4],offset [LEGO1_rdata.m16E0_ptr]
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	LEA EAX,DWORD PTR [EBP+var_1C+0x4]
	PUSH EAX
	PUSH ESI
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mAB6C0_sub_100AC6C0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mF355_sub_10010355])
	JMP loc_100102E5
}
}

__declspec(naked) DWORD LEGO1_sub_10010355()
{
	enum{
		arg1217218 = 0x4A4B08,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217218-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF4A0_loc_100104A0])
}
}

__declspec(naked) DWORD LEGO1_sub_10010489()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF360_loc_10010360])
}
}

__declspec(naked) DWORD LEGO1_sub_100104E1()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF360_loc_10010360])
}
}

__declspec(naked) DWORD LEGO1_sub_10010510()
{
	enum{
		var_54 = -0x54,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
	};

__asm{
	SUB ESP, 0x54
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x00000164]
	MOV ESI, ECX
	CMP DWORD PTR [EAX+0x18],0x03
	JZ FAR loc_100105DE
	PUSH 0x06
	CALL_LONG(offset [LEGO1_text.m14910_sub_10015910])
	ADD ESP, 0x04
	MOV EAX,DWORD PTR [ESI+0x00000164]
	ADD EAX, 0x22
	CMP BYTE PTR [EAX],0x00
	JNZ FAR loc_100105DE
	MOV BYTE PTR [EAX],0x01
	CALL_LONG(offset [LEGO1_text.m14790_sub_10015790])
	MOV ECX,DWORD PTR [EAX+0x54]
	LEA EAX,DWORD PTR [ESP+var_40+0x5C]
	MOV EDI, EAX
	MOV DWORD PTR [ESP+var_44+0x5C],EAX
	MOV DWORD PTR [ESP+var_48+0x5C],offset [LEGO1_rdata.m300_ptr]
	MOV ESI,DWORD PTR [ECX+0x14]
	MOV ECX, 0x00000010
	REP MOVSD
	MOV EAX,DWORD PTR [ESP+var_44+0x5C]
	FLD DWORD PTR [EAX+0x28]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x15C8]
	FSTP DWORD PTR [ESP+var_50+0x5C]
	FLD DWORD PTR [EAX+0x24]
	FADD QWORD PTR [offset LEGO1_rdata + 0x15D0]
	ADD EAX, 0x30
	FSTP DWORD PTR [ESP+var_54+0x5C]
	FLD DWORD PTR [EAX-0x10]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x15C8]
	FST DWORD PTR [ESP+var_4C+0x5C]
	FADD DWORD PTR [EAX]
	FSTP DWORD PTR [EAX]
	MOV EAX,DWORD PTR [ESP+var_44+0x5C]
	ADD EAX, 0x34
	FLD DWORD PTR [EAX]
	FADD DWORD PTR [ESP+var_54+0x5C]
	PUSH 0x01
	PUSH 0x01
	PUSH 0x01
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	FSTP DWORD PTR [EAX]
	MOV EAX,DWORD PTR [ESP+var_44+0x74]
	PUSH 0x01
	ADD EAX, 0x38
	LEA ECX,DWORD PTR [ESP+var_48+0x78]
	PUSH ECX
	PUSH 0x0000035B
	FLD DWORD PTR [EAX]
	FADD DWORD PTR [ESP+var_50+0x80]
	FSTP DWORD PTR [EAX]
	CALL_LONG(offset [LEGO1_text.m14770_sub_10015770])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5FDC0_sub_10060DC0])
loc_100105DE:
	POP EDI
	POP ESI
	ADD ESP, 0x54
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100105F0()
{
	enum{
		var_8 = -0x8,
		var_4 = -0x4,
	};

__asm{
	SUB ESP, 0x04
	LEA EAX,DWORD PTR [ESP+var_4+0x4]
	PUSH EBX
	PUSH ESI
	XOR EBX, EBX
	MOV ESI, ECX
	PUSH EAX
	MOV DWORD PTR [ESP+var_4+0x10],EBX
	LEA ECX,DWORD PTR [ESI+0x14]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x00000084])
	LEA ECX,DWORD PTR [ESI+0x28]
	LEA EDX,DWORD PTR [ESP+var_8+0x10]
	MOV DWORD PTR [ESP+var_8+0x10],EBX
	PUSH EDX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x00000084])
	MOV DWORD PTR [ESI+0x50],EBX
	MOV DWORD PTR [ESI+0x54],EBX
	MOV BYTE PTR [ESI+0x58],BL
	MOV DWORD PTR [ESI+0x60],EBX
	MOV BYTE PTR [ESI+0x10],BL
	MOV BYTE PTR [ESI+0x11],BL
	MOV DWORD PTR [ESI+0x5C],0x0000000B
	MOV DWORD PTR [ESI+0x64],0xFFFFFFFF
	MOV BYTE PTR [ESI+0x59],0x04
	POP ESI
	POP EBX
	ADD ESP, 0x04
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100107E0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH ESI
	MOV ESI, ECX
	ADD EAX, 0x20
	PUSH EAX
	MOV ECX,DWORD PTR [EAX-0x04]
	MOV DWORD PTR [ESI+0x08],ECX
	LEA ECX,DWORD PTR [ESI+0x0C]
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mF880_sub_10010880])
	XOR EAX, EAX
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010810(DWORD arg1)
{
__asm{
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x54]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ loc_10010865
	TEST BYTE PTR [ESI+0x11],0x01
	JNZ loc_10010843
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	MOV ECX,DWORD PTR [ESI+0x54]
	MOV EAX,DWORD PTR [EAX+0x68]
	PUSH ECX
	MOV ECX,DWORD PTR [EAX+0x08]
	CALL_LONG(offset [LEGO1_text.mAA170_sub_100AB170])
	MOV ECX,DWORD PTR [ESI+0x54]
	TEST ECX, ECX
	JZ loc_10010865
	PUSH 0x01
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX])
	JMP loc_10010865
loc_10010843:
	CMP DWORD PTR [EAX+0x00000104],ESI
	JNZ loc_10010855
	MOV DWORD PTR [EAX+0x00000104],0x00000000
loc_10010855:
	MOV EAX,DWORD PTR [ESI+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m82DB0_sub_10083DB0])
loc_10010865:
	MOV EAX,DWORD PTR [ESI+0x60]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m85260_sub_10086260])
	ADD ESP, 0x04
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mF5F0_sub_100105F0])
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10010880()
{
__asm{
	PUSH ESI
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	TEST EAX, EAX
	JZ loc_10010898
	CMP EAX, ESI
	JZ loc_10010898
	PUSH ESI
	MOV EDX,DWORD PTR [EAX]
	MOV ECX, EAX
	CALL_LONG(DWORD PTR [EDX+0x58])
loc_10010898:
	POP ESI
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100108A0(DWORD arg1, DWORD arg2, DWORD arg3)
{
	enum{
		var_84 = -0x84,
		var_80 = -0x80,
		var_7C = -0x7C,
		var_78 = -0x78,
		var_74 = -0x74,
		var_70 = -0x70,
		var_6C = -0x6C,
		var_68 = -0x68,
		var_64 = -0x64,
		var_60 = -0x60,
		var_5C = -0x5C,
		var_58 = -0x58,
		var_54 = -0x54,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		arg1 = 0x4,
		arg2 = 0x8,
		arg3 = 0xC,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	SUB ESP, 0x00000084
	TEST EAX, EAX
	PUSH EBX
	PUSH ESI
	PUSH EDI
	MOV DWORD PTR [ECX+0x54],EAX
	MOV ESI, ECX
	JZ FAR loc_100109A0
	CMP BYTE PTR [ESP+arg3+0x90],0x00
	JZ FAR loc_1001096F
	MOV DWORD PTR [ESP+var_48+0x90],offset [LEGO1_rdata.m300_ptr]
	LEA EAX,DWORD PTR [ESP+var_40+0x90]
	MOV DWORD PTR [ESP+var_44+0x90],EAX
	MOV EAX,DWORD PTR [ESI+0x40]
	MOV EDX, offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [EAX+0x08]
	MOV EBX,DWORD PTR [EAX+0x04]
	MOV ECX,DWORD PTR [EAX]
	LEA EAX,DWORD PTR [ESP+var_7C+0x90]
	MOV DWORD PTR [ESP+var_84+0x90],EDX
	MOV DWORD PTR [ESP+var_80+0x90],EAX
	MOV DWORD PTR [ESP+var_7C+0x90],ECX
	MOV EAX,DWORD PTR [ESI+0x2C]
	MOV DWORD PTR [ESP+var_78+0x90],EBX
	MOV DWORD PTR [ESP+var_74+0x90],EDI
	MOV EDI,DWORD PTR [EAX+0x08]
	MOV EBX,DWORD PTR [EAX+0x04]
	MOV ECX,DWORD PTR [EAX]
	LEA EAX,DWORD PTR [ESP+var_68+0x90]
	MOV DWORD PTR [ESP+var_70+0x90],EDX
	MOV DWORD PTR [ESP+var_6C+0x90],EAX
	MOV DWORD PTR [ESP+var_68+0x90],ECX
	MOV EAX,DWORD PTR [ESI+0x18]
	LEA ECX,DWORD PTR [ESP+var_54+0x90]
	MOV DWORD PTR [ESP+var_64+0x90],EBX
	MOV DWORD PTR [ESP+var_60+0x90],EDI
	MOV EBX,DWORD PTR [EAX+0x08]
	MOV EDI,DWORD PTR [EAX+0x04]
	MOV EAX,DWORD PTR [EAX]
	MOV DWORD PTR [ESP+var_58+0x90],ECX
	MOV DWORD PTR [ESP+var_5C+0x90],EDX
	LEA EDX,DWORD PTR [ESP+var_48+0x90]
	MOV DWORD PTR [ESP+var_54+0x90],EAX
	LEA EAX,DWORD PTR [ESP+var_84+0x90]
	PUSH EDX
	LEA ECX,DWORD PTR [ESP+var_70+0x94]
	PUSH EAX
	LEA EDX,DWORD PTR [ESP+var_5C+0x98]
	PUSH ECX
	MOV DWORD PTR [ESP+var_50+0x9C],EDI
	PUSH EDX
	MOV DWORD PTR [ESP+var_4C+0xA0],EBX
	CALL_LONG(offset [LEGO1_text.mA4B40_sub_100A5B40])
	LEA ECX,DWORD PTR [ESP+var_48+0xA0]
	ADD ESP, 0x10
	PUSH ECX
	MOV ECX,DWORD PTR [ESI+0x54]
	CALL_LONG(offset [LEGO1_text.mA36B0_sub_100A46B0])
loc_1001096F:
	MOV EAX,DWORD PTR [ESI+0x54]
	MOV DWORD PTR [EAX+0x00000104],ESI
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	MOV ECX,DWORD PTR [ESI+0x54]
	MOV EAX,DWORD PTR [EAX+0x68]
	PUSH ECX
	MOV ECX,DWORD PTR [EAX+0x08]
	CALL_LONG(offset [LEGO1_text.mAA210_sub_100AB210])
	CMP BYTE PTR [ESP+arg2+0x90],0x00
	JZ loc_1001099C
	AND BYTE PTR [ESI+0x11],0xFE
	JMP loc_100109A0
loc_1001099C:
	OR BYTE PTR [ESI+0x11],0x01
loc_100109A0:
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x00000084
	RETN 0x000C
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100109B0(DWORD arg1, DWORD arg2, DWORD arg3, DWORD arg4)
{
	enum{
		var_B0 = -0xB0,
		var_AC = -0xAC,
		var_A8 = -0xA8,
		var_A4 = -0xA4,
		var_9C = -0x9C,
		var_98 = -0x98,
		var_94 = -0x94,
		var_90 = -0x90,
		var_88 = -0x88,
		var_84 = -0x84,
		var_80 = -0x80,
		var_7C = -0x7C,
		var_78 = -0x78,
		var_74 = -0x74,
		var_70 = -0x70,
		var_6C = -0x6C,
		var_68 = -0x68,
		var_64 = -0x64,
		var_60 = -0x60,
		var_58 = -0x58,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		var_3C = -0x3C,
		r = 0x0,
		arg2 = 0x8,
		arg3 = 0xC,
	};

__asm{
	SUB ESP, 0x000000AC
	LEA EAX,DWORD PTR [ESP+var_90+0xAC]
	PUSH EBX
	MOV DWORD PTR [ESP+var_94+0xB0],EAX
	PUSH ESI
	PUSH EDI
	MOV ESI, ECX
	PUSH EBP
	MOV EAX, offset [LEGO1_rdata.m488_ptr]
	LEA ECX,DWORD PTR [ESP+var_A4+0xBC]
	MOV EDX,DWORD PTR [ESP+arg2+0xBC]
	MOV DWORD PTR [ESP+var_98+0xBC],EAX
	PUSH EDX
	MOV DWORD PTR [ESP+var_A8+0xC0],ECX
	MOV DWORD PTR [ESP+var_AC+0xC0],EAX
	LEA ECX,DWORD PTR [ESP+var_98+0xC0]
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m510_ptr])
	LEA ECX,DWORD PTR [ESP+var_9C+0xC0]
	MOV EBX,DWORD PTR [ESP+var_9C+0xC0]
	CALL_LONG(DWORD PTR [EBX+0x40])
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1704]
	FSTP DWORD PTR [ESP+var_4C+0xC0]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10010A2E
	FLD DWORD PTR [ESP+var_4C+0xC0]
	FSQRT
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1704]
	FSTP DWORD PTR [ESP+var_4C+0xC0]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10010A2E
	LEA EAX,DWORD PTR [ESP+var_4C+0xC0]
	LEA ECX,DWORD PTR [ESP+var_9C+0xC0]
	MOV EBX,DWORD PTR [ESP+var_9C+0xC0]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x14])
loc_10010A2E:
	MOV EAX,DWORD PTR [ESP+arg2+0xC0]
	LEA ECX,DWORD PTR [ESP+var_B0+0xC0]
	MOV EBX,DWORD PTR [ESP+var_B0+0xC0]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x00000088])
	LEA ECX,DWORD PTR [ESP+var_B0+0xC0]
	MOV EBX,DWORD PTR [ESP+var_B0+0xC0]
	CALL_LONG(DWORD PTR [EBX+0x40])
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1704]
	FSTP DWORD PTR [ESP+var_4C+0xC0]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10010A87
	FLD DWORD PTR [ESP+var_4C+0xC0]
	FSQRT
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1704]
	FSTP DWORD PTR [ESP+var_4C+0xC0]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10010A87
	LEA EAX,DWORD PTR [ESP+var_4C+0xC0]
	LEA ECX,DWORD PTR [ESP+var_B0+0xC0]
	MOV EBX,DWORD PTR [ESP+var_B0+0xC0]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x14])
loc_10010A87:
	LEA ECX,DWORD PTR [ESI+0x14]
	MOV EAX,DWORD PTR [ESP+r+0xC0]
	PUSH EAX
	MOV EBX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EBX+0x00000088])
	LEA ECX,DWORD PTR [ESP+var_9C+0xC0]
	PUSH ECX
	LEA ECX,DWORD PTR [ESI+0x28]
	CALL_LONG(offset [LEGO1_text.mFBE0_sub_10010BE0])
	MOV EBX,DWORD PTR [ESP+var_90+0xC0]
	LEA EDX,DWORD PTR [ESI+0x30]
	LEA ECX,DWORD PTR [ESP+var_94+0xC0]
	MOV EAX,DWORD PTR [ECX]
	MOV ECX,DWORD PTR [ECX+0x08]
	MOV DWORD PTR [EDX],EAX
	LEA EAX,DWORD PTR [ESP+var_B0+0xC0]
	PUSH EAX
	MOV DWORD PTR [EDX+0x04],EBX
	MOV DWORD PTR [EDX+0x08],ECX
	LEA ECX,DWORD PTR [ESI+0x3C]
	CALL_LONG(offset [LEGO1_text.mFC00_sub_10010C00])
	CMP DWORD PTR [ESI+0x54],0x00
	JZ FAR loc_10010BC4
	LEA EAX,DWORD PTR [ESP+var_44+0xC0]
	MOV ECX,DWORD PTR [ESP+var_AC+0xC0]
	LEA EBX,DWORD PTR [ESP+var_80+0xC0]
	MOV DWORD PTR [ESP+var_48+0xC0],EAX
	MOV DWORD PTR [ESP+var_4C+0xC0],offset [LEGO1_rdata.m300_ptr]
	MOV EDI,DWORD PTR [ECX+0x08]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV ECX,DWORD PTR [ECX]
	MOV EAX,DWORD PTR [ESP+var_98+0xC0]
	MOV DWORD PTR [ESP+var_84+0xC0],EBX
	MOV DWORD PTR [ESP+var_80+0xC0],ECX
	LEA ECX,DWORD PTR [ESP+var_6C+0xC0]
	MOV DWORD PTR [ESP+var_7C+0xC0],EDX
	MOV DWORD PTR [ESP+var_78+0xC0],EDI
	PUSH ECX
	MOV DWORD PTR [ESP+var_84+0xC0],offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [EAX+0x08]
	MOV EBX,DWORD PTR [EAX+0x04]
	MOV EBP,DWORD PTR [EAX]
	LEA ECX,DWORD PTR [ESP+var_70+0xC0]
	CALL_LONG(offset [LEGO1_text.mB0F0_sub_1000C0F0])
	MOV EAX,DWORD PTR [ESP+r+0xC0]
	MOV DWORD PTR [ESP+var_6C+0xC0],EBP
	MOV DWORD PTR [ESP+var_68+0xC0],EBX
	MOV DWORD PTR [ESP+var_64+0xC0],EDI
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA ECX,DWORD PTR [ESP+var_60+0xC0]
	MOV DWORD PTR [ESP+var_74+0xC0],offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [EAX+0x08]
	MOV EBX,DWORD PTR [EAX+0x04]
	MOV EBP,DWORD PTR [EAX]
	LEA EAX,DWORD PTR [ESP+var_58+0xC0]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mB0F0_sub_1000C0F0])
	LEA EAX,DWORD PTR [ESP+var_4C+0xC0]
	MOV DWORD PTR [ESP+var_58+0xC0],EBP
	LEA ECX,DWORD PTR [ESP+var_88+0xC0]
	PUSH EAX
	LEA EDX,DWORD PTR [ESP+var_70+0xC0]
	PUSH ECX
	LEA EAX,DWORD PTR [ESP+var_58+0xC0]
	PUSH EDX
	MOV DWORD PTR [ESP+var_48+0xC0],EBX
	PUSH EAX
	MOV DWORD PTR [ESP+var_50+0xC0],offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [ESP+var_40+0xC0],EDI
	CALL_LONG(offset [LEGO1_text.mA4B40_sub_100A5B40])
	LEA ECX,DWORD PTR [ESP+var_3C+0xC0]
	ADD ESP, 0x10
	PUSH ECX
	MOV ECX,DWORD PTR [ESI+0x54]
	CALL_LONG(offset [LEGO1_text.mA36B0_sub_100A46B0])
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	MOV ECX,DWORD PTR [ESI+0x54]
	MOV EDX,DWORD PTR [EAX+0x68]
	PUSH ECX
	MOV ECX,DWORD PTR [EDX+0x08]
	CALL_LONG(offset [LEGO1_text.mAA210_sub_100AB210])
	CMP BYTE PTR [ESP+arg3+0xC0],0x00
	JZ loc_10010BC4
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mFC30_sub_10010C30])
loc_10010BC4:
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x000000AC
	RETN 0x0010
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010BE0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH ESI
	MOV ESI, ECX
	MOV ECX,DWORD PTR [EAX+0x04]
	PUSH ECX
	MOV EAX,DWORD PTR [ESI]
	MOV ECX, ESI
	CALL_LONG(DWORD PTR [EAX+0x20])
	MOV EAX, ESI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010C00(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH ESI
	PUSH EDI
	MOV EDI, ECX
	MOV ESI,DWORD PTR [ESP+arg1+0x8]
	MOV EAX,DWORD PTR [ESI+0x04]
	ADD ESI, 0x08
	PUSH EAX
	MOV EAX,DWORD PTR [EDI]
	CALL_LONG(DWORD PTR [EAX+0x20])
	LEA ECX,DWORD PTR [EDI+0x08]
	MOV EAX, 0x00000003
loc_10010C1C:
	MOV EDX,DWORD PTR [ESI]
	ADD ESI, 0x04
	MOV DWORD PTR [ECX],EDX
	ADD ECX, 0x04
	DEC EAX
	JNZ loc_10010C1C
	MOV EAX, EDI
	POP EDI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10010C30()
{
__asm{
	PUSH ESI
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	CMP BYTE PTR [ESI+0x58],0x00
	JZ loc_10010C5E
	TEST EAX, EAX
	JZ loc_10010C5E
	MOV ECX,DWORD PTR [EAX+0x00000098]
	TEST ECX, ECX
	JZ loc_10010C5E
	MOV EAX,DWORD PTR [ESI+0x54]
	TEST EAX, EAX
	JZ loc_10010C5E
	PUSH 0x01
	ADD EAX, 0x10
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m113E0_sub_100123E0])
loc_10010C5E:
	POP ESI
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010C60(DWORD arg1)
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		var_8 = -0x8,
		var_4 = -0x4,
		r = 0x0,
	};

__asm{
	SUB ESP, 0x14
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x54]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ loc_10010CB7
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV EDX,DWORD PTR [EAX+0x28]
	MOV EDI,DWORD PTR [EAX+0x24]
	MOV ECX,DWORD PTR [EAX+0x20]
	LEA EAX,DWORD PTR [ESP+var_C+0x1C]
	MOV DWORD PTR [ESP+var_10+0x1C],EAX
	MOV DWORD PTR [ESP+var_C+0x1C],ECX
	LEA ECX,DWORD PTR [ESI+0x28]
	PUSH EAX
	MOV DWORD PTR [ESP+var_8+0x20],EDI
	MOV DWORD PTR [ESP+var_4+0x20],EDX
	MOV DWORD PTR [ESP+var_14+0x20],offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EDI+0x20])
	MOV EDI,DWORD PTR [ESP+var_C+0x20]
	LEA EDX,DWORD PTR [ESI+0x30]
	LEA ECX,DWORD PTR [ESP+var_10+0x20]
	MOV EAX,DWORD PTR [ECX]
	MOV ECX,DWORD PTR [ECX+0x08]
	MOV DWORD PTR [EDX],EAX
	MOV DWORD PTR [EDX+0x04],EDI
	MOV DWORD PTR [EDX+0x08],ECX
loc_10010CB7:
	MOV EAX,DWORD PTR [ESP+r+0x20]
	LEA EDI,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],EDI
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	MOV EDX,DWORD PTR [ESI+0x2C]
	MOV ECX,DWORD PTR [EDX]
	MOV DWORD PTR [EDI],ECX
	MOV ESI,DWORD PTR [EDX+0x04]
	MOV DWORD PTR [EDI+0x04],ESI
	MOV EDX,DWORD PTR [EDX+0x08]
	MOV DWORD PTR [EDI+0x08],EDX
	POP EDI
	POP ESI
	ADD ESP, 0x14
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010CF0(DWORD arg1)
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		var_8 = -0x8,
		var_4 = -0x4,
		r = 0x0,
	};

__asm{
	SUB ESP, 0x14
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x54]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ loc_10010D47
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV EDX,DWORD PTR [EAX+0x18]
	MOV EDI,DWORD PTR [EAX+0x14]
	MOV ECX,DWORD PTR [EAX+0x10]
	LEA EAX,DWORD PTR [ESP+var_C+0x1C]
	MOV DWORD PTR [ESP+var_10+0x1C],EAX
	MOV DWORD PTR [ESP+var_C+0x1C],ECX
	LEA ECX,DWORD PTR [ESI+0x3C]
	PUSH EAX
	MOV DWORD PTR [ESP+var_8+0x20],EDI
	MOV DWORD PTR [ESP+var_4+0x20],EDX
	MOV DWORD PTR [ESP+var_14+0x20],offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EDI+0x20])
	MOV EDI,DWORD PTR [ESP+var_C+0x20]
	LEA EDX,DWORD PTR [ESI+0x44]
	LEA ECX,DWORD PTR [ESP+var_10+0x20]
	MOV EAX,DWORD PTR [ECX]
	MOV ECX,DWORD PTR [ECX+0x08]
	MOV DWORD PTR [EDX],EAX
	MOV DWORD PTR [EDX+0x04],EDI
	MOV DWORD PTR [EDX+0x08],ECX
loc_10010D47:
	MOV EAX,DWORD PTR [ESP+r+0x20]
	LEA EDI,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],EDI
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	MOV EDX,DWORD PTR [ESI+0x40]
	MOV ECX,DWORD PTR [EDX]
	MOV DWORD PTR [EDI],ECX
	MOV ESI,DWORD PTR [EDX+0x04]
	MOV DWORD PTR [EDI+0x04],ESI
	MOV EDX,DWORD PTR [EDX+0x08]
	MOV DWORD PTR [EDI+0x08],EDX
	POP EDI
	POP ESI
	ADD ESP, 0x14
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10010D80(DWORD arg1)
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		var_8 = -0x8,
		var_4 = -0x4,
		r = 0x0,
	};

__asm{
	SUB ESP, 0x14
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x54]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ loc_10010DD7
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV EDX,DWORD PTR [EAX+0x38]
	MOV EDI,DWORD PTR [EAX+0x34]
	MOV ECX,DWORD PTR [EAX+0x30]
	LEA EAX,DWORD PTR [ESP+var_C+0x1C]
	MOV DWORD PTR [ESP+var_10+0x1C],EAX
	MOV DWORD PTR [ESP+var_C+0x1C],ECX
	LEA ECX,DWORD PTR [ESI+0x14]
	PUSH EAX
	MOV DWORD PTR [ESP+var_8+0x20],EDI
	MOV DWORD PTR [ESP+var_4+0x20],EDX
	MOV DWORD PTR [ESP+var_14+0x20],offset [LEGO1_rdata.m488_ptr]
	MOV EDI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EDI+0x20])
	MOV EDI,DWORD PTR [ESP+var_C+0x20]
	LEA EDX,DWORD PTR [ESI+0x1C]
	LEA ECX,DWORD PTR [ESP+var_10+0x20]
	MOV EAX,DWORD PTR [ECX]
	MOV ECX,DWORD PTR [ECX+0x08]
	MOV DWORD PTR [EDX],EAX
	MOV DWORD PTR [EDX+0x04],EDI
	MOV DWORD PTR [EDX+0x08],ECX
loc_10010DD7:
	MOV EAX,DWORD PTR [ESP+r+0x20]
	LEA EDI,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],EDI
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	MOV EDX,DWORD PTR [ESI+0x18]
	MOV ECX,DWORD PTR [EDX]
	MOV DWORD PTR [EDI],ECX
	MOV ESI,DWORD PTR [EDX+0x04]
	MOV DWORD PTR [EDI+0x04],ESI
	MOV EDX,DWORD PTR [EDX+0x08]
	MOV DWORD PTR [EDI+0x08],EDX
	POP EDI
	POP ESI
	ADD ESP, 0x14
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_1001104B()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10011053()
{
	enum{
		arg1217217 = 0x4A4B04,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217217-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10011065()
{
	enum{
		arg1217180 = 0x4A4A70,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217180-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100111C4()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100111CC()
{
	enum{
		arg1217216 = 0x4A4B00,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217216-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1001124B()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10011253()
{
	enum{
		arg1217216 = 0x4A4B00,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217216-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100112D5()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100112DD()
{
	enum{
		arg1217216 = 0x4A4B00,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217216-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100112EF()
{
	enum{
		arg1217179 = 0x4A4A6C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217179-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100114E0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV AL,BYTE PTR [ESP+arg1]
	MOV BYTE PTR [ECX+0x59],AL
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10011567()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10011630()
{
__asm{
	PUSH ESI
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1778_ptr]
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m10680_sub_10011680])
	MOV EAX, ESI
	POP ESI
	RET
}
}

__declspec(naked) DWORD LEGO1_loc_10011670()
{
__asm{
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1778_ptr]
	JMP_LONG(offset [LEGO1_text.m10880_loc_10011880])
}
}

__declspec(naked) DWORD LEGO1_sub_10011680()
{
__asm{
	XOR EAX, EAX
	MOV DWORD PTR [ECX+0x08],EAX
	MOV DWORD PTR [ECX+0x0C],EAX
	MOV DWORD PTR [ECX+0x10],EAX
	MOV DWORD PTR [ECX+0x18],EAX
	MOV BYTE PTR [ECX+0x14],AL
	MOV BYTE PTR [ECX+0x15],AL
	MOV DWORD PTR [ECX+0x2C],0x0000004F
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100116A0(DWORD arg1, DWORD arg2, DWORD arg3)
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		var_4 = -0x4,
		arg1 = 0x4,
		arg3 = 0xC,
		arg1217224 = 0x4A4B20,
		arg1217239 = 0x4A4B5C,
		arg1217240 = 0x4A4B60,
		arg1217243 = 0x4A4B6C,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg3]
	SUB ESP, 0x08
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [ECX+0x2C],EAX
	PUSH EDI
	PUSH EBP
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.mAF980__IsSound3D_MxOmni__SAEXZ])
	TEST AL, AL
	JZ loc_10011720
	LEA EBX,DWORD PTR [ESI+0x08]
	MOV EDI,DWORD PTR [ESP+arg1+0x18]
	PUSH EBX
	PUSH offset LEGO1_rdata + 0x76C0
	PUSH EDI
	MOV EAX,DWORD PTR [EDI]
	CALL_LONG(DWORD PTR [EAX])
	MOV EAX,DWORD PTR [EBX]
	TEST EAX, EAX
	JNZ loc_100116E0
	MOV EAX, 0xFFFFFFFF
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x000C
loc_100116E0:
	PUSH 0x00
	PUSH 0x41700000
	PUSH EAX
	MOV EAX,DWORD PTR [EAX]
	CALL_LONG(DWORD PTR [EAX+0x44])
	MOV EAX,DWORD PTR [EBX]
	PUSH 0x00
	MOV EBP,DWORD PTR [EAX]
	PUSH 0x42C80000
	PUSH EAX
	CALL_LONG(DWORD PTR [EBP+arg1217240-0x4A4B20])
	MOV EAX,DWORD PTR [EBX]
	PUSH 0x00
	PUSH 0xC2200000
	PUSH 0x00
	PUSH 0x00
	MOV EBP,DWORD PTR [EAX]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBP+arg1217243-0x4A4B20])
	MOV EAX,DWORD PTR [EBX]
	PUSH 0x00
	MOV EBP,DWORD PTR [EAX]
	PUSH 0xFFFFD8F0
	PUSH EAX
	CALL_LONG(DWORD PTR [EBP+arg1217239-0x4A4B20])
	JMP loc_10011724
loc_10011720:
	MOV EDI,DWORD PTR [ESP+var_8+0x24]
loc_10011724:
	CMP DWORD PTR [ESI+0x08],0x00
	JZ FAR loc_10011871
	MOV EBP,DWORD PTR [ESP+var_4+0x24]
	TEST EBP, EBP
	JZ FAR loc_10011871
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	PUSH EBP
	CALL_LONG(offset [LEGO1_text.m83C00_sub_10084C00])
	ADD ESP, 0x04
	TEST AL, AL
	JZ loc_1001176A
	MOV EBX, 0x00000001
	PUSH EBX
	PUSH EBP
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m82500_sub_10083500])
	MOV DWORD PTR [ESI+0x0C],EAX
	MOV BYTE PTR [ESI+0x15],BL
	MOV BYTE PTR [ESI+0x14],BL
	JMP loc_10011776
loc_1001176A:
	PUSH EBP
	CALL_LONG(offset [LEGO1_text.m14840_sub_10015840])
	ADD ESP, 0x04
	MOV DWORD PTR [ESI+0x0C],EAX
loc_10011776:
	CMP DWORD PTR [ESI+0x0C],0x00
	JNZ loc_10011798
	PUSH 0x01
	PUSH EBP
	PUSH 0x00
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m84210_sub_10085210])
	MOV DWORD PTR [ESI+0x0C],EAX
	TEST EAX, EAX
	JZ loc_10011798
	MOV BYTE PTR [ESI+0x14],0x01
loc_10011798:
	MOV ECX,DWORD PTR [ESI+0x0C]
	TEST ECX, ECX
	JNZ loc_100117AB
	XOR EAX, EAX
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x000C
loc_100117AB:
	CMP BYTE PTR [ESI+0x15],0x00
	LEA EBX,DWORD PTR [ESI+0x10]
	JZ loc_100117C3
	PUSH ECX
	PUSH offset LEGO1_data + 0x848
	CALL_LONG(offset [LEGO1_text.mA7CE0_sub_100A8CE0])
	MOV DWORD PTR [EBX],EAX
	JMP loc_100117C5
loc_100117C3:
	MOV DWORD PTR [EBX],ECX
loc_100117C5:
	CALL_LONG(offset [LEGO1_text.mAF980__IsSound3D_MxOmni__SAEXZ])
	TEST AL, AL
	JZ loc_100117EC
	MOV EAX,DWORD PTR [EBX]
	MOV EDX,DWORD PTR [ESI+0x08]
	PUSH 0x00
	MOV ECX,DWORD PTR [EAX+0x14]
	MOV EAX,DWORD PTR [ECX+0x38]
	MOV EBX,DWORD PTR [ECX+0x34]
	ADD ECX, 0x30
	PUSH EAX
	PUSH EBX
	MOV EAX,DWORD PTR [EDX]
	MOV ECX,DWORD PTR [ECX]
	PUSH ECX
	PUSH EDX
	CALL_LONG(DWORD PTR [EAX+0x4C])
loc_100117EC:
	MOV EAX,DWORD PTR [ESI+0x0C]
	MOV EBP,DWORD PTR [EAX+0x00000104]
	TEST EBP, EBP
	JZ loc_1001181F
	MOV EBX,DWORD PTR [EBP+arg1217224-0x4A4B20]
	PUSH offset [LEGO1_data.m124_str]
	MOV ECX, EBP
	CALL_LONG(DWORD PTR [EBX+0x10])
	TEST AL, AL
	JZ loc_1001181F
	MOV ECX, EBP
	CALL_LONG(DWORD PTR [EBX+0x50])
	FCOMP DWORD PTR [offset LEGO1_rdata + 0x1740]
	FNSTSW AX
	TEST AH,0x40
	JNZ loc_1001181F
	MOV DWORD PTR [ESI+0x18],EBP
loc_1001181F:
	MOV EBX,DWORD PTR [EDI]
	LEA EBP,DWORD PTR [ESI+0x28]
	PUSH EBP
	PUSH EDI
	CALL_LONG(DWORD PTR [EBX+0x20])
	MOV ECX,DWORD PTR [ESI+0x18]
	TEST ECX, ECX
	JZ loc_10011865
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x50])
	FCOM QWORD PTR [offset LEGO1_rdata + 0x1748]
	FSTP QWORD PTR [ESI+0x20]
	FNSTSW AX
	TEST AH,0x40
	JNZ loc_10011865
	MOV EAX,DWORD PTR [EBP+arg1217224-0x4A4B20]
	MOV DWORD PTR [ESP+var_14+0x24],EAX
	MOV DWORD PTR [ESP+var_10+0x24],0x00000000
	FILD QWORD PTR [ESP+var_14+0x24]
	FMUL QWORD PTR [ESI+0x20]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	PUSH EAX
	PUSH EDI
	CALL_LONG(DWORD PTR [EBX+0x44])
loc_10011865:
	XOR EAX, EAX
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x000C
loc_10011871:
	XOR EAX, EAX
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x000C
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100118E0(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	SUB ESP, 0x08
	PUSH EBX
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x10]
	PUSH EDI
	MOV ESI, ECX
	XOR EBX, EBX
	TEST EAX, EAX
	JZ FAR loc_100119FE
	MOV EDI,DWORD PTR [EAX+0x14]
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	ADD EDI, 0x30
	MOV EAX,DWORD PTR [EAX+0x6C]
	MOV EAX,DWORD PTR [EAX+0x14]
	ADD EAX, 0x30
	FLD DWORD PTR [EAX+0x08]
	FSUB DWORD PTR [EDI+0x08]
	FLD DWORD PTR [EAX+0x04]
	FSUB DWORD PTR [EDI+0x04]
	FLD DWORD PTR [EAX]
	FSUB DWORD PTR [EDI]
	FXCH ST(2)
	FMUL ST(0),ST
	FXCH ST(1)
	FMUL ST(0),ST
	FADDP ST(1),ST
	FXCH ST(1)
	FMUL ST(0),ST
	FADDP ST(1),ST
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1750]
	FSTP DWORD PTR [ESP+var_8+0x14]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10011945
	XOR EAX, EAX
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x0004
loc_10011945:
	MOV ECX,DWORD PTR [ESI+0x08]
	TEST ECX, ECX
	JZ loc_1001196D
	PUSH 0x00
	MOV EAX,DWORD PTR [EDI+0x08]
	PUSH EAX
	MOV EDX,DWORD PTR [EDI+0x04]
	PUSH EDX
	MOV EBX,DWORD PTR [EDI]
	PUSH EBX
	MOV EAX,DWORD PTR [ECX]
	PUSH ECX
	MOV EBX, 0x00000001
	CALL_LONG(DWORD PTR [EAX+0x4C])
	MOV EDI,DWORD PTR [ESP+var_10+0x28]
	JMP FAR loc_10011A02
loc_1001196D:
	CMP DWORD PTR [ESP+var_1C+0x28],0x42C80000
	MOV EDI,DWORD PTR [ESI+0x2C]
	JL loc_100119C8
	CMP DWORD PTR [ESP+var_1C+0x28],0x43C80000
	JGE loc_1001199B
	MOV DWORD PTR [ESP+var_1C+0x28],EDI
	FILD DWORD PTR [ESP+var_1C+0x28]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1758]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EDI, EAX
	JMP loc_100119C8
loc_1001199B:
	CMP DWORD PTR [ESP+var_1C+0x28],0x45610000
	JGE loc_100119BC
	MOV DWORD PTR [ESP+var_1C+0x28],EDI
	FILD DWORD PTR [ESP+var_1C+0x28]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1768]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EDI, EAX
	JMP loc_100119C8
loc_100119BC:
	CMP DWORD PTR [ESP+var_1C+0x28],0x461C4000
	JGE loc_100119C8
	XOR EDI, EDI
loc_100119C8:
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	MOV EDX,DWORD PTR [EAX]
	MOV ECX, EAX
	CALL_LONG(DWORD PTR [EDX+0x28])
	IMUL EAX,EDI
	CDQ
	MOV ECX, 0x00000064
	IDIV ECX
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mADCF0_sub_100AECF0])
	MOV EDI,DWORD PTR [ESP+var_10+0x28]
	PUSH EAX
	PUSH EDI
	MOV EBX,DWORD PTR [EDI]
	CALL_LONG(DWORD PTR [EBX+0x3C])
	MOV EBX, 0x00000001
	JMP loc_10011A02
loc_100119FE:
	MOV EDI,DWORD PTR [ESP+var_10+0x28]
loc_10011A02:
	MOV ECX,DWORD PTR [ESI+0x18]
	TEST ECX, ECX
	JZ loc_10011A52
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x50])
	FSUBR QWORD PTR [ESI+0x20]
	FABS
	FCOMP QWORD PTR [offset LEGO1_rdata + 0x1770]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10011A52
	MOV ECX,DWORD PTR [ESI+0x18]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x50])
	FSTP QWORD PTR [ESI+0x20]
	MOV ECX,DWORD PTR [ESI+0x28]
	MOV DWORD PTR [ESP+var_1C+0x28],ECX
	MOV DWORD PTR [ESP+var_18+0x28],0x00000000
	FILD QWORD PTR [ESP+var_1C+0x28]
	FMUL QWORD PTR [ESI+0x20]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	PUSH EAX
	MOV EBX,DWORD PTR [EDI]
	PUSH EDI
	CALL_LONG(DWORD PTR [EBX+0x44])
	MOV EBX, 0x00000001
loc_10011A52:
	MOV EAX, EBX
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10011A60(DWORD arg1, DWORD arg2)
{
	enum{
		var_1C = -0x1C,
		var_10 = -0x10,
		var_C = -0xC,
		var_4 = -0x4,
		arg2 = 0x8,
		arg1217224 = 0x4A4B20,
	};

__asm{
	SUB ESP, 0x08
	PUSH EBX
	PUSH ESI
	PUSH EDI
	MOV ESI, ECX
	MOV EDI,DWORD PTR [ESP+arg2+0x14]
	PUSH EBP
	TEST EDI, EDI
	JNZ loc_10011A90
	MOV EAX,DWORD PTR [ESI+0x08]
	TEST EAX, EAX
	JZ FAR loc_10011C92
	PUSH 0x00
	PUSH 0x02
	PUSH EAX
	MOV EAX,DWORD PTR [EAX]
	CALL_LONG(DWORD PTR [EAX+0x48])
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x0008
loc_10011A90:
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	PUSH EDI
	CALL_LONG(offset [LEGO1_text.m83C00_sub_10084C00])
	ADD ESP, 0x04
	TEST AL, AL
	JZ loc_10011AC0
	MOV EBX, 0x00000001
	PUSH EBX
	PUSH EDI
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m82500_sub_10083500])
	MOV DWORD PTR [ESI+0x0C],EAX
	MOV BYTE PTR [ESI+0x15],BL
	MOV BYTE PTR [ESI+0x14],BL
	JMP loc_10011ACC
loc_10011AC0:
	PUSH EDI
	CALL_LONG(offset [LEGO1_text.m14840_sub_10015840])
	ADD ESP, 0x04
	MOV DWORD PTR [ESI+0x0C],EAX
loc_10011ACC:
	CMP DWORD PTR [ESI+0x0C],0x00
	JNZ loc_10011AEE
	PUSH 0x01
	PUSH EDI
	PUSH 0x00
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m84210_sub_10085210])
	MOV DWORD PTR [ESI+0x0C],EAX
	TEST EAX, EAX
	JZ loc_10011AEE
	MOV BYTE PTR [ESI+0x14],0x01
loc_10011AEE:
	MOV ECX,DWORD PTR [ESI+0x0C]
	TEST ECX, ECX
	JZ FAR loc_10011C92
	CMP BYTE PTR [ESI+0x15],0x00
	LEA EDI,DWORD PTR [ESI+0x10]
	JZ loc_10011B11
	PUSH ECX
	PUSH offset LEGO1_data + 0x848
	CALL_LONG(offset [LEGO1_text.mA7CE0_sub_100A8CE0])
	MOV DWORD PTR [EDI],EAX
	JMP loc_10011B13
loc_10011B11:
	MOV DWORD PTR [EDI],ECX
loc_10011B13:
	MOV EAX,DWORD PTR [ESI+0x08]
	TEST EAX, EAX
	JZ loc_10011B5C
	LEA ECX,DWORD PTR [ESP+var_1C+0x2C]
	PUSH ECX
	PUSH EAX
	MOV EAX,DWORD PTR [EAX]
	CALL_LONG(DWORD PTR [EAX+0x24])
	TEST BYTE PTR [ESP+var_10+0x20],0x2
	JZ loc_10011B39
	MOV EAX,DWORD PTR [ESI+0x08]
	PUSH 0x00
	MOV EBX,DWORD PTR [EAX]
	PUSH 0x00
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x48])
loc_10011B39:
	MOV EAX,DWORD PTR [EDI]
	MOV EDX,DWORD PTR [ESI+0x08]
	PUSH 0x00
	MOV ECX,DWORD PTR [EAX+0x14]
	MOV EAX,DWORD PTR [ECX+0x38]
	MOV EBX,DWORD PTR [ECX+0x34]
	ADD ECX, 0x30
	PUSH EAX
	PUSH EBX
	MOV EAX,DWORD PTR [EDX]
	MOV ECX,DWORD PTR [ECX]
	PUSH ECX
	PUSH EDX
	CALL_LONG(DWORD PTR [EAX+0x4C])
	JMP FAR loc_10011C15
loc_10011B5C:
	MOV EAX,DWORD PTR [EDI]
	MOV EDI,DWORD PTR [EAX+0x14]
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	ADD EDI, 0x30
	MOV EAX,DWORD PTR [EAX+0x6C]
	TEST EAX, EAX
	JZ FAR loc_10011C15
	MOV EAX,DWORD PTR [EAX+0x14]
	ADD EAX, 0x30
	FLD DWORD PTR [EAX+0x04]
	FSUB DWORD PTR [EDI+0x04]
	FLD DWORD PTR [EAX+0x08]
	FSUB DWORD PTR [EDI+0x08]
	FLD DWORD PTR [EAX]
	FSUB DWORD PTR [EDI]
	FXCH ST(2)
	FMUL ST(0),ST
	FXCH ST(1)
	FMUL ST(0),ST
	FADDP ST(1),ST
	FXCH ST(1)
	FMUL ST(0),ST
	FADDP ST(1),ST
	FCOM DWORD PTR [offset LEGO1_rdata + 0x1738]
	FSTP DWORD PTR [ESP+var_10+0x20]
	FNSTSW AX
	TEST AH,0x01
	JZ loc_10011BB0
	MOV EDI,DWORD PTR [ESI+0x2C]
	JMP loc_10011BE4
loc_10011BB0:
	CMP DWORD PTR [ESP+var_10+0x20],0x43C80000
	JGE loc_10011BC5
	FILD DWORD PTR [ESI+0x2C]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1758]
	JMP loc_10011BDD
loc_10011BC5:
	CMP DWORD PTR [ESP+var_10+0x20],0x45610000
	MOV EDI, 0x00000000
	JGE loc_10011BE4
	FILD DWORD PTR [ESI+0x2C]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1768]
loc_10011BDD:
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EDI, EAX
loc_10011BE4:
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	MOV ECX, EAX
	MOV EAX,DWORD PTR [EAX]
	CALL_LONG(DWORD PTR [EAX+0x28])
	IMUL EAX,EDI
	CDQ
	MOV ECX, 0x00000064
	IDIV ECX
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mADCF0_sub_100AECF0])
	MOV EDI,DWORD PTR [ESP+var_4+0x20]
	PUSH EAX
	PUSH EDI
	MOV EBX,DWORD PTR [EDI]
	CALL_LONG(DWORD PTR [EBX+0x3C])
	JMP loc_10011C19
loc_10011C15:
	MOV EDI,DWORD PTR [ESP+var_4+0x20]
loc_10011C19:
	MOV EAX,DWORD PTR [ESI+0x0C]
	MOV EBP,DWORD PTR [EAX+0x00000104]
	TEST EBP, EBP
	JZ loc_10011C4C
	MOV EBX,DWORD PTR [EBP+arg1217224-0x4A4B20]
	PUSH offset [LEGO1_data.m124_str]
	MOV ECX, EBP
	CALL_LONG(DWORD PTR [EBX+0x10])
	TEST AL, AL
	JZ loc_10011C4C
	MOV ECX, EBP
	CALL_LONG(DWORD PTR [EBX+0x50])
	FCOMP DWORD PTR [offset LEGO1_rdata + 0x1740]
	FNSTSW AX
	TEST AH,0x40
	JNZ loc_10011C4C
	MOV DWORD PTR [ESI+0x18],EBP
loc_10011C4C:
	MOV EBX,DWORD PTR [EDI]
	LEA EBP,DWORD PTR [ESI+0x28]
	PUSH EBP
	PUSH EDI
	CALL_LONG(DWORD PTR [EBX+0x20])
	MOV ECX,DWORD PTR [ESI+0x18]
	TEST ECX, ECX
	JZ loc_10011C92
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x50])
	FCOM QWORD PTR [offset LEGO1_rdata + 0x1748]
	FSTP QWORD PTR [ESI+0x20]
	FNSTSW AX
	TEST AH,0x40
	JNZ loc_10011C92
	MOV EAX,DWORD PTR [EBP+arg1217224-0x4A4B20]
	MOV DWORD PTR [ESP+var_10+0x20],EAX
	MOV DWORD PTR [ESP+var_C+0x20],0x00000000
	FILD QWORD PTR [ESP+var_10+0x20]
	FMUL QWORD PTR [ESI+0x20]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	PUSH EAX
	PUSH EDI
	CALL_LONG(DWORD PTR [EBX+0x44])
loc_10011C92:
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x08
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_10011CA0()
{
__asm{
	PUSH ESI
	MOV ESI, ECX
	CMP BYTE PTR [ECX+0x14],0x00
	JZ loc_10011CDC
	CMP DWORD PTR [ESI+0x0C],0x00
	JZ loc_10011CDC
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	TEST EAX, EAX
	JZ loc_10011CDC
	CMP BYTE PTR [ESI+0x15],0x00
	MOV EAX,DWORD PTR [ESI+0x0C]
	PUSH EAX
	JZ loc_10011CD0
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m82DB0_sub_10083DB0])
	JMP loc_10011CDC
loc_10011CD0:
	CALL_LONG(offset [LEGO1_text.m147B0_sub_100157B0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m82F10_sub_10083F10])
loc_10011CDC:
	XOR EAX, EAX
	MOV DWORD PTR [ESI+0x0C],EAX
	MOV DWORD PTR [ESI+0x10],EAX
	MOV DWORD PTR [ESI+0x18],EAX
	POP ESI
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10011CF0(DWORD arg1, DWORD arg2)
{
	enum{
		var_4 = -0x4,
		arg1 = 0x4,
	};

__asm{
	SUB ESP, 0x04
	PUSH ESI
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.mAF980__IsSound3D_MxOmni__SAEXZ])
	TEST AL, AL
	JZ loc_10011D42
	MOV ECX,DWORD PTR [ESI+0x08]
	TEST ECX, ECX
	JNZ loc_10011D12
	MOV EAX, 0xFFFFFFFF
	POP ESI
	ADD ESP, 0x04
	RETN 0x0008
loc_10011D12:
	FILD DWORD PTR [ESP+arg1+0x8]
	PUSH 0x00
	SUB ESP, 0x04
	FSTP DWORD PTR [ESP]
	PUSH ECX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x44])
	FILD DWORD PTR [ESP+var_4+0x14]
	MOV ECX,DWORD PTR [ESI+0x08]
	PUSH 0x00
	SUB ESP, 0x04
	FSTP DWORD PTR [ESP]
	PUSH ECX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x40])
	XOR EAX, EAX
	POP ESI
	ADD ESP, 0x04
	RETN 0x0008
loc_10011D42:
	MOV EAX, 0x00000001
	POP ESI
	ADD ESP, 0x04
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_10011D50()
{
	enum{
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		var_3C = -0x3C,
		var_38 = -0x38,
		var_34 = -0x34,
		var_30 = -0x30,
		var_2C = -0x2C,
		var_28 = -0x28,
		var_24 = -0x24,
		var_20 = -0x20,
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m10E29_proc_10011E29]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x40
	PUSH ESI
	PUSH EDI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m646E0_sub_100656E0])
	XOR ECX, ECX
	LEA EAX,DWORD PTR [ESI+0x40]
	MOV DWORD PTR [EBP+var_8+0x4],ECX
	MOV DWORD PTR [ESI+0x38],offset [LEGO1_rdata.m350_ptr]
	MOV DWORD PTR [ESI+0x3C],EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m17B0_ptr]
	LEA EAX,DWORD PTR [ESI+0x00000088]
	LEA EDX,DWORD PTR [EBP+var_48+0x4]
	MOV DWORD PTR [ESI+0x00000084],EAX
	MOV DWORD PTR [EBP+var_4C+0x4],EDX
	MOV EAX, 0x3F800000
	MOV DWORD PTR [EBP+var_48+0x4],ECX
	MOV DWORD PTR [EBP+var_44+0x4],EAX
	MOV DWORD PTR [EBP+var_40+0x4],ECX
	MOV DWORD PTR [ESI+0x38],offset [LEGO1_rdata.m300_ptr]
	LEA EDI,DWORD PTR [EBP+var_34+0x4]
	MOV DWORD PTR [EBP+var_34+0x4],ECX
	MOV DWORD PTR [EBP+var_38+0x4],EDI
	MOV DWORD PTR [EBP+var_30+0x4],ECX
	LEA EDX,DWORD PTR [EBP+var_20+0x4]
	MOV DWORD PTR [EBP+var_2C+0x4],EAX
	MOV DWORD PTR [ESI+0x00000080],offset [LEGO1_rdata.m350_ptr]
	MOV DWORD PTR [ESI+0x00000080],offset [LEGO1_rdata.m300_ptr]
	MOV DWORD PTR [EBP+var_24+0x4],EDX
	MOV DWORD PTR [EBP+var_20+0x4],ECX
	MOV DWORD PTR [EBP+var_1C+0x4],ECX
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	LEA EAX,DWORD PTR [EBP+var_50+0x4]
	LEA ECX,DWORD PTR [EBP+var_3C+0x4]
	PUSH EAX
	LEA EDX,DWORD PTR [EBP+var_28+0x4]
	MOV DWORD PTR [EBP+var_50+0x4],offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [EBP+var_3C+0x4],offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [EBP+var_28+0x4],offset [LEGO1_rdata.m488_ptr]
	PUSH ECX
	PUSH EDX
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m11260_sub_10012260])
	MOV EAX, ESI
	POP EDI
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10011F70()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m10FD6_proc_10011FD6]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m17B0_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.m14740__InputManager__YAPAVLegoInputManager__XZ])
	TEST EAX, EAX
	JZ loc_10011FBD
	CALL_LONG(offset [LEGO1_text.m14740__InputManager__YAPAVLegoInputManager__XZ])
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	CMP DWORD PTR [EAX+0x60],ECX
	JNZ loc_10011FBD
	CALL_LONG(offset [LEGO1_text.m14740__InputManager__YAPAVLegoInputManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5B710_sub_1005C710])
loc_10011FBD:
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m10FE0_sub_10011FE0])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10011FE0()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m64770_loc_10065770])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012170(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	MOV EDX,DWORD PTR [ESP+arg2]
	MOV DWORD PTR [ECX],EAX
	MOV DWORD PTR [ECX+0x04],EDX
	MOV EAX, ECX
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_10012190()
{
__asm{
	MOV EAX,DWORD PTR [ECX+0x10]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100121A0()
{
__asm{
	MOV EAX,DWORD PTR [ECX+0x14]
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012260(DWORD arg1, DWORD arg2, DWORD arg3)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
		arg3 = 0xC,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg3]
	PUSH ESI
	PUSH EDI
	MOV ESI, ECX
	MOV ECX,DWORD PTR [ESP+arg2+0x8]
	MOV EDX,DWORD PTR [ESP+arg1+0x8]
	LEA EDI,DWORD PTR [ESI+0x38]
	PUSH EDI
	PUSH EAX
	PUSH ECX
	PUSH EDX
	CALL_LONG(offset [LEGO1_text.mA4B40_sub_100A5B40])
	ADD ESP, 0x10
	LEA ECX,DWORD PTR [ESI+0x00000080]
	PUSH EDI
	MOV ESI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [ESI+0x48])
	POP EDI
	POP ESI
	RETN 0x000C
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012290(DWORD arg1)
{
	enum{
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		r = 0x0,
	};

__asm{
	SUB ESP, 0x48
	PUSH EBX
	PUSH ESI
	LEA EAX,DWORD PTR [ECX+0x00000080]
	PUSH EDI
	MOV EBX, ECX
	PUSH EAX
	LEA ECX,DWORD PTR [EBX+0x38]
	MOV ESI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [ESI+0x48])
	FLD DWORD PTR [ESP+r+0x58]
	FSIN
	MOV ESI,DWORD PTR [EBX+0x3C]
	MOV ECX, 0x00000010
	LEA EDI,DWORD PTR [ESP+var_44+0x58]
	FSTP DWORD PTR [ESP+var_4C+0x58]
	FLD DWORD PTR [ESP+r+0x58]
	FCOS
	FSTP DWORD PTR [ESP+var_48+0x58]
	REP MOVSD
	XOR ESI, ESI
	JMP loc_100122D1
loc_100122CD:
	FSTP DWORD PTR [ESI+EDX-0x0C]
loc_100122D1:
	LEA EAX,DWORD PTR [ESI+ESP+var_44+0x58]
	LEA ECX,DWORD PTR [ESI+ESP+var_40+0x58]
	MOV EDX,DWORD PTR [EBX+0x3C]
	ADD ESI, 0x10
	FLD DWORD PTR [EAX]
	FMUL DWORD PTR [ESP+var_48+0x58]
	FLD DWORD PTR [ECX]
	FMUL DWORD PTR [ESP+var_4C+0x58]
	CMP ESI, 0x40
	FCOMPP
	FSTP DWORD PTR [ESI+EDX-0x10]
	FLD DWORD PTR [EAX]
	FMUL DWORD PTR [ESP+var_4C+0x58]
	FLD DWORD PTR [ECX]
	FMUL DWORD PTR [ESP+var_48+0x58]
	MOV EDX,DWORD PTR [EBX+0x3C]
	FADDP ST(1),ST
	JL loc_100122CD
	FSTP DWORD PTR [ESI+EDX-0x0C]
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x48
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012320(DWORD arg1)
{
	enum{
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_3C = -0x3C,
		r = 0x0,
	};

__asm{
	SUB ESP, 0x48
	PUSH EBX
	PUSH ESI
	LEA EAX,DWORD PTR [ECX+0x00000080]
	PUSH EDI
	MOV EBX, ECX
	PUSH EAX
	LEA ECX,DWORD PTR [EBX+0x38]
	MOV ESI,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [ESI+0x48])
	FLD DWORD PTR [ESP+r+0x58]
	FSIN
	MOV ESI,DWORD PTR [EBX+0x3C]
	MOV ECX, 0x00000010
	LEA EDI,DWORD PTR [ESP+var_44+0x58]
	FSTP DWORD PTR [ESP+var_48+0x58]
	FLD DWORD PTR [ESP+r+0x58]
	FCOS
	FSTP DWORD PTR [ESP+var_4C+0x58]
	REP MOVSD
	XOR ESI, ESI
	JMP loc_10012361
loc_1001235D:
	FSTP DWORD PTR [ESI+EDX-0x08]
loc_10012361:
	LEA EAX,DWORD PTR [ESI+ESP+var_44+0x58]
	LEA ECX,DWORD PTR [ESI+ESP+var_3C+0x58]
	MOV EDX,DWORD PTR [EBX+0x3C]
	ADD ESI, 0x10
	FLD DWORD PTR [EAX]
	FMUL DWORD PTR [ESP+var_4C+0x58]
	FLD DWORD PTR [ECX]
	FMUL DWORD PTR [ESP+var_48+0x58]
	CMP ESI, 0x40
	FADDP ST(1),ST
	FSTP DWORD PTR [ESI+EDX-0x10]
	FLD DWORD PTR [ECX]
	FMUL DWORD PTR [ESP+var_4C+0x58]
	FLD DWORD PTR [EAX]
	FMUL DWORD PTR [ESP+var_48+0x58]
	MOV EDX,DWORD PTR [EBX+0x3C]
	FCOMPP
	JL loc_1001235D
	FSTP DWORD PTR [ESI+EDX-0x08]
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x48
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100123B0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ECX+0x20]
	TEST EAX, EAX
	JZ loc_100123D3
	MOV EAX,DWORD PTR [EAX+0x000000A0]
	TEST EAX, EAX
	JZ loc_100123D3
	ADD EAX, 0x10
	MOV ECX,DWORD PTR [ESP+arg1]
	PUSH EAX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x28])
	XOR EAX, EAX
	RETN 0x0004
loc_100123D3:
	MOV EAX, 0xFFFFFFFF
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100123E0(DWORD arg1, DWORD arg2)
{
	enum{
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	SUB ESP, 0x48
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x20]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ FAR loc_10012732
	MOV EDI,DWORD PTR [EAX+0x000000A0]
	TEST EDI, EDI
	JZ FAR loc_10012732
	LEA EAX,DWORD PTR [ESP+var_40+0x50]
	MOV ECX,DWORD PTR [ESP+arg1+0x50]
	MOV DWORD PTR [ESP+var_48+0x50],offset [LEGO1_rdata.m300_ptr]
	CMP DWORD PTR [ESP+arg2+0x50],0x00
	MOV DWORD PTR [ESP+var_44+0x50],EAX
	JZ FAR loc_100126C6
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EAX+0x08]
	FMUL DWORD PTR [EDX+0x20]
	FLD DWORD PTR [EAX+0x0C]
	FMUL DWORD PTR [EDX+0x30]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x04]
	FMUL DWORD PTR [EDX+0x10]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX]
	FMUL DWORD PTR [EAX]
	FADDP ST(1),ST
	FSTP DWORD PTR [ESP+var_40+0x50]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x04]
	FLD DWORD PTR [EDX+0x24]
	FMUL DWORD PTR [EAX+0x08]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x0C]
	FMUL DWORD PTR [EDX+0x34]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x04]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x04]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EAX+0x04]
	FMUL DWORD PTR [EDX+0x18]
	FLD DWORD PTR [EDX+0x28]
	FMUL DWORD PTR [EAX+0x08]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x0C]
	FMUL DWORD PTR [EDX+0x38]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x08]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x08]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EAX+0x04]
	FMUL DWORD PTR [EDX+0x1C]
	FLD DWORD PTR [EAX+0x08]
	FMUL DWORD PTR [EDX+0x2C]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x3C]
	FMUL DWORD PTR [EAX+0x0C]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x0C]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x0C]
	MOV EDX,DWORD PTR [ESI+0x3C]
	MOV EAX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EDX+0x1C]
	FMUL DWORD PTR [EAX+0x30]
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x10]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x18]
	FMUL DWORD PTR [EAX+0x20]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x10]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x10]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EDX+0x24]
	FMUL DWORD PTR [EAX+0x18]
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x14]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x04]
	FMUL DWORD PTR [EAX+0x10]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x1C]
	FMUL DWORD PTR [EDX+0x34]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x14]
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV EDX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x18]
	FLD DWORD PTR [EAX+0x08]
	FMUL DWORD PTR [EDX+0x10]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x28]
	FMUL DWORD PTR [EDX+0x18]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x1C]
	FMUL DWORD PTR [EAX+0x38]
	MOV EAX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EAX+0x18]
	MOV EDX,DWORD PTR [ESI+0x3C]
	MOV EAX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x1C]
	FLD DWORD PTR [EDX+0x18]
	FMUL DWORD PTR [EAX+0x2C]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x3C]
	FMUL DWORD PTR [EDX+0x1C]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x0C]
	FMUL DWORD PTR [EDX+0x10]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x1C]
	MOV EDX,DWORD PTR [ESI+0x3C]
	MOV EAX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EDX+0x2C]
	FMUL DWORD PTR [EAX+0x30]
	FLD DWORD PTR [EDX+0x24]
	FMUL DWORD PTR [EAX+0x10]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x28]
	FMUL DWORD PTR [EAX+0x20]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x20]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x20]
	MOV EDX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EDX+0x24]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FMUL DWORD PTR [EAX+0x28]
	FLD DWORD PTR [EAX+0x24]
	FMUL DWORD PTR [EDX+0x14]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x04]
	FMUL DWORD PTR [EAX+0x20]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x2C]
	FMUL DWORD PTR [EDX+0x34]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x24]
	MOV EAX,DWORD PTR [ESI+0x3C]
	MOV EDX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EAX+0x24]
	FMUL DWORD PTR [EDX+0x18]
	FLD DWORD PTR [EDX+0x08]
	FMUL DWORD PTR [EAX+0x20]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x28]
	FMUL DWORD PTR [EAX+0x28]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x2C]
	FMUL DWORD PTR [EDX+0x38]
	MOV EAX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EAX+0x28]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EAX+0x24]
	FMUL DWORD PTR [EDX+0x1C]
	FLD DWORD PTR [EAX+0x28]
	FMUL DWORD PTR [EDX+0x2C]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x3C]
	FMUL DWORD PTR [EAX+0x2C]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x0C]
	FMUL DWORD PTR [EAX+0x20]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x2C]
	MOV EDX,DWORD PTR [ESI+0x3C]
	MOV EAX,DWORD PTR [ECX+0x04]
	FLD DWORD PTR [EDX+0x3C]
	FMUL DWORD PTR [EAX+0x30]
	FLD DWORD PTR [EAX+0x10]
	FMUL DWORD PTR [EDX+0x34]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x20]
	FMUL DWORD PTR [EDX+0x38]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x30]
	FMUL DWORD PTR [EAX]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x30]
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EDX+0x24]
	FMUL DWORD PTR [EAX+0x38]
	FLD DWORD PTR [EAX+0x3C]
	FMUL DWORD PTR [EDX+0x34]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x04]
	FMUL DWORD PTR [EAX+0x30]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x14]
	FMUL DWORD PTR [EAX+0x34]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x34]
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV EDX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [EAX+0x18]
	FMUL DWORD PTR [EDX+0x34]
	FLD DWORD PTR [EAX+0x08]
	FMUL DWORD PTR [EDX+0x30]
	FADDP ST(1),ST
	FLD DWORD PTR [EAX+0x28]
	FMUL DWORD PTR [EDX+0x38]
	FADDP ST(1),ST
	FLD DWORD PTR [EDX+0x3C]
	FMUL DWORD PTR [EAX+0x38]
	MOV EAX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FSTP DWORD PTR [EAX+0x38]
	MOV ECX,DWORD PTR [ECX+0x04]
	MOV EAX,DWORD PTR [ESI+0x3C]
	FLD DWORD PTR [ECX+0x0C]
	FMUL DWORD PTR [EAX+0x30]
	FLD DWORD PTR [ECX+0x3C]
	FMUL DWORD PTR [EAX+0x3C]
	FADDP ST(1),ST
	FLD DWORD PTR [ECX+0x1C]
	FMUL DWORD PTR [EAX+0x34]
	MOV EDX,DWORD PTR [ESP+var_44+0x50]
	FADDP ST(1),ST
	FLD DWORD PTR [ECX+0x2C]
	FMUL DWORD PTR [EAX+0x38]
	FADDP ST(1),ST
	FSTP DWORD PTR [EDX+0x3C]
	JMP loc_100126D1
loc_100126C6:
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_48+0x54]
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m328_ptr])
loc_100126D1:
	CALL_LONG(offset [LEGO1_text.mABED0__Timer__YAPAVMxTimer__XZ])
	CMP BYTE PTR [EAX+0x0C],0x00
	JZ loc_100126E4
	MOV ECX,DWORD PTR [offset LEGO1_data + 0x11418]
	JMP loc_100126ED
loc_100126E4:
	MOV ECX,DWORD PTR [offset LEGO1_data + 0x11414]
	SUB ECX,DWORD PTR [EAX+0x08]
loc_100126ED:
	LEA EAX,DWORD PTR [ESP+var_4C+0x54]
	PUSH ECX
	PUSH EAX
	MOV ECX, EDI
	CALL_LONG(offset [LEGO1_text.mA8B40_sub_100A9B40])
	LEA EAX,DWORD PTR [ESP+var_4C+0x54]
	MOV ECX, EDI
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mA36A0_sub_100A46A0])
	PUSH EDI
	MOV ECX,DWORD PTR [ESI+0x20]
	CALL_LONG(offset [LEGO1_text.mAA210_sub_100AB210])
	MOV ESI,DWORD PTR [EDI+0x14]
	MOV EAX,DWORD PTR [EDI]
	MOV ECX, EDI
	ADD ESI, 0x30
	CALL_LONG(DWORD PTR [EAX+0x08])
	PUSH EAX
	LEA ECX,DWORD PTR [ESI-0x10]
	LEA EAX,DWORD PTR [ESI-0x20]
	PUSH EAX
	PUSH ECX
	PUSH ESI
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m29410_sub_1002A410])
loc_10012732:
	POP EDI
	POP ESI
	ADD ESP, 0x48
	RETN 0x0008
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012740(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		r = 0x0,
		arg1 = 0x4,
	};

__asm{
	SUB ESP, 0x1C
	MOV EAX,DWORD PTR [ECX+0x20]
	TEST EAX, EAX
	PUSH ESI
	PUSH EDI
	JZ loc_100127BE
	CMP DWORD PTR [EAX+0x000000A0],0x00
	JZ loc_100127BE
	MOV DWORD PTR [ESP+var_14+0x24],offset [LEGO1_rdata.m488_ptr]
	LEA ECX,DWORD PTR [ESP+var_C+0x24]
	MOV DWORD PTR [ESP+var_10+0x24],ECX
	LEA ECX,DWORD PTR [ESP+var_1C+0x24]
	MOV EAX,DWORD PTR [EAX+0x000000A0]
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV DWORD PTR [ESP+var_1C+0x28],offset [LEGO1_rdata.m518_ptr]
	ADD EAX, 0x10
	MOV DWORD PTR [ESP+var_18+0x28],EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m510_ptr])
	MOV ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [ESP+r+0x28]
	MOV EDI,DWORD PTR [ECX+0x08]
	MOV ESI,DWORD PTR [ECX+0x04]
	MOV EDX,DWORD PTR [ECX]
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [ECX],EDX
	MOV DWORD PTR [EAX+0x0C],ESI
	MOV DWORD PTR [EAX+0x10],EDI
	POP EDI
	POP ESI
	ADD ESP, 0x1C
	RETN 0x0004
loc_100127BE:
	MOV EAX,DWORD PTR [ESP+arg1+0x24]
	XOR EDX, EDX
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	POP EDI
	MOV DWORD PTR [ECX],EDX
	POP ESI
	MOV DWORD PTR [EAX+0x0C],EDX
	MOV DWORD PTR [EAX+0x10],EDX
	ADD ESP, 0x1C
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100127F0(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		r = 0x0,
		arg1 = 0x4,
	};

__asm{
	SUB ESP, 0x1C
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [ECX+0x20]
	MOV ESI, ECX
	TEST EAX, EAX
	JZ loc_10012873
	CMP DWORD PTR [EAX+0x000000A0],0x00
	JZ loc_10012873
	MOV DWORD PTR [ESP+var_14+0x24],offset [LEGO1_rdata.m488_ptr]
	LEA ECX,DWORD PTR [ESP+var_C+0x24]
	MOV DWORD PTR [ESP+var_10+0x24],ECX
	LEA ECX,DWORD PTR [ESP+var_1C+0x24]
	MOV EAX,DWORD PTR [EAX+0x000000A0]
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV DWORD PTR [ESP+var_1C+0x28],offset [LEGO1_rdata.m518_ptr]
	ADD EAX, 0x30
	MOV DWORD PTR [ESP+var_18+0x28],EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m510_ptr])
	MOV ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [ESP+r+0x28]
	FLD DWORD PTR [ECX+0x04]
	FSUB QWORD PTR [ESI+0x28]
	MOV EDI,DWORD PTR [ECX+0x08]
	MOV EDX,DWORD PTR [ECX]
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	FSTP DWORD PTR [EAX+0x0C]
	MOV DWORD PTR [ECX],EDX
	MOV DWORD PTR [EAX+0x10],EDI
	POP EDI
	POP ESI
	ADD ESP, 0x1C
	RETN 0x0004
loc_10012873:
	MOV EAX,DWORD PTR [ESP+arg1+0x24]
	XOR EDX, EDX
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	POP EDI
	MOV DWORD PTR [ECX],EDX
	POP ESI
	MOV DWORD PTR [EAX+0x0C],EDX
	MOV DWORD PTR [EAX+0x10],EDX
	ADD ESP, 0x1C
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100128A0(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		r = 0x0,
		arg1 = 0x4,
	};

__asm{
	SUB ESP, 0x1C
	MOV EAX,DWORD PTR [ECX+0x20]
	TEST EAX, EAX
	PUSH ESI
	PUSH EDI
	JZ loc_1001291E
	CMP DWORD PTR [EAX+0x000000A0],0x00
	JZ loc_1001291E
	MOV DWORD PTR [ESP+var_14+0x24],offset [LEGO1_rdata.m488_ptr]
	LEA ECX,DWORD PTR [ESP+var_C+0x24]
	MOV DWORD PTR [ESP+var_10+0x24],ECX
	LEA ECX,DWORD PTR [ESP+var_1C+0x24]
	MOV EAX,DWORD PTR [EAX+0x000000A0]
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [EAX+0x14]
	MOV DWORD PTR [ESP+var_1C+0x28],offset [LEGO1_rdata.m518_ptr]
	ADD EAX, 0x20
	MOV DWORD PTR [ESP+var_18+0x28],EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m510_ptr])
	MOV ECX,DWORD PTR [ESP+var_14+0x28]
	MOV EAX,DWORD PTR [ESP+r+0x28]
	MOV EDI,DWORD PTR [ECX+0x08]
	MOV ESI,DWORD PTR [ECX+0x04]
	MOV EDX,DWORD PTR [ECX]
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [ECX],EDX
	MOV DWORD PTR [EAX+0x0C],ESI
	MOV DWORD PTR [EAX+0x10],EDI
	POP EDI
	POP ESI
	ADD ESP, 0x1C
	RETN 0x0004
loc_1001291E:
	MOV EAX,DWORD PTR [ESP+arg1+0x24]
	XOR EDX, EDX
	LEA ECX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [EAX+0x04],ECX
	MOV DWORD PTR [EAX], offset [LEGO1_rdata.m488_ptr]
	POP EDI
	MOV DWORD PTR [ECX],EDX
	POP ESI
	MOV DWORD PTR [EAX+0x0C],EDX
	MOV DWORD PTR [EAX+0x10],EDX
	ADD ESP, 0x1C
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10012950(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m11B7D_proc_10012B7D]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x0C
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	PUSH EDI
	MOV ESI, ECX
	XOR EBX, EBX
	MOV DWORD PTR [EBP+var_1C+0x4],EBX
	CMP DWORD PTR [EBP+arg1+0x4],EBX
	JZ FAR loc_10012A3D
	MOV DWORD PTR [ESI+0x04],offset LEGO1_rdata + 0x1890
	MOV DWORD PTR [ESI+0x24],offset LEGO1_rdata + 0x1880
	MOV DWORD PTR [ESI+0x000001DC],offset LEGO1_rdata + 0x1878
	MOV DWORD PTR [ESI+0x000001F8],offset LEGO1_rdata + 0x1868
	LEA ECX,DWORD PTR [ESI+0x00000084]
	CALL_LONG(offset [LEGO1_text.m2C700_sub_1002D700])
	MOV AL,BYTE PTR [EBP+var_10+0x3]
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	MOV BYTE PTR [ESI+0x000001E0],AL
	MOV DWORD PTR [ESI+0x000001E4],EBX
	MOV DWORD PTR [ESI+0x000001E8],EBX
	MOV DWORD PTR [ESI+0x000001EC],EBX
	OR DWORD PTR [EBP+var_1C+0x4],0x01
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV EAX,DWORD PTR [ESI+0x000001DC]
	MOV DWORD PTR [ESI+0x000001D8],offset [LEGO1_rdata.m1510_ptr]
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV BYTE PTR [EBP+var_8+0x4],BL
	MOV DWORD PTR [ESI+ECX+0x000001DC],offset [LEGO1_rdata.m1440_ptr]
	MOV EAX,DWORD PTR [ESI+0x000001DC]
	PUSH EBX
	MOV EAX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	LEA ECX,DWORD PTR [EAX-0x1C]
	MOV DWORD PTR [ESI+EAX+0x000001D8],ECX
	LEA ECX,DWORD PTR [ESI+0x000001F4]
	OR DWORD PTR [EBP+var_1C+0x4],0x02
	MOV WORD PTR DS:[ESI+0x000001F0],0xFFFF
	CALL_LONG(offset [LEGO1_text.m135D0_sub_100145D0])
	OR DWORD PTR [EBP+var_1C+0x4],0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000004
loc_10012A3D:
	XOR EBX, EBX
	MOV ECX, ESI
	PUSH EBX
	LEA EDI,DWORD PTR [ESI+0x20]
	CALL_LONG(offset [LEGO1_text.m7F350_sub_10080350])
	PUSH EBX
	MOV ECX, EDI
	MOV DWORD PTR [EBP+var_8+0x4],0x00000005
	CALL_LONG(offset [LEGO1_text.m5C0D0_sub_1005D0D0])
	LEA ECX,DWORD PTR [ESI+0x5C]
	LEA EAX,DWORD PTR [ESI+0x64]
	MOV BYTE PTR [EBP+var_8+0x4],0x06
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [ESI+0x60],EAX
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1988_ptr]
	MOV DWORD PTR [EDI], offset [LEGO1_rdata.m1984_ptr]
	MOV EDX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ESI+EDX+0x04],offset [LEGO1_rdata.m18B8_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EDI,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [ESI+EDI+0x04],offset [LEGO1_rdata.m18A8_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EDX,DWORD PTR [EAX+0x0C]
	MOV DWORD PTR [ESI+EDX+0x04],offset [LEGO1_rdata.m18A0_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA EDX,DWORD PTR [EAX-0x80]
	MOV DWORD PTR [ESI+EAX],EDX
	MOV EDI,DWORD PTR [ECX]
	MOV BYTE PTR [ESI+0x54],BL
	MOV DWORD PTR [ESI+0x70],EBX
	MOV DWORD PTR [ESI+0x74],EBX
	CALL_LONG(DWORD PTR [EDI+0x2C])
	MOV DWORD PTR [ESI+0x58],EBX
	MOV DWORD PTR [ESI+0x78],EBX
	MOV DWORD PTR [ESI+0x7C],EBX
	TEST ESI, ESI
	JZ loc_10012AD9
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV ECX,DWORD PTR [EAX+0x04]
	LEA EBX,DWORD PTR [ESI+ECX+0x04]
loc_10012AD9:
	PUSH EBX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV EAX, ESI
	POP EDI
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP EBX
	MOV ESP, EBP
	POP EBP
	RETN 0x0004
	TEST BYTE PTR [EBP-0x18],0x08
	JZ loc_10012B16
	MOV ECX,DWORD PTR [EBP+var_18+0x4]
	ADD ECX, 0x000001F8
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_10012B16:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10012B17()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001E0
	JMP_LONG(offset [LEGO1_text.mCA20_loc_1000DA20])
}
}

__declspec(naked) DWORD LEGO1_proc_10012B25()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001E0
	JMP_LONG(offset [LEGO1_text.mCA60_loc_1000DA60])
}
}

__declspec(naked) DWORD LEGO1_proc_10012B33()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x01
	JZ loc_10012B47
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x00000084
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_10012B47:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10012B48()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x02
	JZ loc_10012B5C
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001D8
	JMP_LONG(offset [LEGO1_text.m11B90_loc_10012B90])
loc_10012B5C:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10012B5D()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x04
	JZ loc_10012B71
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001F4
	JMP_LONG(offset [LEGO1_text.m11C10_loc_10012C10])
loc_10012B71:
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10012C80()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	MOV DWORD PTR [ECX+0xFFFFFF7C],offset [LEGO1_rdata.m1988_ptr]
	MOV DWORD PTR [ECX-0x64],offset [LEGO1_rdata.m1984_ptr]
	PUSH offset [LEGO1_text.m11D5C_proc_10012D5C]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	MOV EAX,DWORD PTR [ECX-0x80]
	SUB ESP, 0x08
	MOV EDX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ECX+EDX-0x80],offset [LEGO1_rdata.m18B8_ptr]
	MOV EAX,DWORD PTR [ECX-0x80]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV EDX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [ECX+EDX-0x80],offset [LEGO1_rdata.m18A8_ptr]
	MOV EAX,DWORD PTR [ECX-0x80]
	MOV EDX,DWORD PTR [EAX+0x0C]
	MOV DWORD PTR [ECX+EDX-0x80],offset [LEGO1_rdata.m18A0_ptr]
	MOV EAX,DWORD PTR [ECX-0x80]
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA EDX,DWORD PTR [EAX-0x80]
	MOV DWORD PTR [EAX+ECX+0xFFFFFF7C],EDX
	XOR EAX, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	CMP ECX, 0x00000084
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	JZ loc_10012D07
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	MOV EAX,DWORD PTR [ECX-0x80]
	MOV EDX,DWORD PTR [EAX+0x04]
	LEA EAX,DWORD PTR [ECX+EDX-0x80]
loc_10012D07:
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV BYTE PTR [EBP+var_8+0x4],0x00
	CALL_LONG(offset [LEGO1_text.m11D36_sub_10012D36])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m11D66_sub_10012D66])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10012D36()
{
	enum{
		arg1217219 = 0x4A4B0C,
		arg1217220 = 0x4A4B10,
	};

__asm{
	CMP DWORD PTR [EBP+arg1217220-0x4A4B20],0x00000084
	JZ loc_10012D4A
	MOV EAX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	SUB EAX, 0x64
	MOV DWORD PTR [EBP+arg1217219-0x4A4B20],EAX
	JMP loc_10012D51
loc_10012D4A:
	MOV DWORD PTR [EBP+arg1217219-0x4A4B20],0x00000000
loc_10012D51:
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x38
	JMP_LONG(offset [LEGO1_text.m5C2B0_sub_1005D2B0])
}
}

__declspec(naked) DWORD LEGO1_sub_10012D66()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	SUB ECX, 0x60
	JMP_LONG(offset [LEGO1_text.m11D80_loc_10012D80])
}
}

__declspec(naked) DWORD LEGO1_sub_10012DE0()
{
__asm{
	MOV BYTE PTR [offset LEGO1_data + 0xB8C],0x01
	XOR EAX, EAX
	MOV DWORD PTR [offset LEGO1_data + 0xB84], EAX
	MOV DWORD PTR [offset LEGO1_data + 0xB88], EAX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10012E00()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	MOV ECX, 0x00000030
	SUB EDX, EDX
	DIV ECX
	SHR EDX, 0x02
	MOV DWORD PTR [offset LEGO1_data.mB74],EDX
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	MOV ECX, 0x00000014
	SUB EDX, EDX
	DIV ECX
	SHR EDX, 0x02
	MOV DWORD PTR [offset LEGO1_data + 0xB78],EDX
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	MOV DWORD PTR [offset LEGO1_data + 0xB7C],0x00000000
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	MOV ECX, 0x0000000C
	SUB EDX, EDX
	DIV ECX
	SHR EDX, 0x02
	MOV DWORD PTR [offset LEGO1_data + 0xB80],EDX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10013670()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	AND EAX, 0x0C
	SHR EAX, 0x02
	MOV DWORD PTR [offset LEGO1_data.mBAC], EAX
	CALL_LONG(offset [LEGO1_text.m8A640_sub_1008B640])
	MOV ECX, 0x0000000C
	SUB EDX, EDX
	DIV ECX
	SHR EDX, 0x02
	MOV DWORD PTR [offset LEGO1_data + 0xBB0],EDX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10013820(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m12A64_proc_10013A64]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x0C
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	PUSH EDI
	MOV ESI, ECX
	XOR EBX, EBX
	MOV DWORD PTR [EBP+var_1C+0x4],EBX
	CMP DWORD PTR [EBP+arg1+0x4],EBX
	JZ FAR loc_1001392B
	MOV DWORD PTR [ESI+0x34],offset LEGO1_rdata + 0x19F0
	MOV DWORD PTR [ESI+0x04],offset LEGO1_rdata + 0x19E0
	MOV DWORD PTR [ESI+0x00000194],offset LEGO1_rdata + 0x19D8
	MOV DWORD PTR [ESI+0x000001B0],offset LEGO1_rdata + 0x19C8
	MOV DWORD PTR [ESI+0x000001C0],offset LEGO1_rdata + 0x19B8
	LEA ECX,DWORD PTR [ESI+0x3C]
	CALL_LONG(offset [LEGO1_text.m2C700_sub_1002D700])
	MOV AL,BYTE PTR [EBP+var_10+0x3]
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	MOV BYTE PTR [ESI+0x00000198],AL
	MOV DWORD PTR [ESI+0x0000019C],EBX
	MOV DWORD PTR [ESI+0x000001A0],EBX
	MOV DWORD PTR [ESI+0x000001A4],EBX
	OR DWORD PTR [EBP+var_1C+0x4],0x01
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV EAX,DWORD PTR [ESI+0x00000194]
	MOV DWORD PTR [ESI+0x00000190],offset [LEGO1_rdata.m1510_ptr]
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV BYTE PTR [EBP+var_8+0x4],BL
	MOV DWORD PTR [ESI+ECX+0x00000194],offset [LEGO1_rdata.m1440_ptr]
	MOV EAX,DWORD PTR [ESI+0x00000194]
	PUSH EBX
	MOV EAX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	LEA ECX,DWORD PTR [EAX-0x1C]
	MOV DWORD PTR [ESI+EAX+0x00000190],ECX
	LEA ECX,DWORD PTR [ESI+0x000001AC]
	OR DWORD PTR [EBP+var_1C+0x4],0x02
	MOV WORD PTR DS:[ESI+0x000001A8],0xFFFF
	CALL_LONG(offset [LEGO1_text.m135D0_sub_100145D0])
	PUSH EBX
	LEA ECX,DWORD PTR [ESI+0x000001BC]
	OR DWORD PTR [EBP+var_1C+0x4],0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000004
	CALL_LONG(offset [LEGO1_text.m7F350_sub_10080350])
	OR DWORD PTR [EBP+var_1C+0x4],0x08
	MOV DWORD PTR [EBP+var_8+0x4],0x00000005
loc_1001392B:
	LEA EDI,DWORD PTR [ESI+0x34]
	PUSH 0x00
	MOV ECX, EDI
	CALL_LONG(offset [LEGO1_text.m7FEF0_sub_10080EF0])
	PUSH 0x00
	MOV ECX, ESI
	MOV DWORD PTR [EBP+var_8+0x4],0x00000006
	CALL_LONG(offset [LEGO1_text.m5C0D0_sub_1005D0D0])
	MOV EAX,DWORD PTR [EDI]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1B10_ptr]
	MOV BYTE PTR [EBP+var_8+0x4],0x07
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ESI+ECX+0x34],offset [LEGO1_rdata.m1A40_ptr]
	MOV EAX,DWORD PTR [EDI]
	MOV EDX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [ESI+EDX+0x34],offset [LEGO1_rdata.m1A30_ptr]
	MOV EAX,DWORD PTR [EDI]
	MOV ECX,DWORD PTR [EAX+0x0C]
	MOV DWORD PTR [ESI+ECX+0x34],offset [LEGO1_rdata.m1A28_ptr]
	MOV EAX,DWORD PTR [EDI]
	MOV EDX,DWORD PTR [EAX+0x10]
	MOV DWORD PTR [ESI+EDX+0x34],offset [LEGO1_rdata.m1A08_ptr]
	MOV EAX,DWORD PTR [EDI]
	MOV EAX,DWORD PTR [EAX+0x04]
	TEST ESI, ESI
	LEA ECX,DWORD PTR [EAX-0x08]
	MOV DWORD PTR [ESI+EAX+0x30],ECX
	MOV EDX,DWORD PTR [EDI]
	MOV EAX,DWORD PTR [EDX+0x10]
	LEA ECX,DWORD PTR [EAX+0xFFFFFE78]
	MOV DWORD PTR [ESI+EAX+0x30],ECX
	JNZ_LONG(offset [LEGO1_text.m129D9_loc_100139D9])
	XOR EAX, EAX
	JMP_LONG(offset [LEGO1_text.m129E2_loc_100139E2])
	TEST BYTE PTR [EBP+var_1C+0x4],0x10
	JZ loc_100139BC
	MOV ECX,DWORD PTR [EBP+var_18+0x4]
	ADD ECX, 0x000001B0
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_100139BC:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_100139BD()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x00000198
	JMP_LONG(offset [LEGO1_text.mCA20_loc_1000DA20])
}
}

__declspec(naked) DWORD LEGO1_proc_100139CB()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x00000198
	JMP_LONG(offset [LEGO1_text.mCA60_loc_1000DA60])
}
}

__declspec(naked) DWORD LEGO1_loc_100139D9()
{
__asm{
	MOV EAX,DWORD PTR [EDI]
	MOV ECX,DWORD PTR [EAX+0x04]
	LEA EAX,DWORD PTR [ESI+ECX+0x34]
	JMP_LONG(offset [LEGO1_text.m129E2_loc_100139E2])
}
}

__declspec(naked) DWORD __stdcall LEGO1_loc_100139E2(DWORD arg1)
{
	enum{
		arg1217221 = 0x4A4B14,
		arg1217223 = 0x4A4B1C,
	};

__asm{
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV EAX, ESI
	POP EDI
	MOV DWORD PTR [EBP+arg1217223-0x4A4B20],0xFFFFFFFF
	MOV ECX,DWORD PTR [EBP+arg1217221-0x4A4B20]
	POP ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP EBX
	MOV ESP, EBP
	POP EBP
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_proc_10013A0B()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x01
	JZ loc_10013A1C
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x3C
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_10013A1C:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10013A1D()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x02
	JZ loc_10013A31
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x00000190
	JMP_LONG(offset [LEGO1_text.m11B90_loc_10012B90])
loc_10013A31:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10013A32()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x04
	JZ loc_10013A46
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001AC
	JMP_LONG(offset [LEGO1_text.m11C10_loc_10012C10])
loc_10013A46:
	RET
}
}

__declspec(naked) DWORD LEGO1_proc_10013A47()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x08
	JZ loc_10013A5B
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x000001BC
	JMP_LONG(offset [LEGO1_text.m11C30_loc_10012C30])
loc_10013A5B:
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10013AA0()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	MOV DWORD PTR [ECX-0x3C],offset [LEGO1_rdata.m1B10_ptr]
	PUSH offset [LEGO1_text.m12B6F_proc_10013B6F]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	MOV EAX,DWORD PTR [ECX-0x08]
	SUB ESP, 0x08
	MOV EDX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ECX+EDX-0x08],offset [LEGO1_rdata.m1A40_ptr]
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV EDX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [ECX+EDX-0x08],offset [LEGO1_rdata.m1A30_ptr]
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV EDX,DWORD PTR [EAX+0x0C]
	MOV DWORD PTR [ECX+EDX-0x08],offset [LEGO1_rdata.m1A28_ptr]
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV EDX,DWORD PTR [EAX+0x10]
	MOV DWORD PTR [ECX+EDX-0x08],offset [LEGO1_rdata.m1A08_ptr]
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA EDX,DWORD PTR [EAX-0x08]
	MOV DWORD PTR [ECX+EAX-0x0C],EDX
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV EAX,DWORD PTR [EAX+0x10]
	LEA EDX,DWORD PTR [EAX+0xFFFFFE78]
	MOV DWORD PTR [ECX+EAX-0x0C],EDX
	XOR EAX, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	CMP ECX, 0x3C
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	JZ loc_10013B35
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	MOV EAX,DWORD PTR [ECX-0x08]
	MOV EDX,DWORD PTR [EAX+0x04]
	LEA EAX,DWORD PTR [ECX+EDX-0x08]
loc_10013B35:
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV BYTE PTR [EBP+var_8+0x4],0x00
	CALL_LONG(offset [LEGO1_text.m12B64_sub_10013B64])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m12B79_sub_10013B79])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10013B64()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	SUB ECX, 0x04
	JMP_LONG(offset [LEGO1_text.m5C2B0_sub_1005D2B0])
}
}

__declspec(naked) DWORD LEGO1_sub_10013B79()
{
	enum{
		arg1217219 = 0x4A4B0C,
		arg1217220 = 0x4A4B10,
	};

__asm{
	CMP DWORD PTR [EBP+arg1217220-0x4A4B20],0x3C
	JZ loc_10013B8A
	MOV EAX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	SUB EAX, 0x08
	MOV DWORD PTR [EBP+arg1217219-0x4A4B20],EAX
	JMP loc_10013B91
loc_10013B8A:
	MOV DWORD PTR [EBP+arg1217219-0x4A4B20],0x00000000
loc_10013B91:
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x08
	JMP_LONG(offset [LEGO1_text.m12BA0_loc_10013BA0])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100140D0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH EBX
	MOV EDX, offset [LEGO1_data.m7C_str]
loc_100140DA:
	MOV BL,BYTE PTR [EAX]
	CMP BL,BYTE PTR [EDX]
	JNZ loc_10014101
	OR BL, BL
	JZ loc_100140F6
	MOV BL,BYTE PTR [EAX+0x01]
	CMP BL,BYTE PTR [EDX+0x01]
	JNZ loc_10014101
	ADD EAX, 0x02
	ADD EDX, 0x02
	OR BL, BL
	JNZ loc_100140DA
loc_100140F6:
	XOR EAX, EAX
	POP EBX
	TEST EAX, EAX
	SETE AL
	RETN 0x0004
loc_10014101:
	SBB EAX, EAX
	POP EBX
	SBB EAX, -0x01
	TEST EAX, EAX
	SETE AL
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_100144C0()
{
__asm{
	MOV EAX, offset [LEGO1_data.m7C_str]
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100145D0(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m1371A_proc_1001471A]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x0C
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	MOV ESI, ECX
	XOR EBX, EBX
	MOV DWORD PTR [EBP+var_1C+0x4],EBX
	CMP DWORD PTR [EBP+arg1+0x4],EBX
	JZ FAR loc_10014691
	MOV DWORD PTR [ESI+0x04],offset LEGO1_rdata + 0x1B68
	MOV DWORD PTR [ESI+0x00000168],offset LEGO1_rdata + 0x1B60
	LEA ECX,DWORD PTR [ESI+0x10]
	CALL_LONG(offset [LEGO1_text.m2C700_sub_1002D700])
	MOV AL,BYTE PTR [EBP+var_10+0x3]
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	MOV BYTE PTR [ESI+0x0000016C],AL
	MOV DWORD PTR [ESI+0x00000170],EBX
	MOV DWORD PTR [ESI+0x00000174],EBX
	MOV DWORD PTR [ESI+0x00000178],EBX
	OR DWORD PTR [EBP+var_1C+0x4],0x01
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV EAX,DWORD PTR [ESI+0x00000168]
	MOV DWORD PTR [ESI+0x00000164],offset [LEGO1_rdata.m1510_ptr]
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV BYTE PTR [EBP+var_8+0x4],BL
	MOV DWORD PTR [ESI+ECX+0x00000168],offset [LEGO1_rdata.m1440_ptr]
	MOV EAX,DWORD PTR [ESI+0x00000168]
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	MOV EAX,DWORD PTR [EAX+0x04]
	OR DWORD PTR [EBP+var_1C+0x4],0x02
	LEA ECX,DWORD PTR [EAX-0x1C]
	MOV DWORD PTR [ESI+EAX+0x00000164],ECX
	MOV WORD PTR DS:[ESI+0x0000017C],0xFFFF
loc_10014691:
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1C54_ptr]
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ESI+ECX+0x04],offset [LEGO1_rdata.m1B88_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EDX,DWORD PTR [EAX+0x08]
	MOV DWORD PTR [ESI+EDX+0x04],offset [LEGO1_rdata.m1B78_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA ECX,DWORD PTR [EAX-0x0C]
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV DWORD PTR [ESI+EAX],ECX
	XOR EAX, EAX
	MOV EDX,DWORD PTR [ESI+0x04]
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR FS:[0x00000000],ECX
	MOV EBX,DWORD PTR [EDX+0x04]
	MOV DWORD PTR [ESI+EBX+0x74],EAX
	MOV DWORD PTR [ESI+0x08],EAX
	MOV EAX, ESI
	POP ESI
	POP EBX
	MOV ESP, EBP
	POP EBP
	RETN 0x0004
	TEST BYTE PTR [EBP-0x18],0x04
	JZ loc_100146FD
	MOV ECX,DWORD PTR [EBP+var_18+0x4]
	ADD ECX, 0x00000184
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_100146FD:
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10014D00()
{
__asm{
	SUB ESP, 0x04
	PUSH ESI
	PUSH EDI
	MOVSX EAX,WORD PTR [ECX+0x06]
	MOV ESI, ECX
	CMP EAX, 0x03
	JA_LONG(offset [LEGO1_text.m13DB8_loc_10014DB8])
	JMP_LONG(DWORD PTR [offset LEGO1_text.m13DC4_proc_10014DC4+EAX*4])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10014DE0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH ESI
	PUSH EDI
	XOR SI, SI
	MOV DI,WORD PTR DS:[ECX+0x04]
	CMP DI, SI
	JLE loc_10014E03
	MOV EAX,DWORD PTR [ECX]
	MOV ECX,DWORD PTR [ESP+arg1+0x8]
loc_10014DF4:
	MOVSX EDX,SI
	CMP DWORD PTR [EDX*4+EAX],ECX
	JZ loc_10014E0A
	INC SI
	CMP SI, DI
	JL loc_10014DF4
loc_10014E03:
	XOR AL, AL
	POP EDI
	POP ESI
	RETN 0x0004
loc_10014E0A:
	MOV AL, 0x01
	POP EDI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10014E20()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m13F01_proc_10014F01]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	PUSH EDI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	MOV EDI, 0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mAD1A0___0MxCore__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV DWORD PTR [ESI+0x0C],0x00000000
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	LEA EAX,DWORD PTR [ESI+0x1C]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1390_ptr]
	LEA ECX,DWORD PTR [ESI+0x30]
	MOV DWORD PTR [ESI+0x08],EDI
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV DWORD PTR [ESI+0x18],EAX
	MOV DWORD PTR [ESI+0x2C],ECX
	MOV DWORD PTR [ESI+0x14],offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [ESI+0x14],offset [LEGO1_rdata.m488_ptr]
	LEA EDX,DWORD PTR [ESI+0x44]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m858_ptr]
	MOV ECX, ESI
	MOV DWORD PTR [ESI+0x40],EDX
	MOV DWORD PTR [ESI+0x28],offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [ESI+0x28],offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [ESI+0x3C],offset [LEGO1_rdata.m288_ptr]
	MOV DWORD PTR [ESI+0x3C],offset [LEGO1_rdata.m488_ptr]
	CALL_LONG(offset [LEGO1_text.mF5F0_sub_100105F0])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	PUSH ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1C88_ptr]
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV EAX, ESI
	MOV DWORD PTR [EBP+var_8+0x4],EDI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP EDI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_loc_10015030()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m14081_proc_10015081]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1C88_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH ECX
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1408B_sub_1001508B])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1001508B()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mB290___1LegoEntity__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1__Lego__YAPAVLegoOmni__XZ()
{
__asm{
	JMP_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
}
}

__declspec(naked) DWORD LEGO1__SoundManager__YAPAVLegoSoundManager__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x30]
	RET
}
}

__declspec(naked) DWORD LEGO1__VideoManager__YAPAVLegoVideoManager__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x2C]
	RET
}
}

__declspec(naked) DWORD LEGO1__BackgroundAudioManager__YAPAVMxBackgroundAudioManager__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000134]
	RET
}
}

__declspec(naked) DWORD LEGO1__InputManager__YAPAVLegoInputManager__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x70]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015750()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x70]
	MOV EAX,DWORD PTR [EAX+0x00000084]
	RET
}
}

__declspec(naked) DWORD LEGO1__GameState__YAPAVLegoGameState__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x0000009C]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015770()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000094]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015780()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000084]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015790()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000088]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100157A0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x7C]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100157B0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x0000008C]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100157C0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m14720__VideoManager__YAPAVLegoVideoManager__XZ])
	MOV EAX,DWORD PTR [EAX+0x68]
	MOV ECX,DWORD PTR [EAX+0x08]
	MOV EAX,DWORD PTR [ECX+0x00000088]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100157E0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000090]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100157F0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000098]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015800()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x74]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015810()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x6C]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015820(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg2]
	MOV ECX,DWORD PTR [ESP+arg1]
	PUSH EAX
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5A4F0_sub_1005B4F0])
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015840(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5A270_sub_1005B270])
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015860(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14840_sub_10015840])
	ADD ESP, 0x04
	TEST EAX, EAX
	JZ loc_10015878
	MOV CL,BYTE PTR [ESP+arg2]
	MOV BYTE PTR [EAX+0x0C],CL
loc_10015878:
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015880()
{
	enum{
		arg1 = 0x4,
	};

__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV ECX,DWORD PTR [ESP+arg1]
	MOV DWORD PTR [EAX+0x00000088],ECX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015890()
{
	enum{
		arg1 = 0x4,
	};

__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	CMP BYTE PTR [EAX+0x0000013C],0x00
	JZ loc_100158AB
	MOV ECX,DWORD PTR [ESP+arg1]
	MOV EDX,DWORD PTR [EAX]
	PUSH ECX
	MOV ECX, EAX
	CALL_LONG(DWORD PTR [EDX+0x20])
	RET
loc_100158AB:
	XOR EAX, EAX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100158C0(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg2]
	MOV ECX,DWORD PTR [ESP+arg1]
	PUSH EAX
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5A0C0_sub_1005B0C0])
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100158E0()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	ADD EAX, 0x000000A0
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100158F0()
{
	enum{
		arg1 = 0x4,
	};

__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV ECX,DWORD PTR [ESP+arg1]
	MOV DWORD PTR [EAX+0x7C],ECX
	RET
}
}

__declspec(naked) DWORD LEGO1__TransitionManager__YAPAVMxTransitionManager__XZ()
{
__asm{
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	MOV EAX,DWORD PTR [EAX+0x00000138]
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015910(DWORD arg1)
{
	enum{
		var_A8 = -0xA8,
		var_8C = -0x8C,
		var_88 = -0x88,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m149AB_proc_100159AB]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x00000098
	LEA ECX,DWORD PTR [EBP+var_A8+0x4]
	CALL_LONG(offset [LEGO1_text.mAC810___0MxDSAction__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x456C]
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	MOV ECX,DWORD PTR [EAX]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	LEA ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	LEA ECX,DWORD PTR [EBP+var_88+0x4]
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	MOV BYTE PTR [EBP+var_8+0x4],0x00
	CALL_LONG(offset [LEGO1_text.m149A3_sub_100159A3])
	MOV EAX,DWORD PTR [EBP+arg1+0x4]
	MOV DWORD PTR [EBP+var_8C+0x4],EAX
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	PUSH 0x04
	LEA ECX,DWORD PTR [EBP+var_A8+0x4]
	PUSH 0x05
	PUSH ECX
	MOV ECX,DWORD PTR [EAX+0x00000134]
	CALL_LONG(offset [LEGO1_text.m7E2F0_sub_1007F2F0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m149B5_sub_100159B5])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100159A3()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100159B5()
{
	enum{
		arg1217183 = 0x4A4A7C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217183-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100159C0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH EBX
	MOV BL,BYTE PTR [ESP+arg1+0x4]
	TEST BL, BL
	JNZ loc_100159D8
	CALL_LONG(offset [LEGO1_text.m59D10__GetInstance_LegoOmni__SAPAV1_XZ])
	PUSH 0x00
	MOV ECX,DWORD PTR [EAX+0x70]
	CALL_LONG(offset [LEGO1_text.m5B700_sub_1005C700])
loc_100159D8:
	MOV BYTE PTR [offset LEGO1_data + 0x4C58],BL
	POP EBX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100159E0(DWORD arg1, DWORD arg2, DWORD arg3)
{
	enum{
		var_A8 = -0xA8,
		var_8C = -0x8C,
		var_88 = -0x88,
		var_84 = -0x84,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
		arg2 = 0x8,
		arg3 = 0xC,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m14A83_proc_10015A83]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x00000098
	LEA ECX,DWORD PTR [EBP+var_A8+0x4]
	PUSH ESI
	PUSH EDI
	CALL_LONG(offset [LEGO1_text.mAC810___0MxDSAction__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV EAX,DWORD PTR [EBP+arg1+0x4]
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	MOV ECX,DWORD PTR [EAX]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	LEA ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	LEA ECX,DWORD PTR [EBP+var_88+0x4]
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	MOV BYTE PTR [EBP+var_8+0x4],0x00
	CALL_LONG(offset [LEGO1_text.m14A7B_sub_10015A7B])
	MOV EDI,DWORD PTR [EBP+arg2+0x4]
	MOV ESI,DWORD PTR [EBP+arg3+0x4]
	MOV WORD PTR SS:[EBP+var_84+0x4],0xFFFE
	CMP ESI, EDI
	JL loc_10015A60
loc_10015A46:
	LEA EAX,DWORD PTR [EBP+var_A8+0x4]
	MOV DWORD PTR [EBP+var_8C+0x4],EDI
	PUSH EAX
	INC EDI
	CALL_LONG(offset [LEGO1_text.mABF70_sub_100ACF70])
	ADD ESP, 0x04
	CMP EDI, ESI
	JLE loc_10015A46
loc_10015A60:
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m14A8D_sub_10015A8D])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	POP EDI
	MOV DWORD PTR FS:[0x00000000], EAX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015A7B()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10015A8D()
{
	enum{
		arg1217183 = 0x4A4A7C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217183-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10015AA0()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m14B50_proc_10015B50]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m1BA40___0LegoWorld__QAE_XZ])
	XOR EAX, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1DB0_ptr]
	MOV DWORD PTR [ESI+0x000000F8],EAX
	MOV DWORD PTR [ESI+0x000000FC],EAX
	MOV DWORD PTR [ESI+0x00000100],EAX
	MOV DWORD PTR [ESI+0x00000104],EAX
	MOV DWORD PTR [ESI+0x00000108],EAX
	MOV DWORD PTR [ESI+0x0000010C],EAX
	MOV DWORD PTR [ESI+0x00000140],EAX
	MOV DWORD PTR [ESI+0x00000110],EAX
	MOV DWORD PTR [ESI+0x00000114],EAX
	MOV DWORD PTR [ESI+0x00000118],EAX
	MOV DWORD PTR [ESI+0x00000128],EAX
	PUSH ESI
	MOV DWORD PTR [ESI+0x0000012C],EAX
	MOV DWORD PTR [ESI+0x00000120],EAX
	MOV DWORD PTR [ESI+0x00000124],EAX
	MOV DWORD PTR [ESI+0x0000011C],EAX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV EAX, ESI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10015CE0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH ESI
	PUSH EDI
	MOV ESI, ECX
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m1D0B0_sub_1001E0B0])
	MOV EDI, EAX
	TEST EDI, EDI
	JNZ loc_10015D36
	PUSH offset [LEGO1_data.m154_str]
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	PUSH ESI
	MOV DWORD PTR [ESI+0x00000124],EAX
	CALL_LONG(offset [LEGO1_text.m14750_sub_10015750])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m27E10_sub_10028E10])
	CALL_LONG(offset [LEGO1_text.m14790_sub_10015790])
	MOV ECX, EAX
	PUSH 0x00
	MOV DWORD PTR [ESI+0x00000120],EAX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x30])
	PUSH 0x00
	CALL_LONG(offset [LEGO1_text.m14880_sub_10015880])
	ADD ESP, 0x04
loc_10015D36:
	MOV EAX, EDI
	POP EDI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_loc_10015D40()
{
	enum{
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m14DE8_proc_10015DE8]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1DB0_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x08
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	PUSH EBX
	XOR EBX, EBX
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	MOV BYTE PTR [offset LEGO1_data + 0x119C],BL
	MOV EAX,DWORD PTR [ECX+0x00000120]
	TEST EAX, EAX
	JZ loc_10015DAE
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14880_sub_10015880])
	ADD ESP, 0x04
	MOV EAX,DWORD PTR [EBP+var_14+0x4]
	MOV ECX,DWORD PTR [EAX+0x00000120]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x000000B0])
	FSTP DWORD PTR [EBP+var_18+0x4]
	CALL_LONG(offset [LEGO1_text.m14780_sub_10015780])
	MOV ECX,DWORD PTR [EBP+var_18+0x4]
	MOV EDX,DWORD PTR [EBP+var_14+0x4]
	MOV DWORD PTR [EAX+0x28],ECX
	MOV BYTE PTR [EAX+0x5C],BL
	MOV DWORD PTR [EDX+0x00000120],EBX
loc_10015DAE:
	MOV EAX,DWORD PTR [EBP+var_14+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14750_sub_10015750])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m27EA0_sub_10028EA0])
	MOV EAX,DWORD PTR [EBP+var_14+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m14DF2_sub_10015DF2])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	POP EBX
	MOV DWORD PTR FS:[0x00000000], EAX
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10015DF2()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1CFA0___1LegoWorld__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10015F30()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m14FEA_proc_10015FEA]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	PUSH EDI
	LEA EBX,DWORD PTR [ECX+0x08]
	MOV ESI, ECX
	MOV EDI, 0x00000004
	CALL_LONG(offset [LEGO1_text.mAD1A0___0MxCore__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m6C0_ptr]
loc_10015F74:
	MOV ECX, EBX
	ADD EBX, 0x06
	CALL_LONG(offset [LEGO1_text.m15000_sub_10016000])
	DEC EDI
	JNS loc_10015F74
	XOR EAX, EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1E30_ptr]
	MOV BYTE PTR [ESI+0x08],0x01
	MOV BYTE PTR [ESI+0x0E],0x02
	MOV BYTE PTR [ESI+0x14],0x03
	MOV WORD PTR DS:[ESI+0x0A],AX
	MOV WORD PTR DS:[ESI+0x0C],AX
	MOV BYTE PTR [ESI+0x1A],0x04
	MOV WORD PTR DS:[ESI+0x10],AX
	MOV WORD PTR DS:[ESI+0x12],AX
	MOV BYTE PTR [ESI+0x20],0x05
	MOV WORD PTR DS:[ESI+0x16],AX
	MOV WORD PTR DS:[ESI+0x18],AX
	MOV DWORD PTR [ESI+0x28],EAX
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV WORD PTR DS:[ESI+0x1C],AX
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV WORD PTR DS:[ESI+0x1E],AX
	POP EDI
	MOV WORD PTR DS:[ESI+0x22],AX
	MOV WORD PTR DS:[ESI+0x24],AX
	MOV EAX, ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	POP EBX
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10016000()
{
__asm{
	XOR EAX, EAX
	MOV WORD PTR DS:[ECX+0x02],AX
	MOV BYTE PTR [ECX],AL
	MOV WORD PTR DS:[ECX+0x04],AX
	MOV EAX, ECX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10016129()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10016280(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	XOR AX, AX
	PUSH EBX
	MOV BL,BYTE PTR [ESP+arg1+0x4]
loc_10016288:
	CMP AX, 0x0005
	JGE loc_1001629E
	MOVSX EDX,AX
	LEA EDX,DWORD PTR [EDX*2+EDX]
	CMP BYTE PTR [EDX*2+ECX+0x08],BL
	JZ loc_100162A4
	INC AX
	JMP loc_10016288
loc_1001629E:
	XOR EAX, EAX
	POP EBX
	RETN 0x0004
loc_100162A4:
	MOVSX EAX,AX
	POP EBX
	LEA EDX,DWORD PTR [EAX*2+EAX]
	LEA EAX,DWORD PTR [EDX*2+ECX+0x08]
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10016501()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10016513()
{
	enum{
		arg1217182 = 0x4A4A78,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217182-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10016930(DWORD arg1, DWORD arg2)
{
	enum{
		var_4 = -0x4,
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	SUB ESP, 0x04
	CMP EAX, 0x0B
	PUSH EBX
	PUSH ESI
	PUSH EDI
	MOV EDI, ECX
	JNZ loc_1001694F
	MOV ESI,DWORD PTR [EDI+0x00000128]
	MOV EAX,DWORD PTR [EDI+0x000000FC]
	JMP loc_1001696A
loc_1001694F:
	CMP EAX, 0x0C
	JNZ loc_10016962
	MOV ESI,DWORD PTR [EDI+0x0000012C]
	MOV EAX,DWORD PTR [EDI+0x00000100]
	JMP loc_1001696A
loc_10016962:
	MOV EAX,DWORD PTR [ESP+var_4+0x10]
	MOV ESI,DWORD PTR [ESP+var_4+0x10]
loc_1001696A:
	TEST ESI, ESI
	JZ FAR loc_100169F9
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FILD DWORD PTR [ESP+var_4+0x10]
	MOVSX EAX,WORD PTR [ESP+arg2+0x10]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1D70]
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	MOV EAX,DWORD PTR [EDI+0x00000138]
	SUB EAX,DWORD PTR [EDI+0x00000130]
	FIADD DWORD PTR [ESP+var_4+0x10]
	FILD DWORD PTR [offset LEGO1_data.mC78]
	INC EAX
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1D70]
	FILD DWORD PTR [ESP+var_4+0x10]
	FDIV ST,ST(1)
	FMUL ST,ST(2)
	FIADD DWORD PTR [EDI+0x00000130]
	FADD QWORD PTR [offset LEGO1_rdata + 0x1D90]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EBX, EAX
	MOV EAX,DWORD PTR [EDI+0x0000013C]
	SUB EAX,DWORD PTR [EDI+0x00000134]
	INC EAX
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FIDIVR DWORD PTR [ESP+var_4+0x10]
	FMULP ST(1),ST
	FIADD DWORD PTR [EDI+0x00000134]
	FADD QWORD PTR [offset LEGO1_rdata + 0x1D90]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	PUSH EAX
	MOV ECX, ESI
	PUSH EBX
	MOV EBX,DWORD PTR [ESI]
	CALL_LONG(DWORD PTR [EBX+0x00000088])
loc_100169F9:
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x04
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_10016A90()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m15B07_proc_10016B07]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m14AA0_sub_10015AA0])
	XOR EAX, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1E50_ptr]
	MOV DWORD PTR [ESI+0x00000150],EAX
	MOV DWORD PTR [ESI+0x00000130],0x0000016C
	MOV DWORD PTR [ESI+0x00000134],0x00000154
	MOV DWORD PTR [ESI+0x00000138],0x000001EC
	MOV DWORD PTR [ESI+0x0000013C],0x0000015E
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV EAX, ESI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10016CC9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m14D40_loc_10015D40])
}
}

__declspec(naked) DWORD LEGO1_sub_10016F41()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_10016F53()
{
	enum{
		arg1217182 = 0x4A4A78,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217182-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_100170D2()
{
	enum{
		arg1217217 = 0x4A4B04,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217217-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF4A0_loc_100104A0])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10017820(DWORD arg1, DWORD arg2)
{
	enum{
		var_4 = -0x4,
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	SUB ESP, 0x04
	CMP EAX, 0x0B
	PUSH EBX
	PUSH ESI
	PUSH EDI
	MOV EDI, ECX
	JNZ loc_1001783F
	MOV ESI,DWORD PTR [EDI+0x00000128]
	MOV EAX,DWORD PTR [EDI+0x000000FC]
	JMP loc_1001785A
loc_1001783F:
	CMP EAX, 0x0C
	JNZ loc_10017852
	MOV ESI,DWORD PTR [EDI+0x0000012C]
	MOV EAX,DWORD PTR [EDI+0x00000100]
	JMP loc_1001785A
loc_10017852:
	MOV EAX,DWORD PTR [ESP+var_4+0x10]
	MOV ESI,DWORD PTR [ESP+var_4+0x10]
loc_1001785A:
	TEST ESI, ESI
	JZ FAR loc_100178E9
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FILD DWORD PTR [ESP+var_4+0x10]
	MOVSX EAX,WORD PTR [ESP+arg2+0x10]
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1D70]
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	MOV EAX,DWORD PTR [EDI+0x00000138]
	SUB EAX,DWORD PTR [EDI+0x00000130]
	FIADD DWORD PTR [ESP+var_4+0x10]
	FILD DWORD PTR [offset LEGO1_data + 0xC7C]
	INC EAX
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FMUL QWORD PTR [offset LEGO1_rdata + 0x1D70]
	FILD DWORD PTR [ESP+var_4+0x10]
	FDIV ST,ST(1)
	FMUL ST,ST(2)
	FIADD DWORD PTR [EDI+0x00000130]
	FADD QWORD PTR [offset LEGO1_rdata + 0x1D90]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EBX, EAX
	MOV EAX,DWORD PTR [EDI+0x0000013C]
	SUB EAX,DWORD PTR [EDI+0x00000134]
	INC EAX
	MOV DWORD PTR [ESP+var_4+0x10],EAX
	FIDIVR DWORD PTR [ESP+var_4+0x10]
	FMULP ST(1),ST
	FIADD DWORD PTR [EDI+0x00000134]
	FADD QWORD PTR [offset LEGO1_rdata + 0x1D90]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	PUSH EAX
	MOV ECX, ESI
	PUSH EBX
	MOV EBX,DWORD PTR [ESI]
	CALL_LONG(DWORD PTR [EBX+0x00000088])
loc_100178E9:
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x04
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_100179F0()
{
__asm{
	PUSH ESI
	PUSH EDI
	MOV EDI, ECX
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	MOV ESI, EAX
	PUSH offset [LEGO1_data.m370_str]
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	TEST EAX, EAX
	JNZ loc_10017A17
	PUSH offset [LEGO1_data.m370_str]
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m3AC00_sub_1003BC00])
loc_10017A17:
	MOV DWORD PTR [EDI+0x7C],EAX
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	MOV ESI, EAX
	PUSH offset [LEGO1_data.mD4_str]
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	TEST EAX, EAX
	JNZ loc_10017A3D
	PUSH offset [LEGO1_data.mD4_str]
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m3AC00_sub_1003BC00])
loc_10017A3D:
	MOV DWORD PTR [EDI+0x00000080],EAX
	POP EDI
	POP ESI
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10017AF0()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m16BE6_proc_10017BE6]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH EBX
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	PUSH EDI
	LEA EBX,DWORD PTR [ECX+0x08]
	MOV ESI, ECX
	MOV EDI, 0x00000004
	CALL_LONG(offset [LEGO1_text.mAD1A0___0MxCore__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV DWORD PTR [EBP+var_8+0x4],0x00000001
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m6C0_ptr]
loc_10017B34:
	MOV ECX, EBX
	ADD EBX, 0x0C
	CALL_LONG(offset [LEGO1_text.m16C00_sub_10017C00])
	DEC EDI
	JNS loc_10017B34
	MOV EAX, 0x00000003
	XOR ECX, ECX
	MOV WORD PTR DS:[ESI+0x0C],AX
	MOV EDX, 0x00000001
	MOV WORD PTR DS:[ESI+0x10],CX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1EE8_ptr]
	MOV DWORD PTR [ESI+0x08],offset LEGO1_data + 0xCE8
	MOV DWORD PTR [ESI+0x14],offset LEGO1_data + 0xCF8
	MOV DWORD PTR [ESI+0x20],offset LEGO1_data + 0xD08
	MOV WORD PTR DS:[ESI+0x0E],DX
	MOV WORD PTR DS:[ESI+0x18],AX
	MOV WORD PTR DS:[ESI+0x1C],CX
	MOV DWORD PTR [ESI+0x2C],offset LEGO1_data + 0xD18
	MOV WORD PTR DS:[ESI+0x1A],DX
	MOV WORD PTR DS:[ESI+0x24],AX
	MOV WORD PTR DS:[ESI+0x28],CX
	MOV DWORD PTR [ESI+0x38],offset LEGO1_data + 0xD28
	MOV WORD PTR DS:[ESI+0x26],DX
	MOV WORD PTR DS:[ESI+0x30],AX
	MOV WORD PTR DS:[ESI+0x34],CX
	MOV WORD PTR DS:[ESI+0x32],DX
	MOV WORD PTR DS:[ESI+0x3C],AX
	LEA EAX,DWORD PTR [ESI+0x44]
	MOV WORD PTR DS:[ESI+0x40],CX
	MOV ECX, 0xFFFFFFFF
	MOV WORD PTR DS:[ESI+0x3E],DX
	MOV DWORD PTR [EBP+var_8+0x4],ECX
	MOV DWORD PTR [EAX],ECX
	MOV DWORD PTR [EAX+0x04],ECX
	POP EDI
	MOV DWORD PTR [EAX+0x08],ECX
	MOV DWORD PTR [EAX+0x0C],ECX
	MOV DWORD PTR [EAX+0x10],ECX
	MOV EAX, ESI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP EBX
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10017C00()
{
__asm{
	XOR EAX, EAX
	MOV WORD PTR DS:[ECX+0x04],AX
	MOV DWORD PTR [ECX],EAX
	MOV WORD PTR DS:[ECX+0x06],AX
	MOV WORD PTR DS:[ECX+0x08],AX
	MOV EAX, ECX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10017D39()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m4F40_loc_10005F40])
}
}

__declspec(naked) DWORD LEGO1_sub_10017D70()
{
__asm{
	PUSH ESI
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	XOR ECX, ECX
	MOV CL,BYTE PTR [EAX+0x0C]
	LEA EDX,DWORD PTR [ECX*4+ESI+0x40]
	MOV EAX,DWORD PTR [EDX]
	CMP EAX, 0x02
	JGE loc_10017D8B
	INC EAX
	MOV DWORD PTR [EDX],EAX
loc_10017D8B:
	LEA EAX,DWORD PTR [ECX*2+ECX]
	LEA ECX,DWORD PTR [EAX*4+ESI-0x04]
	CALL_LONG(offset [LEGO1_text.m13D00_sub_10014D00])
	POP ESI
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10017E90()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m16EF2_proc_10017EF2]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m1BA40___0LegoWorld__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1F20_ptr]
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABD20_sub_100ACD20])
	MOV DWORD PTR [ESI+0x000000F8],0x00000000
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV EAX, ESI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10018060()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m170DD_proc_100180DD]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1F20_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.m14740__InputManager__YAPAVLegoInputManager__XZ])
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	CMP DWORD PTR [EAX+0x64],ECX
	JNZ loc_100180A4
	CALL_LONG(offset [LEGO1_text.m14740__InputManager__YAPAVLegoInputManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m5B730_sub_1005C730])
loc_100180A4:
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.m14750_sub_10015750])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m27EA0_sub_10028EA0])
	MOV ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.mABEB0__NotificationManager__YAPAVMxNotificationManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mABDF0_sub_100ACDF0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m170E7_sub_100180E7])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100180E7()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1CFA0___1LegoWorld__UAE_XZ])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100181D0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH ESI
	XOR EAX, EAX
	PUSH EDI
	MOV EDI, ECX
	MOV ECX,DWORD PTR [ESP+arg1+0x8]
	CMP WORD PTR DS:[ECX+0x28],0x01
	JNZ FAR loc_100182AF
	MOV ECX,DWORD PTR [ECX+0x20]
	CMP ECX, 0x01
	JZ loc_100181FC
	CMP ECX, 0x02
	JZ loc_10018224
	CMP ECX, 0x03
	JZ loc_1001824C
	POP EDI
	POP ESI
	RETN 0x0004
loc_100181FC:
	MOV DWORD PTR [EDI+0x000000F8],0x00000003
	PUSH 0x00
	PUSH 0x00
	PUSH 0x32
	PUSH 0x03
	CALL_LONG(offset [LEGO1_text.m14900__TransitionManager__YAPAVMxTransitionManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m4AB70_sub_1004BB70])
	MOV EAX, 0x00000001
	POP EDI
	POP ESI
	RETN 0x0004
loc_10018224:
	MOV DWORD PTR [EDI+0x000000F8],0x00000002
	PUSH 0x00
	PUSH 0x00
	PUSH 0x32
	PUSH 0x03
	CALL_LONG(offset [LEGO1_text.m14900__TransitionManager__YAPAVMxTransitionManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m4AB70_sub_1004BB70])
	MOV EAX, 0x00000001
	POP EDI
	POP ESI
	RETN 0x0004
loc_1001824C:
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	MOV ESI, EAX
	PUSH offset [LEGO1_data.m154_str]
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	TEST EAX, EAX
	JNZ loc_1001826F
	PUSH offset [LEGO1_data.m154_str]
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m3AC00_sub_1003BC00])
loc_1001826F:
	MOV WORD PTR DS:[EAX+0x1C],0x0001
	MOV DWORD PTR [EDI+0x000000F8],0x00000006
	PUSH 0x00
	PUSH 0x00
	PUSH 0x32
	PUSH 0x03
	CALL_LONG(offset [LEGO1_text.m14900__TransitionManager__YAPAVMxTransitionManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m4AB70_sub_1004BB70])
	PUSH offset [LEGO1_data.mD34_str]
	MOV EAX, DWORD PTR [offset LEGO1_data.m3A44_ptr]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABF20__VariableTable__YAPAVMxVariableTable__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mB63A0__SetVariable_MxVariableTable__QAEXPBD0_Z])
	MOV EAX, 0x00000001
loc_100182AF:
	POP EDI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10018340()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m17431_proc_10018431]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	PUSH EDI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.mAD1A0___0MxCore__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	LEA ECX,DWORD PTR [ESI+0x20]
	MOV EDI, 0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.mB5D20___0MxCriticalSection__QAE_XZ])
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	MOV ECX, ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.mD38_ptr]
	CALL_LONG(offset [LEGO1_text.mB3D50__Init_MxPresenter__IAEXXZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV ECX, ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.mCD8_ptr]
	CALL_LONG(offset [LEGO1_text.mB44E0_sub_100B54E0])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	MOV ECX, ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.mC70_ptr]
	MOV DWORD PTR [ESI+0x50],0x00000064
	MOV DWORD PTR [EBP+var_8+0x4],0x00000004
	MOV DWORD PTR [EBP+var_8+0x4],0x00000005
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.mB08_ptr]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m9A8_ptr]
	CALL_LONG(offset [LEGO1_text.mB0AD0_sub_100B1AD0])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000006
	MOV ECX, ESI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1FA8_ptr]
	CALL_LONG(offset [LEGO1_text.m174E0_sub_100184E0])
	MOV EAX, ESI
	MOV DWORD PTR [EBP+var_8+0x4],EDI
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP EDI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10018480()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m174CB_proc_100184CB]
	MOV DWORD PTR [ECX], offset [LEGO1_rdata.m1FA8_ptr]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	PUSH 0x01
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	CALL_LONG(offset [LEGO1_text.m174F0_sub_100184F0])
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m174D5_sub_100184D5])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	MOV ESP, EBP
	MOV DWORD PTR FS:[0x00000000], EAX
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_100184D5()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mC640_loc_1000D640])
}
}

__declspec(naked) DWORD LEGO1_sub_100184E0()
{
__asm{
	XOR EAX, EAX
	MOV DWORD PTR [ECX+0x70],EAX
	MOV DWORD PTR [ECX+0x78],EAX
	MOV BYTE PTR [ECX+0x7C],AL
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100184F0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x70]
	MOV ESI, ECX
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m85260_sub_10086260])
	MOV AL,BYTE PTR [ESP+arg1+0x8]
	ADD ESP, 0x04
	MOV ECX, ESI
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mB0B10_sub_100B1B10])
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_100186E0()
{
__asm{
	MOV EAX,DWORD PTR [ECX+0x00000098]
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100187E0(DWORD arg1)
{
	enum{
		var_1C = -0x1C,
		var_18 = -0x18,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m17927_proc_10018927]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x0C
	PUSH ESI
	PUSH EDI
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	MOV ESI, ECX
	XOR EDI, EDI
	MOV DWORD PTR [EBP+var_1C+0x4],EDI
	CMP DWORD PTR [EBP+arg1+0x4],EDI
	JZ loc_10018822
	MOV DWORD PTR [ESI+0x04],offset LEGO1_rdata + 0x2070
	LEA ECX,DWORD PTR [ESI+0x54]
	CALL_LONG(offset [LEGO1_text.m2C700_sub_1002D700])
	OR DWORD PTR [EBP+var_1C+0x4],0x01
	MOV DWORD PTR [EBP+var_8+0x4],EDI
loc_10018822:
	MOV AL,BYTE PTR [EBP+var_10+0x3]
	XOR ECX, ECX
	MOV EDX, 0x00000001
	MOV BYTE PTR [ESI+0x08],AL
	MOV DWORD PTR [ESI+0x0C],ECX
	MOV DWORD PTR [ESI+0x10],ECX
	MOV DWORD PTR [ESI+0x14],ECX
	MOV DWORD PTR [EBP+var_8+0x4],EDX
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m1510_ptr]
	MOV DWORD PTR [EBP+var_8+0x4],0x00000002
	MOV EDI,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ESI+EDI+0x04],offset [LEGO1_rdata.m1440_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV DWORD PTR [EBP+var_8+0x4],0x00000003
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA EDI,DWORD PTR [EAX-0x1C]
	MOV DWORD PTR [ESI+EAX],EDI
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV WORD PTR DS:[ESI+0x18],0xFFFF
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m2148_ptr]
	MOV EDI,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [ESI+EDI+0x04],offset [LEGO1_rdata.m2078_ptr]
	MOV EAX,DWORD PTR [ESI+0x04]
	MOV EAX,DWORD PTR [EAX+0x04]
	LEA EDI,DWORD PTR [EAX-0x50]
	MOV DWORD PTR [ESI+EAX],EDI
	MOV BYTE PTR [ESI+0x1C],CL
	MOV BYTE PTR [ESI+0x1D],CL
	MOV BYTE PTR [ESI+0x1F],CL
	MOV DWORD PTR [ESI+0x24],ECX
	MOV DWORD PTR [ESI+0x20],ECX
	MOV BYTE PTR [ESI+0x1E],CL
	MOV DWORD PTR [ESI+0x2C],ECX
	MOV DWORD PTR [ESI+0x30],ECX
	MOV DWORD PTR [ESI+0x34],ECX
	MOV DWORD PTR [ESI+0x44],ECX
	MOV BYTE PTR [ESI+0x40],DL
	MOV BYTE PTR [ESI+0x48],CL
	MOV EAX, offset [LEGO1_data.mDD4]
	MOV DWORD PTR [ESI+0x4C],ECX
	MOV DWORD PTR [ESI+0x38],ECX
	MOV DWORD PTR [ESI+0x3C],ECX
	MOV BYTE PTR [ESI+0x28],0x04
loc_100188C5:
	MOV BYTE PTR [EAX],0x00
	ADD EAX, 0x20
	CMP EAX, offset [LEGO1_data.mF14]
	JB loc_100188C5
	MOV EAX, ESI
	POP EDI
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000],ECX
	MOV ESP, EBP
	POP EBP
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_proc_100188ED()
{
	enum{
		arg1217218 = 0x4A4B08,
		arg1217219 = 0x4A4B0C,
	};

__asm{
	TEST BYTE PTR [EBP+arg1217218-0x4A4B20],0x01
	JZ loc_100188FE
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x54
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_100188FE:
	RET
	TEST BYTE PTR [EBP-0x18],0x02
	JZ loc_10018910
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	ADD ECX, 0x20
	JMP_LONG(offset [LEGO1_text.m2C820_loc_1002D820])
loc_10018910:
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10018980()
{
__asm{
	FLD DWORD PTR [offset LEGO1_rdata + 0x2030]
	PUSH ESI
	XOR EDX, EDX
	PUSH EDI
	MOV ESI, ECX
	MOV EDI,DWORD PTR [ECX+0x0C]
loc_1001898F:
	TEST EDI, EDI
	JNZ loc_100189C6
loc_10018993:
	FSTP ST(0)
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	PUSH offset [LEGO1_data.m1068_str]
	MOV ECX,DWORD PTR [EAX+0x40]
	CALL_LONG(offset [LEGO1_text.m3C170_sub_1003D170])
	PUSH 0x37
	MOV ECX, EAX
	PUSH 0x2D
	MOV DWORD PTR [ESI+0x38],EAX
	CALL_LONG(offset [LEGO1_text.m5CB0_sub_10006CB0])
	MOV EAX,DWORD PTR [ESI+0x04]
	POP EDI
	MOV ECX,DWORD PTR [EAX+0x04]
	MOV EDX,DWORD PTR [ESI+ECX+0x58]
	POP ESI
	MOV BYTE PTR [EDX+0x0C],0x01
	RET
loc_100189C6:
	MOV EAX,DWORD PTR [ESI+0x10]
	SUB EAX, EDI
	SAR EAX, 0x02
	CMP EAX, EDX
	JBE loc_10018993
	MOV ECX,DWORD PTR [EDX*4+EDI]
	FCOM DWORD PTR [ECX]
	FNSTSW AX
	TEST AH,0x40
	JZ loc_100189E1
	MOV DWORD PTR [ESI+0x34],ECX
loc_100189E1:
	INC EDX
	JMP loc_1001898F
}
}

__declspec(naked) DWORD LEGO1_sub_10018AA1()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m17B70_loc_10018B70])
}
}

__declspec(naked) DWORD LEGO1_loc_10018AA9()
{
	enum{
		arg1217184 = 0x4A4A80,
		arg1217185 = 0x4A4A84,
		arg1217186 = 0x4A4A88,
		arg1217202 = 0x4A4AC8,
		arg1217203 = 0x4A4ACC,
		arg1217204 = 0x4A4AD0,
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV EDX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	CMP BYTE PTR [EDX-0x35],0x00
	JZ FAR loc_10018B4C
	MOV ECX,DWORD PTR [ECX+0x04]
	LEA EAX,DWORD PTR [EBP+arg1217186-0x4A4B20]
	MOV EDI, EAX
	MOV DWORD PTR [EBP+arg1217185-0x4A4B20],EAX
	MOV DWORD PTR [EBP+arg1217184-0x4A4B20],offset [LEGO1_rdata.m300_ptr]
	MOV ESI,DWORD PTR [ECX+0x14]
	MOV ECX, 0x00000010
	REP MOVSD
	MOV EAX,DWORD PTR [EBP+arg1217185-0x4A4B20]
	LEA ECX,DWORD PTR [EBP+arg1217184-0x4A4B20]
	ADD EAX, 0x30
	PUSH ECX
	MOV EDX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	FLD DWORD PTR [EAX+0x04]
	FSUB DWORD PTR [offset LEGO1_rdata + 0x2034]
	FSTP DWORD PTR [EAX+0x04]
	MOV EAX,DWORD PTR [EDX-0x50]
	MOV EBX,DWORD PTR [EAX+0x04]
	MOV ECX,DWORD PTR [EDX+EBX+0x04]
	CALL_LONG(offset [LEGO1_text.mA36B0_sub_100A46B0])
	PUSH offset [LEGO1_data.m1070_str]
	CALL_LONG(offset [LEGO1_text.m14840_sub_10015840])
	ADD ESP, 0x04
	LEA ECX,DWORD PTR [EBP+arg1217204-0x4A4B20]
	MOV EDI, ECX
	MOV DWORD PTR [EBP+arg1217203-0x4A4B20],ECX
	MOV DWORD PTR [EBP+arg1217202-0x4A4B20],offset [LEGO1_rdata.m300_ptr]
	MOV ESI,DWORD PTR [EAX+0x14]
	MOV ECX, 0x00000010
	REP MOVSD
	MOV ECX,DWORD PTR [EBP+arg1217203-0x4A4B20]
	LEA EDX,DWORD PTR [EBP+arg1217202-0x4A4B20]
	ADD ECX, 0x30
	PUSH EDX
	FLD DWORD PTR [ECX+0x04]
	FSUB DWORD PTR [offset LEGO1_rdata + 0x2034]
	FSTP DWORD PTR [ECX+0x04]
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mA36B0_sub_100A46B0])
loc_10018B4C:
	MOV EDX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	MOV EAX,DWORD PTR [EDX-0x50]
	MOV EBX,DWORD PTR [EAX+0x04]
	LEA ECX,DWORD PTR [EDX+EBX-0x50]
	CALL_LONG(offset [LEGO1_text.m2E1B0_sub_1002F1B0])
	JMP_LONG(offset [LEGO1_text.m17B5E_loc_10018B5E])
}
}

__declspec(naked) DWORD LEGO1_loc_10018B5E()
{
	enum{
		arg1217221 = 0x4A4B14,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217221-0x4A4B20]
	POP EDI
	MOV DWORD PTR FS:[0x00000000],ECX
	POP ESI
	POP EBX
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10018BB1()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m17BC0_loc_10018BC0])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10019250(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV ESI, ECX
	MOV EDX,DWORD PTR [EAX+0x04]
	MOV EAX,DWORD PTR [ESP+arg1+0x4]
	LEA ECX,DWORD PTR [ESI+EDX+0x04]
	PUSH EAX
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x30])
	MOV ECX,DWORD PTR [ESP+arg1+0x8]
	MOV DWORD PTR [ESI+0x44],ECX
	POP ESI
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_sub_100192A0()
{
	enum{
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		var_3C = -0x3C,
		var_38 = -0x38,
		var_34 = -0x34,
		var_30 = -0x30,
		var_2C = -0x2C,
		var_28 = -0x28,
		var_20 = -0x20,
		var_18 = -0x18,
		var_14 = -0x14,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m184D5_proc_100194D5]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x3C
	LEA EAX,DWORD PTR [EBP+var_30+0x4]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	PUSH EBX
	XOR EDX, EDX
	PUSH ESI
	MOV DWORD PTR [EBP+var_34+0x4],EAX
	PUSH EDI
	MOV EAX, offset [LEGO1_rdata.m488_ptr]
	LEA ECX,DWORD PTR [EBP+var_44+0x4]
	MOV DWORD PTR [EBP+var_38+0x4],EAX
	MOV DWORD PTR [EBP+var_30+0x4],EDX
	MOV DWORD PTR [EBP+var_2C+0x4],EDX
	MOV DWORD PTR [EBP+var_28+0x4],EDX
	MOV DWORD PTR [EBP+var_48+0x4],ECX
	MOV EBX,DWORD PTR [EBP+var_14+0x4]
	MOV DWORD PTR [EBP+var_4C+0x4],EAX
	MOV EAX,DWORD PTR [EBX+0x04]
	MOV DWORD PTR [EBP+var_3C+0x4],EDX
	MOV DWORD PTR [EBP+var_44+0x4],EDX
	MOV DWORD PTR [EBP+var_40+0x4],EDX
	MOV ESI,DWORD PTR [EAX+0x04]
	MOV EAX,DWORD PTR [EBX+ESI+0x00000138]
	TEST EAX, EAX
	JZ loc_1001931F
	MOV DWORD PTR [EBP+var_18+0x4],EAX
	CMP EAX, EDX
	JZ loc_1001931F
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m18383_sub_10019383])
	MOV EAX,DWORD PTR [EBP+var_18+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m85260_sub_10086260])
	ADD ESP, 0x04
loc_1001931F:
	PUSH 0x3C
	MOV EBX, 0x00000001
	CALL_LONG(offset [LEGO1_text.m85240_sub_10086240])
	MOV DWORD PTR [EBP+var_20+0x4],EAX
	ADD ESP, 0x04
	MOV EDI, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	TEST EDI, EDI
	JZ_LONG(offset [LEGO1_text.m1839B_loc_1001939B])
	LEA EAX,DWORD PTR [EBP+var_14+0x3]
	MOV ECX, EDI
	PUSH EAX
	LEA ESI,DWORD PTR [EDI+0x0C]
	CALL_LONG(offset [LEGO1_text.m184F0_sub_100194F0])
	LEA EAX,DWORD PTR [EDI+0x14]
	MOV ECX, ESI
	MOV BYTE PTR [EBP+var_8+0x4],0x03
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mB0F0_sub_1000C0F0])
	LEA EAX,DWORD PTR [EDI+0x28]
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m488_ptr]
	LEA ESI,DWORD PTR [EDI+0x20]
	PUSH EAX
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mB0F0_sub_1000C0F0])
	MOV EDX, EDI
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m488_ptr]
	MOV DWORD PTR [EDI+0x34],0x00000000
	MOV BYTE PTR [EDI+0x38],0x00
	MOV BYTE PTR [EBP+var_8+0x4],BL
	JMP_LONG(offset [LEGO1_text.m1839D_loc_1001939D])
}
}

__declspec(naked) DWORD LEGO1_sub_10019383()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m17B70_loc_10018B70])
}
}

__declspec(naked) DWORD LEGO1_sub_100194CD()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m17B70_loc_10018B70])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100194F0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	PUSH ESI
	MOV ESI, ECX
	PUSH 0x10
	MOV AL,BYTE PTR [EAX]
	MOV BYTE PTR [ESI],AL
	CALL_LONG(offset [LEGO1_text.m85240_sub_10086240])
	ADD ESP, 0x04
	MOV DWORD PTR [EAX],EAX
	MOV DWORD PTR [EAX+0x04],EAX
	MOV DWORD PTR [ESI+0x08],0x00000000
	MOV DWORD PTR [ESI+0x04],EAX
	MOV EAX, ESI
	POP ESI
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10019520()
{
	enum{
		var_4 = -0x4,
	};

__asm{
	SUB ESP, 0x04
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV BYTE PTR [ECX+0x1E],0x04
	MOV ESI, ECX
	MOV EDX,DWORD PTR [EAX+0x04]
	MOVSX EAX,BYTE PTR [ESI+0x28]
	LEA ECX,DWORD PTR [ESI+EDX+0x04]
	ADD EAX, 0x03
	MOV DWORD PTR [ESP+var_4+0x8],EAX
	SUB ESP, 0x04
	FILD DWORD PTR [ESP+var_4+0xC]
	FSTP DWORD PTR [ESP]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x30])
	PUSH 0x0A
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m182A0_sub_100192A0])
	POP ESI
	ADD ESP, 0x04
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_10019560()
{
	enum{
		var_4 = -0x4,
	};

__asm{
	SUB ESP, 0x04
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV BYTE PTR [ECX+0x1E],0x05
	MOV ESI, ECX
	MOV EDX,DWORD PTR [EAX+0x04]
	MOVSX EAX,BYTE PTR [ESI+0x28]
	LEA ECX,DWORD PTR [ESI+EDX+0x04]
	ADD EAX, 0x05
	MOV DWORD PTR [ESP+var_4+0x8],EAX
	SUB ESP, 0x04
	FILD DWORD PTR [ESP+var_4+0xC]
	FSTP DWORD PTR [ESP]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x30])
	PUSH 0x09
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m182A0_sub_100192A0])
	POP ESI
	ADD ESP, 0x04
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_10019700(DWORD arg1)
{
	enum{
		var_6C = -0x6C,
		var_64 = -0x64,
		var_60 = -0x60,
		var_5C = -0x5C,
		var_58 = -0x58,
		var_54 = -0x54,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_4 = -0x4,
		r = 0x0,
		arg1217225 = 0x4A4B24,
		arg1217232 = 0x4A4B40,
		arg1217235 = 0x4A4B4C,
		arg1217236 = 0x4A4B50,
		arg1217237 = 0x4A4B54,
		arg1217238 = 0x4A4B58,
		arg1217243 = 0x4A4B6C,
		arg1217246 = 0x4A4B78,
		arg1217258 = 0x4A4BA8,
	};

__asm{
	SUB ESP, 0x68
	PUSH EBX
	PUSH ESI
	PUSH EDI
	XOR EBX, EBX
	PUSH EBP
	CMP DWORD PTR [ECX+0x4C],EBX
	MOV EBP, ECX
	JNZ loc_1001972F
	PUSH offset LEGO1_data + 0xF20
	MOV BYTE PTR [offset LEGO1_data + 0xF20],BL
	CALL_LONG(offset [LEGO1_text.m18B90_sub_10019B90])
	MOV DWORD PTR [EBP+arg1217243-0x4A4B20],EAX
	MOV BYTE PTR [offset LEGO1_data + 0xF24],BL
	MOV BYTE PTR [offset LEGO1_data + 0xF28],BL
loc_1001972F:
	CMP DWORD PTR [EBP+arg1217243-0x4A4B20],0x00
	JNZ loc_1001975A
	MOV BYTE PTR [EBP+arg1217232-0x4A4B22],0x01
	CMP BYTE PTR [EBP+arg1217232-0x4A4B23],0x08
	JNZ loc_1001974B
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m50F20_sub_10051F20])
loc_1001974B:
	MOV EAX, 0x00000001
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x68
	RETN 0x0004
loc_1001975A:
	CMP BYTE PTR [offset LEGO1_data + 0xF28],0x00
	JNZ loc_100197C9
	FLD DWORD PTR [EBP+arg1217236-0x4A4B20]
	FCOMP DWORD PTR [ESP+r+0x7C]
	FNSTSW AX
	TEST AH,0x01
	JZ loc_100197C9
	MOV BYTE PTR [offset LEGO1_data + 0xF28],0x01
	CALL_LONG(offset [LEGO1_text.m14710__SoundManager__YAPAVLegoSoundManager__XZ])
	PUSH 0x00
	MOV ECX,DWORD PTR [EBP+arg1217238-0x4A4B20]
	PUSH offset [LEGO1_data.m1070_str]
	PUSH ECX
	MOV ECX,DWORD PTR [EAX+0x40]
	CALL_LONG(offset [LEGO1_text.m3CB10_sub_1003DB10])
	CMP BYTE PTR [offset LEGO1_data + 0xF20],0x00
	JZ loc_100197B4
	PUSH 0x00
	MOV EAX,DWORD PTR [EBP+arg1217243-0x4A4B20]
	PUSH 0x01
	PUSH 0x00000320
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147F0_sub_100157F0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m2F150_sub_10030150])
	JMP loc_100197C9
loc_100197B4:
	PUSH 0x00000320
	MOV EAX,DWORD PTR [EBP+arg1217243-0x4A4B20]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147E0_sub_100157E0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m25D70_sub_10026D70])
loc_100197C9:
	FLD DWORD PTR [EBP+arg1217235-0x4A4B20]
	FCOMP DWORD PTR [ESP+r+0x7C]
	FNSTSW AX
	TEST AH,0x01
	JZ loc_1001981E
	XOR EBX, EBX
	PUSH offset LEGO1_data + 0xF20
	MOV ECX, EBP
	MOV BYTE PTR [offset LEGO1_data + 0xF20],BL
	CALL_LONG(offset [LEGO1_text.m18B90_sub_10019B90])
	MOV DWORD PTR [EBP+arg1217243-0x4A4B20],EAX
	MOV ECX,DWORD PTR [EBP+arg1217237-0x4A4B20]
	CALL_LONG(offset [LEGO1_text.m1B130_sub_1001C130])
	FADD DWORD PTR [ESP+var_4+0x80]
	XOR EAX, EAX
	FST DWORD PTR [EBP+arg1217235-0x4A4B20]
	FSUB DWORD PTR [offset LEGO1_rdata + 0x2054]
	FSTP DWORD PTR [EBP+arg1217236-0x4A4B20]
	POP EBP
	MOV BYTE PTR [offset LEGO1_data + 0xF24],BL
	POP EDI
	MOV BYTE PTR [offset LEGO1_data + 0xF28],BL
	POP ESI
	POP EBX
	ADD ESP, 0x68
	RETN 0x0004
loc_1001981E:
	MOV EAX,DWORD PTR [EBP+arg1217225-0x4A4B20]
	MOV ECX,DWORD PTR [ESP+r+0x7C]
	PUSH offset [LEGO1_data.m1070_str]
	MOV EDX,DWORD PTR [EAX+0x04]
	MOV DWORD PTR [EBP+EDX+arg1217258-0x4A4B20],ECX
	CALL_LONG(offset [LEGO1_text.m14840_sub_10015840])
	MOV ECX,DWORD PTR [EBP+arg1217225-0x4A4B20]
	ADD ESP, 0x04
	MOV EBX, EAX
	MOV EAX,DWORD PTR [ECX+0x04]
	LEA ECX,DWORD PTR [ESP+var_44+0x7C]
	MOV EDI, ECX
	MOV DWORD PTR [ESP+var_48+0x7C],ECX
	MOV EDX,DWORD PTR [EBP+EAX+arg1217246-0x4A4B20]
	MOV ECX, 0x00000010
	MOV DWORD PTR [ESP+var_4C+0x7C],offset [LEGO1_rdata.m300_ptr]
	MOV ESI,DWORD PTR [EDX+0x14]
	REP MOVSD
	MOV EAX,DWORD PTR [ESP+var_48+0x7C]
	LEA EDX,DWORD PTR [ESP+var_4C+0x7C]
	ADD EAX, 0x30
	PUSH EDX
	MOV ECX, EBX
	FLD DWORD PTR [EAX+0x04]
	FADD DWORD PTR [offset LEGO1_rdata + 0x2038]
	FSTP DWORD PTR [EAX+0x04]
	CALL_LONG(offset [LEGO1_text.mA48F0_sub_100A58F0])
	MOV ESI,DWORD PTR [EBX]
	MOV ECX, EBX
	CALL_LONG(DWORD PTR [ESI+0x14])
	MOV ECX,DWORD PTR [ESP+var_48+0x7C]
	MOV EAX,DWORD PTR [ESP+var_48+0x7C]
	ADD EAX, 0x10
	MOV DWORD PTR [ESP+var_58+0x7C],ECX
	MOV ECX, offset [LEGO1_rdata.m518_ptr]
	MOV DWORD PTR [ESP+var_50+0x7C],EAX
	MOV EAX,DWORD PTR [ESP+var_48+0x7C]
	MOV DWORD PTR [ESP+var_5C+0x7C],ECX
	ADD EAX, 0x20
	MOV DWORD PTR [ESP+var_54+0x7C],ECX
	MOV DWORD PTR [ESP+var_60+0x7C],EAX
	MOV DWORD PTR [ESP+var_64+0x7C],ECX
	MOV EAX,DWORD PTR [ESP+var_48+0x7C]
	LEA ECX,DWORD PTR [ESP+var_64+0x7C]
	ADD EAX, 0x30
	PUSH EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m538_ptr])
	MOV ECX,DWORD PTR [EBP+arg1217243-0x4A4B20]
	MOV EBX,DWORD PTR [ESP+var_64+0x7C]
	MOV EDX,DWORD PTR [ECX+0x54]
	LEA ECX,DWORD PTR [ESP+var_64+0x7C]
	MOV EAX,DWORD PTR [EDX+0x14]
	ADD EAX, 0x30
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x58])
	LEA ECX,DWORD PTR [ESP+var_64+0x7C]
	MOV EBX,DWORD PTR [ESP+var_64+0x7C]
	CALL_LONG(DWORD PTR [EBX+0x40])
	FCOM DWORD PTR [offset LEGO1_rdata + 0x202C]
	FSTP DWORD PTR [ESP+var_6C+0x7C]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10019926
	FLD DWORD PTR [ESP+var_6C+0x7C]
	FSQRT
	FCOM DWORD PTR [offset LEGO1_rdata + 0x202C]
	FSTP DWORD PTR [ESP+var_6C+0x7C]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_10019926
	LEA EAX,DWORD PTR [ESP+var_6C+0x7C]
	LEA ECX,DWORD PTR [ESP+var_64+0x7C]
	MOV EBX,DWORD PTR [ESP+var_64+0x7C]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x14])
loc_10019926:
	MOV EAX,DWORD PTR [ESP+var_60+0x7C]
	MOV ECX,DWORD PTR [ESP+var_50+0x7C]
	MOV EBX,DWORD PTR [ESP+var_5C+0x7C]
	PUSH EAX
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_54+0x7C]
	CALL_LONG(DWORD PTR [EBX+0x74])
	LEA ECX,DWORD PTR [ESP+var_5C+0x7C]
	MOV EBX,DWORD PTR [ESP+var_5C+0x7C]
	CALL_LONG(DWORD PTR [EBX+0x40])
	FCOM DWORD PTR [offset LEGO1_rdata + 0x202C]
	FSTP DWORD PTR [ESP+var_6C+0x7C]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_1001997E
	FLD DWORD PTR [ESP+var_6C+0x7C]
	FSQRT
	FCOM DWORD PTR [offset LEGO1_rdata + 0x202C]
	FSTP DWORD PTR [ESP+var_6C+0x7C]
	FNSTSW AX
	TEST AH,0x41
	JNZ loc_1001997E
	LEA EAX,DWORD PTR [ESP+var_6C+0x7C]
	LEA ECX,DWORD PTR [ESP+var_5C+0x7C]
	MOV EBX,DWORD PTR [ESP+var_5C+0x7C]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x14])
loc_1001997E:
	MOV EAX,DWORD PTR [ESP+var_58+0x7C]
	MOV ECX,DWORD PTR [ESP+var_60+0x7C]
	MOV EBX,DWORD PTR [ESP+var_54+0x7C]
	PUSH EAX
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_4C+0x7C]
	CALL_LONG(DWORD PTR [EBX+0x74])
	MOV ECX,DWORD PTR [EBP+arg1217237-0x4A4B20]
	XOR EDI, EDI
	MOV EAX,DWORD PTR [ECX+0x04]
	MOV ESI,DWORD PTR [EAX+0x04]
	CALL_LONG(offset [LEGO1_text.m1B130_sub_1001C130])
	FSUBR DWORD PTR [EBP+arg1217235-0x4A4B20]
	FSUBR DWORD PTR [ESP+r+0x7C]
	FSTP DWORD PTR [ESP+var_6C+0x7C]
	CMP DWORD PTR [ESI+0x08],EDI
	JBE loc_100199E1
	FLD DWORD PTR [ESP+var_6C+0x7C]
	CALL_LONG(offset [LEGO1_text.m8A608_sub_1008B608])
	MOV EBX, EAX
loc_100199BE:
	MOV EAX,DWORD PTR [EBP+arg1217237-0x4A4B20]
	LEA EDX,DWORD PTR [ESP+var_4C+0x7C]
	INC EDI
	MOV ECX,DWORD PTR [EAX+0x08]
	PUSH ECX
	MOV EAX,DWORD PTR [ESI+0x0C]
	PUSH EBX
	PUSH EDX
	MOV ECX,DWORD PTR [EDI*4+EAX-0x04]
	PUSH ECX
	CALL_LONG(offset [LEGO1_text.mA7E80_sub_100A8E80])
	ADD ESP, 0x10
	CMP DWORD PTR [ESI+0x08],EDI
	JA loc_100199BE
loc_100199E1:
	XOR EAX, EAX
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x68
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_100199F0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOVSX EAX,BYTE PTR [ESP+arg1]
	TEST EAX, EAX
	JZ loc_10019A0A
	CMP EAX, 0x01
	JZ loc_10019A55
	CMP EAX, 0x02
	JZ FAR loc_10019AF2
	RETN 0x0004
loc_10019A0A:
	CMP DWORD PTR [offset LEGO1_data + 0x12B1C],0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	JZ loc_10019A3B
	PUSH 0x00000100
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	MOV DWORD PTR [offset LEGO1_data + 0x12B1C],0x00000000
	RETN 0x0004
loc_10019A3B:
	PUSH 0x000000FF
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B1C]
	RETN 0x0004
loc_10019A55:
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x12B20]
	TEST EAX, EAX
	JZ loc_10019A90
	CMP EAX, 0x01
	JZ loc_10019AB4
	PUSH 0x00
	CMP EAX, 0x02
	PUSH 0x00
	PUSH 0x00
	PUSH 0x01
	PUSH 0x00
	JZ loc_10019AD8
	PUSH 0x00000111
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	MOV DWORD PTR [offset LEGO1_data + 0x12B20],0x00000000
	RETN 0x0004
loc_10019A90:
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x01
	PUSH 0x00
	PUSH 0x0000010E
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B20]
	RETN 0x0004
loc_10019AB4:
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x01
	PUSH 0x00
	PUSH 0x0000010F
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B20]
	RETN 0x0004
loc_10019AD8:
	PUSH 0x00000110
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B20]
	RETN 0x0004
loc_10019AF2:
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x12B24]
	TEST EAX, EAX
	JZ loc_10019B2D
	CMP EAX, 0x01
	JZ loc_10019B51
	PUSH 0x00
	CMP EAX, 0x02
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	JZ loc_10019B75
	PUSH 0x00000107
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	MOV DWORD PTR [offset LEGO1_data + 0x12B24],0x00000000
	RETN 0x0004
loc_10019B2D:
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00000104
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B24]
	RETN 0x0004
loc_10019B51:
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00
	PUSH 0x00000105
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B24]
	RETN 0x0004
loc_10019B75:
	PUSH 0x00000106
	CALL_LONG(offset [LEGO1_text.m147A0_sub_100157A0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m51560_sub_10052560])
	INC DWORD PTR [offset LEGO1_data + 0x12B24]
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_10019B90()
{
	enum{
		var_4 = -0x4,
	};

__asm{
	SUB ESP, 0x04
	LEA EAX,DWORD PTR [ESP+var_4+0x4]
	PUSH EBX
	PUSH ESI
	PUSH EDI
	PUSH EBP
	MOV ESI, ECX
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147F0_sub_100157F0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m2F790_sub_10030790])
	MOV EDI, EAX
	LEA EAX,DWORD PTR [ESP+var_4+0x14]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147E0_sub_100157E0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m25570_sub_10026570])
	MOVSX ECX,BYTE PTR [ESI+0x1D]
	XOR EDX, EDX
	CMP ECX, 0x08
	JA_LONG(offset [LEGO1_text.m19041_loc_1001A041])
	JMP_LONG(DWORD PTR [offset LEGO1_text.m19068_proc_1001A068+ECX*4])
}
}

__declspec(naked) DWORD LEGO1_sub_1001A107()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	SUB ECX, 0x34
	JMP_LONG(offset [LEGO1_text.m1B140_sub_1001C140])
}
}

__declspec(naked) DWORD LEGO1_sub_1001A200()
{
	enum{
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m19269_proc_1001A269]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x04
	PUSH ESI
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	MOV ESI, ECX
	CALL_LONG(offset [LEGO1_text.m2C700_sub_1002D700])
	XOR EAX, EAX
	MOV DWORD PTR [EBP+var_8+0x4],EAX
	MOV DWORD PTR [ESI], offset [LEGO1_rdata.m398_ptr]
	MOV DWORD PTR [ESI+0x00000154],EAX
	MOV DWORD PTR [ESI+0x0000013C],0x40C00000
	MOV DWORD PTR [ESI+0x0000015C],0x3F800000
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	MOV ECX,DWORD PTR [EBP+var_10+0x4]
	MOV DWORD PTR [ESI+0x00000158],EAX
	MOV DWORD PTR FS:[0x00000000],ECX
	MOV EAX, ESI
	POP ESI
	MOV ESP, EBP
	POP EBP
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001A280(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	MOV EAX,DWORD PTR [ESP+arg1]
	ADD ECX, 0x0C
	ADD EAX, 0x20
	PUSH EAX
	MOV EDX,DWORD PTR [EAX-0x04]
	MOV DWORD PTR [ECX-0x04],EDX
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	XOR EAX, EAX
	RETN 0x0004
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001A2A0(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	CMP BYTE PTR [ESP+arg1],0x00
	JNZ loc_1001A2AE
	PUSH 0x00
	CALL_LONG(offset [LEGO1_text.mF810_sub_10010810])
loc_1001A2AE:
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_1001A3F0()
{
	enum{
		var_44 = -0x44,
		var_40 = -0x40,
		var_3C = -0x3C,
		var_38 = -0x38,
		var_34 = -0x34,
		var_2C = -0x2C,
		var_24 = -0x24,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		arg1217225 = 0x4A4B24,
	};

__asm{
	SUB ESP, 0x40
	PUSH EBX
	PUSH ESI
	MOV EAX,DWORD PTR [ECX+0x54]
	PUSH EDI
	PUSH EBP
	MOV ESI, ECX
	MOV DWORD PTR [ECX+0x000000DC],0x00000000
	MOV BYTE PTR [EAX+0x0C],0x01
	MOV EAX,DWORD PTR [ESI+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m147C0_sub_100157C0])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.mA5410_sub_100A6410])
	MOV EBX,DWORD PTR [ESI+0x54]
	CALL_LONG(offset [LEGO1_text.m147C0_sub_100157C0])
	MOV EDI, EAX
	MOV DWORD PTR [ESP+var_14+0x50],EBX
	MOV EAX,DWORD PTR [EDI+0x0C]
	LEA EBX,DWORD PTR [EAX+0x04]
	MOV ECX,DWORD PTR [EBX]
	PUSH ECX
	PUSH EAX
	LEA ECX,DWORD PTR [EDI+0x08]
	CALL_LONG(offset [LEGO1_text.m19690_sub_1001A690])
	MOV ECX, EAX
	MOV DWORD PTR [EBX],EAX
	MOV EDX,DWORD PTR [ECX+0x04]
	MOV DWORD PTR [EDX],ECX
	ADD ECX, 0x08
	JZ loc_1001A44E
	MOV EAX,DWORD PTR [ESP+var_14+0x50]
	MOV DWORD PTR [ECX],EAX
loc_1001A44E:
	INC DWORD PTR [EDI+0x10]
	MOV EDI,DWORD PTR [ESI]
	PUSH 0x00
	MOV ECX, ESI
	CALL_LONG(DWORD PTR [EDI+0x2C])
	PUSH 0x00
	MOV ECX, ESI
	CALL_LONG(DWORD PTR [EDI+0x78])
	MOV EAX,DWORD PTR [ESI+0x00000158]
	TEST EAX, EAX
	JZ FAR loc_1001A669
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14880_sub_10015880])
	ADD ESP, 0x04
	MOV EDI,DWORD PTR [ESI+0x0000015C]
	CALL_LONG(offset [LEGO1_text.m14780_sub_10015780])
	PUSH 0x01
	MOV DWORD PTR [EAX+0x28],EDI
	MOV BYTE PTR [EAX+0x5C],0x00
	MOV ECX,DWORD PTR [ESI+0x00000158]
	MOV EBX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EBX+0x2C])
	MOV ECX,DWORD PTR [ESI+0x00000158]
	PUSH 0x01
	MOV EBX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EBX+0x78])
	MOV EDX,DWORD PTR [ESI+0x00000088]
	MOV ECX,DWORD PTR [ESI+0x00000158]
	MOV DWORD PTR [ECX+0x00000088],EDX
	MOV EDX,DWORD PTR [ESI+0x00000088]
	MOV DWORD PTR [ESP+var_44+0x54],0x00000000
	CMP BYTE PTR [EDX+0x04],0x00
	JBE FAR loc_1001A605
	MOV DWORD PTR [ESP+var_2C+0x54],0x00000000
loc_1001A4D6:
	MOV EDX,DWORD PTR [ESI+0x00000088]
	MOV EAX,DWORD PTR [ESP+var_2C+0x54]
	LEA EBX,DWORD PTR [ESP+var_38+0x54]
	MOV ECX,DWORD PTR [EDX+0x08]
	MOV ECX,DWORD PTR [EAX+ECX]
	MOV DWORD PTR [ESP+var_3C+0x54],EBX
	MOV DWORD PTR [ESP+var_40+0x54],offset [LEGO1_rdata.m488_ptr]
	MOV EAX,DWORD PTR [ECX+0x2C]
	CMP DWORD PTR [ECX+0x04],EDX
	JNZ loc_1001A526
	FLD DWORD PTR [EAX]
	FCHS
	FSTP DWORD PTR [ESP+var_38+0x54]
	MOV EAX,DWORD PTR [ECX+0x2C]
	MOV EDX,DWORD PTR [ESP+var_3C+0x54]
	FLD DWORD PTR [EAX+0x04]
	FCHS
	FSTP DWORD PTR [EDX+0x04]
	MOV EAX,DWORD PTR [ECX+0x2C]
	MOV EDX,DWORD PTR [ESP+var_3C+0x54]
	FLD DWORD PTR [EAX+0x08]
	FCHS
	FSTP DWORD PTR [EDX+0x08]
	JMP loc_1001A531
loc_1001A526:
	LEA ECX,DWORD PTR [ESP+var_40+0x54]
	PUSH EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m4A8_ptr])
loc_1001A531:
	MOV ECX,DWORD PTR [ESI+0x54]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x10])
	ADD EAX, 0x14
	LEA ECX,DWORD PTR [ESP+var_40+0x54]
	MOV EBX,DWORD PTR [ESP+var_40+0x54]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x5C])
	LEA ECX,DWORD PTR [ESP+var_18+0x54]
	PUSH ECX
	MOV ECX, ESI
	XOR EDI, EDI
	CALL_LONG(offset [LEGO1_text.mFD80_sub_10010D80])
	MOV EBX,DWORD PTR [ESP+var_40+0x54]
	LEA ECX,DWORD PTR [ESP+var_40+0x54]
	PUSH EAX
	CALL_LONG(DWORD PTR [EBX+0x48])
	MOV EAX,DWORD PTR [ESI+0x00000088]
	CMP BYTE PTR [EAX+0x04],0x00
	JBE loc_1001A5B5
	XOR EBX, EBX
loc_1001A570:
	MOV EAX,DWORD PTR [ESI+0x00000088]
	MOV EBP,DWORD PTR [EAX+0x2C]
	MOV EAX,DWORD PTR [ESP+var_3C+0x54]
	ADD EBP, EBX
	PUSH EAX
	MOV EAX,DWORD PTR [ESP+var_3C+0x54]
	MOV ECX,DWORD PTR [EBP+arg1217225-0x4A4B20]
	PUSH ECX
	LEA ECX,DWORD PTR [ESP+var_38+0x54]
	CALL_LONG(DWORD PTR [EAX+0x18])
	MOV ECX,DWORD PTR [EBP+arg1217225-0x4A4B20]
	FADD DWORD PTR [ECX+0x0C]
	FCOMP QWORD PTR [offset LEGO1_rdata + 0x2178]
	FNSTSW AX
	TEST AH,0x01
	JNZ loc_1001A5B5
	MOV ECX,DWORD PTR [ESI+0x00000088]
	XOR EAX, EAX
	ADD EBX, 0x18
	INC EDI
	MOV AL,BYTE PTR [ECX+0x04]
	CMP EAX, EDI
	JG loc_1001A570
loc_1001A5B5:
	MOV EAX,DWORD PTR [ESI+0x00000088]
	XOR ECX, ECX
	MOV CL,BYTE PTR [EAX+0x04]
	CMP EDI, ECX
	JZ loc_1001A5D9
	ADD DWORD PTR [ESP+var_2C+0x54],0x04
	INC DWORD PTR [ESP+var_44+0x54]
	CMP DWORD PTR [ESP+var_44+0x54],ECX
	JL FAR loc_1001A4D6
	JMP loc_1001A605
loc_1001A5D9:
	LEA EAX,DWORD PTR [ESP+var_2C+0x54]
	PUSH 0x01
	PUSH EAX
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mFCF0_sub_10010CF0])
	PUSH EAX
	MOV ECX, ESI
	LEA EAX,DWORD PTR [ESP+var_10+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mFC60_sub_10010C60])
	PUSH EAX
	MOV ECX,DWORD PTR [ESI+0x00000158]
	LEA EAX,DWORD PTR [ESP+var_34+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mF9B0_sub_100109B0])
loc_1001A605:
	MOV EAX,DWORD PTR [ESI+0x00000088]
	XOR ECX, ECX
	MOV CL,BYTE PTR [EAX+0x04]
	CMP ECX,DWORD PTR [ESP+var_44+0x54]
	JNZ loc_1001A64A
	LEA EAX,DWORD PTR [ESP+var_40+0x54]
	PUSH 0x01
	PUSH EAX
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mFCF0_sub_10010CF0])
	PUSH EAX
	MOV ECX, ESI
	LEA EAX,DWORD PTR [ESP+var_24+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mFC60_sub_10010C60])
	PUSH EAX
	MOV ECX, ESI
	LEA EAX,DWORD PTR [ESP+var_C+0x54]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mFD80_sub_10010D80])
	PUSH EAX
	MOV ECX,DWORD PTR [ESI+0x00000158]
	CALL_LONG(offset [LEGO1_text.mF9B0_sub_100109B0])
loc_1001A64A:
	MOV EAX,DWORD PTR [ESI+0x00000158]
	MOV DWORD PTR [EAX+0x000000DC],0x00000000
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV DWORD PTR [EAX+0x00000424],0x00000042
loc_1001A669:
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.m1A660_sub_1001B660])
	MOV ECX, ESI
	CALL_LONG(offset [LEGO1_text.mFC30_sub_10010C30])
	CALL_LONG(offset [LEGO1_text.m3DDA0_sub_1003EDA0])
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x40
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001A690(DWORD arg1, DWORD arg2)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	PUSH 0x0C
	CALL_LONG(offset [LEGO1_text.m85240_sub_10086240])
	MOV EDX,DWORD PTR [ESP+arg2+0x4]
	ADD ESP, 0x04
	TEST EDX, EDX
	JZ loc_1001A6AE
	MOV ECX,DWORD PTR [ESP+arg1]
	MOV DWORD PTR [EAX],ECX
	MOV DWORD PTR [EAX+0x04],EDX
	RETN 0x0008
loc_1001A6AE:
	MOV DWORD PTR [EAX],EAX
	MOV DWORD PTR [EAX+0x04],EAX
	RETN 0x0008
}
}

__declspec(naked) DWORD LEGO1_RetThis()
{
__asm{
	MOV EAX, ECX
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1001A700()
{
	enum{
		var_38 = -0x38,
		var_34 = -0x34,
		var_30 = -0x30,
		var_2C = -0x2C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_C = -0xC,
		var_8 = -0x8,
		var_4 = -0x4,
	};

__asm{
	SUB ESP, 0x38
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV DWORD PTR [ESP+var_38+0x38],0x00000016
	MOV DWORD PTR [ESP+var_34+0x38],EAX
	PUSH EBX
	PUSH ESI
	XOR EBX, EBX
	PUSH EDI
	MOV ECX, 0xFFFFFFFF
	PUSH EBP
	SUB EAX, EAX
	MOV EDI, offset [LEGO1_data.m1190_str]
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	MOV EBP, 0x00000002
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12B28
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F19999A
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0004
	MOV DWORD PTR [ESP+var_C+0x4C],0x3ECCCCCD
	MOV DWORD PTR [ESP+var_8+0x4C],0x0000002A
	MOV DWORD PTR [ESP+var_4+0x4C],0x00000012
	MOV EDI, offset [LEGO1_data.m1184_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000017
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],0x0001
	MOV DWORD PTR [ESP+var_14+0x48],0x3EDC28F6
	MOV WORD PTR SS:[ESP+var_10+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12B60
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F19999A
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000027
	MOV DWORD PTR [ESP+var_4+0x4C],0x00000012
	MOV EDI, offset [LEGO1_data.m1178_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000018
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12B98
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F000000
	MOV WORD PTR SS:[ESP+var_10+0x4C],BX
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F0CCCCD
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000026
	MOV DWORD PTR [ESP+var_4+0x4C],0x00000012
	MOV EDI, offset [LEGO1_data.m1170_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000004
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	MOV DWORD PTR [ESP+var_14+0x48],0x3F000000
	MOV WORD PTR SS:[ESP+var_10+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12BD0
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F000000
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000010
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000B
	MOV EDI, offset [LEGO1_data.m1164_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000010
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12C08
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F733333
	MOV WORD PTR SS:[ESP+var_10+0x4C],BP
	MOV DWORD PTR [ESP+var_C+0x4C],0x3E428F5C
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000017
	MOV DWORD PTR [ESP+var_4+0x4C],0x00000011
	MOV EDI, offset [LEGO1_data.m1164_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000011
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],0x0003
	MOV DWORD PTR [ESP+var_14+0x48],0x3F200000
	MOV WORD PTR SS:[ESP+var_10+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12C40
	MOV DWORD PTR [ESP+var_C+0x4C],0x3CF5C28F
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000018
	MOV DWORD PTR [ESP+var_4+0x4C],0x00000011
	MOV EDI, offset [LEGO1_data.m1158_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x0000000F
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12C78
	MOV DWORD PTR [ESP+var_14+0x4C],0x3E851EB8
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0001
	MOV DWORD PTR [ESP+var_C+0x4C],0x3C23D70A
	MOV DWORD PTR [ESP+var_8+0x4C],EBX
	MOV EDI, offset [LEGO1_data.m1150_str]
	MOV DWORD PTR [ESP+var_4+0x4C],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000013
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],0x0005
	MOV DWORD PTR [ESP+var_14+0x48],0x3F266666
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	MOV ECX, offset LEGO1_data + 0x12CB0
	MOV WORD PTR SS:[ESP+var_10+0x48],0x0001
	MOV DWORD PTR [ESP+var_C+0x48],0x3F2E147B
	MOV DWORD PTR [ESP+var_8+0x48],0x00000033
	MOV DWORD PTR [ESP+var_4+0x48],0x0000000E
	PUSH EAX
	MOV EDI, offset [LEGO1_data.m1148_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000014
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],0x0004
	MOV DWORD PTR [ESP+var_14+0x48],0x3DCCCCCD
	MOV WORD PTR SS:[ESP+var_10+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12CE8
	MOV DWORD PTR [ESP+var_C+0x4C],EBX
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000034
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000E
	MOV EDI, offset [LEGO1_data.m1140_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000015
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12D20
	MOV DWORD PTR [ESP+var_14+0x4C],0x3DCCCCCD
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0003
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F333333
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000036
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000E
	MOV EDI, offset [LEGO1_data.m1138_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000019
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12D58
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F0CCCCD
	MOV WORD PTR SS:[ESP+var_10+0x4C],BP
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F35C28F
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000008
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000F
	MOV EDI, offset [LEGO1_data.m1138_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x0000001C
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12D90
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F3AE148
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0004
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F35C28F
	MOV DWORD PTR [ESP+var_8+0x4C],0x0000000A
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000F
	MOV EDI, offset [LEGO1_data.m1130_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x0000001D
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12DC8
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F59999A
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0001
	MOV DWORD PTR [ESP+var_C+0x4C],0x3E8F5C29
	MOV DWORD PTR [ESP+var_8+0x4C],EBX
	MOV EDI, offset [LEGO1_data.m1124_str]
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000A
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x0000001F
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],0x0003
	MOV DWORD PTR [ESP+var_14+0x48],0x3EBD70A4
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	MOV ECX, offset LEGO1_data + 0x12E00
	MOV WORD PTR SS:[ESP+var_10+0x48],0x0001
	MOV DWORD PTR [ESP+var_C+0x48],0x3F051EB8
	MOV DWORD PTR [ESP+var_8+0x48],0x0000000C
	MOV DWORD PTR [ESP+var_4+0x48],0x0000000A
	PUSH EAX
	MOV EDI, offset [LEGO1_data.m111C_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000020
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BX
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12E38
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F6147AE
	MOV WORD PTR SS:[ESP+var_10+0x4C],BP
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F3D70A4
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000022
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000C
	MOV EDI, offset [LEGO1_data.m1110_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000021
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12E70
	MOV DWORD PTR [ESP+var_14+0x4C],0x3E75C28F
	MOV WORD PTR SS:[ESP+var_10+0x4C],BX
	MOV DWORD PTR [ESP+var_C+0x4C],0x3F570A3D
	MOV DWORD PTR [ESP+var_8+0x4C],0x00000023
	MOV DWORD PTR [ESP+var_4+0x4C],0x0000000C
	MOV EDI, offset [LEGO1_data.m1104_str]
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000028
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12EA8
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F2147AE
	MOV WORD PTR SS:[ESP+var_10+0x4C],0x0003
	MOV DWORD PTR [ESP+var_C+0x4C],0x3C23D70A
	MOV DWORD PTR [ESP+var_8+0x4C],EBX
	MOV EDI, offset [LEGO1_data.m1104_str]
	MOV DWORD PTR [ESP+var_4+0x4C],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x00000029
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12EE0
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F2147AE
	MOV WORD PTR SS:[ESP+var_10+0x4C],BX
	MOV DWORD PTR [ESP+var_C+0x4C],0x3ECCCCCD
	MOV DWORD PTR [ESP+var_8+0x4C],EBX
	MOV EDI, offset [LEGO1_data.m10F8_str]
	MOV DWORD PTR [ESP+var_4+0x4C],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [ESP+var_38+0x48],0x0000002B
	MOV DWORD PTR [ESP+var_34+0x48],EAX
	SUB EAX, EAX
	MOV DWORD PTR [ESP+var_30+0x48],EBX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EDX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [ESP+var_2C+0x48]
	REP MOVSD
	MOV ECX, EDX
	AND ECX, 0x03
	REP MOVSB
	MOV WORD PTR SS:[ESP+var_18+0x48],BP
	LEA EAX,DWORD PTR [ESP+var_38+0x48]
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12F18
	MOV DWORD PTR [ESP+var_14+0x4C],0x3F4CCCCD
	MOV WORD PTR SS:[ESP+var_10+0x4C],BX
	MOV DWORD PTR [ESP+var_C+0x4C],0x3E4CCCCD
	MOV DWORD PTR [ESP+var_8+0x4C],EBX
	MOV DWORD PTR [ESP+var_4+0x4C],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3F400000
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH EBX
	PUSH 0x3E800000
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m10EC_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x2C
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12F50
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH 0x44
	PUSH 0x3F333333
	PUSH EBX
	PUSH 0x3E800000
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH 0x03
	PUSH offset [LEGO1_data.m10E0_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x2D
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12F88
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3E428F5C
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH EBX
	PUSH 0x3F400000
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m10D8_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x2A
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12FC0
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3ECCCCCD
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x4568]
	PUSH EBX
	PUSH 0x3F2147AE
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m1104_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x30
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x12FF8
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3E428F5C
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x4568]
	PUSH EBX
	PUSH 0x3F400000
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m10D8_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x31
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x13030
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3EBD70A4
	PUSH 0x01
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x4564]
	LEA ECX,DWORD PTR [ESP+var_38+0x58]
	PUSH 0x3F23D70A
	PUSH EBX
	PUSH offset [LEGO1_data.m10CC_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x32
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x13068
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3F000000
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH EBP
	PUSH 0x3F000000
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBX
	PUSH offset [LEGO1_data.m10C0_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x33
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x130A0
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3F000000
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH EBX
	PUSH 0x3F000000
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m10B4_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x34
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x130D8
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3ECCCCCD
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH 0x04
	PUSH 0x3E4CCCCD
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBX
	PUSH offset [LEGO1_data.m10AC_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x36
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x13110
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	PUSH -0x01
	PUSH EBX
	PUSH 0x3E99999A
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x453C]
	PUSH 0x01
	PUSH 0x3F4CCCCD
	LEA ECX,DWORD PTR [ESP+var_38+0x5C]
	PUSH EBP
	PUSH offset [LEGO1_data.m10A0_str]
	PUSH EBX
	PUSH EAX
	PUSH 0x37
	CALL_LONG(offset [LEGO1_text.m1A1B0_sub_1001B1B0])
	PUSH EAX
	MOV ECX, offset LEGO1_data + 0x13148
	CALL_LONG(offset [LEGO1_text.m1A230_sub_1001B230])
	POP EBP
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x38
	RET
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001B1B0(DWORD arg1, DWORD arg2, DWORD arg3, DWORD arg4, DWORD arg5, DWORD arg6, DWORD arg7, DWORD arg8, DWORD arg9, DWORD arg10)
{
	enum{
		arg1 = 0x4,
		arg2 = 0x8,
		arg3 = 0xC,
		arg4 = 0x10,
		arg5 = 0x14,
		arg6 = 0x18,
		arg7 = 0x1C,
		arg8 = 0x20,
		arg9 = 0x24,
		arg10 = 0x28,
	};

__asm{
	PUSH ESI
	MOV EDX, ECX
	MOV EAX,DWORD PTR [ESP+arg1+0x4]
	PUSH EDI
	MOV ECX,DWORD PTR [ESP+arg2+0x8]
	MOV EDI,DWORD PTR [ESP+arg4+0x8]
	MOV DWORD PTR [EDX],EAX
	MOV DWORD PTR [EDX+0x04],ECX
	MOV EAX,DWORD PTR [ESP+arg3+0x8]
	MOV ECX, 0xFFFFFFFF
	MOV DWORD PTR [EDX+0x08],EAX
	SUB EAX, EAX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EAX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [EDX+0x0C]
	REP MOVSD
	MOV ECX, EAX
	AND ECX, 0x03
	REP MOVSB
	MOV CX,WORD PTR SS:[ESP+arg5+0x8]
	MOV EAX,DWORD PTR [ESP+arg6+0x8]
	MOV WORD PTR DS:[EDX+0x20],CX
	MOV DWORD PTR [EDX+0x24],EAX
	MOV CX,WORD PTR SS:[ESP+arg7+0x8]
	MOV EAX,DWORD PTR [ESP+arg8+0x8]
	MOV WORD PTR DS:[EDX+0x28],CX
	MOV DWORD PTR [EDX+0x2C],EAX
	MOV ECX,DWORD PTR [ESP+arg9+0x8]
	MOV EAX,DWORD PTR [ESP+arg10+0x8]
	POP EDI
	MOV DWORD PTR [EDX+0x30],ECX
	POP ESI
	MOV DWORD PTR [EDX+0x34],EAX
	MOV EAX, EDX
	RETN 0x0028
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001B230(DWORD arg1)
{
	enum{
		arg1 = 0x4,
	};

__asm{
	PUSH EBX
	MOV EDX, ECX
	MOV EBX,DWORD PTR [ESP+arg1+0x4]
	PUSH ESI
	PUSH EDI
	MOV EAX,DWORD PTR [EBX]
	LEA EDI,DWORD PTR [EBX+0x0C]
	MOV DWORD PTR [EDX],EAX
	MOV ECX,DWORD PTR [EBX+0x04]
	MOV DWORD PTR [EDX+0x04],ECX
	MOV ECX, 0xFFFFFFFF
	MOV EAX,DWORD PTR [EBX+0x08]
	MOV DWORD PTR [EDX+0x08],EAX
	SUB EAX, EAX
	REPNE SCAS
	NOT ECX
	SUB EDI, ECX
	MOV EAX, ECX
	SHR ECX, 0x02
	MOV ESI, EDI
	LEA EDI,DWORD PTR [EDX+0x0C]
	REP MOVSD
	MOV ECX, EAX
	AND ECX, 0x03
	REP MOVSB
	MOV CX,WORD PTR DS:[EBX+0x20]
	MOV WORD PTR DS:[EDX+0x20],CX
	MOV EAX,DWORD PTR [EBX+0x24]
	MOV DWORD PTR [EDX+0x24],EAX
	MOV CX,WORD PTR DS:[EBX+0x28]
	MOV WORD PTR DS:[EDX+0x28],CX
	MOV EAX,DWORD PTR [EBX+0x2C]
	POP EDI
	POP ESI
	MOV DWORD PTR [EDX+0x2C],EAX
	MOV ECX,DWORD PTR [EBX+0x30]
	MOV EAX, EDX
	MOV DWORD PTR [EDX+0x30],ECX
	MOV EBX,DWORD PTR [EBX+0x34]
	MOV DWORD PTR [EDX+0x34],EBX
	POP EBX
	RETN 0x0004
}
}

__declspec(naked) DWORD LEGO1_sub_1001B52A()
{
	enum{
		arg1217219 = 0x4A4B0C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217219-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1001B53C()
{
	enum{
		arg1217182 = 0x4A4A78,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217182-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1001B660()
{
	enum{
		var_5C = -0x5C,
		var_58 = -0x58,
		var_54 = -0x54,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
	};

__asm{
	SUB ESP, 0x5C
	LEA EAX,DWORD PTR [ESP+var_40+0x5C]
	PUSH EBX
	PUSH ESI
	MOV EBX, ECX
	MOV DWORD PTR [ESP+var_44+0x64],EAX
	PUSH EDI
	MOV ECX,DWORD PTR [EBX+0x54]
	MOV EDI, EAX
	MOV DWORD PTR [ESP+var_48+0x68],offset [LEGO1_rdata.m300_ptr]
	MOV ESI,DWORD PTR [ECX+0x14]
	MOV ECX, 0x00000010
	REP MOVSD
	MOV EAX,DWORD PTR [ESP+var_44+0x68]
	MOV ESI,DWORD PTR [ESP+var_44+0x68]
	ADD ESI, 0x10
	MOV ECX,DWORD PTR [ESP+var_44+0x68]
	ADD ECX, 0x20
	MOV DWORD PTR [ESP+var_50+0x68],EAX
	MOV EAX, offset [LEGO1_rdata.m518_ptr]
	MOV DWORD PTR [ESP+var_58+0x68],ECX
	LEA ECX,DWORD PTR [ESP+var_5C+0x68]
	MOV DWORD PTR [ESP+var_54+0x68],EAX
	MOV DWORD PTR [ESP+var_4C+0x68],0xBF800000
	MOV DWORD PTR [ESP+var_5C+0x68],EAX
	LEA EAX,DWORD PTR [ESP+var_4C+0x68]
	PUSH EAX
	CALL_LONG(DWORD PTR [offset LEGO1_rdata.m574_ptr])
	MOV ECX,DWORD PTR [ESP+var_5C+0x6C]
	PUSH ECX
	PUSH ESI
	LEA ECX,DWORD PTR [ESP+var_50+0x6C]
	MOV ESI,DWORD PTR [ESP+var_50+0x6C]
	CALL_LONG(DWORD PTR [ESI+0x74])
	LEA ECX,DWORD PTR [ESP+var_4C+0x6C]
	PUSH ECX
	MOV ECX,DWORD PTR [EBX+0x54]
	CALL_LONG(offset [LEGO1_text.mA48F0_sub_100A58F0])
	MOV ECX,DWORD PTR [EBX+0x54]
	MOV EAX,DWORD PTR [ECX]
	CALL_LONG(DWORD PTR [EAX+0x14])
	POP EDI
	POP ESI
	POP EBX
	ADD ESP, 0x5C
	RET
}
}

__declspec(naked) DWORD LEGO1_sub_1001B740(DWORD arg1, DWORD arg2, DWORD arg3, DWORD arg4)
{
	enum{
		var_18 = -0x18,
		var_10 = -0x10,
		arg1 = 0x4,
		arg2 = 0x8,
		arg4 = 0x10,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m1AA70_proc_1001BA70]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x24
	MOV BYTE PTR [EBP+var_10+0x3],0x00
	PUSH EBX
	MOV DWORD PTR [EBP+var_18+0x4],ECX
	PUSH ESI
	MOV CL,BYTE PTR [EBP+arg2+0x4]
	CMP BYTE PTR [EBP+arg4+0x4],0x00
	PUSH EDI
	JZ loc_1001B777
	CMP CL, 0x01
	SBB AL, AL
	NEG AL
	JMP loc_1001B779
loc_1001B777:
	MOV AL, CL
loc_1001B779:
	MOV EDI,DWORD PTR [EBP+arg1+0x4]
	CMP BYTE PTR [EDI+0x58],0x01
	SBB ESI, ESI
	AND ESI, 0x0D000000
	MOV EBX,DWORD PTR [EBP+var_18+0x4]
	ADD ESI, 0x01000000
	CMP AL, 0x01
	SBB EDX, EDX
	AND EDX, 0x10000000
	ADD EDX, 0x10000000
	OR ESI, EDX
	MOV EDX,DWORD PTR [EBX+0x08]
	AND EDX, ESI
	TEST EDX,0x70000000
	JZ_LONG(offset [LEGO1_text.m1A7F3_loc_1001B7F3])
	TEST EDX,0x0F000000
	JZ_LONG(offset [LEGO1_text.m1A7F3_loc_1001B7F3])
	MOV BYTE PTR [EBP+var_10+0x3],0x01
	MOV ESI,DWORD PTR [EBX+0x04]
	MOVSX EBX,BYTE PTR [ESI+0x02]
	SUB EBX, 0x43
	CMP EBX, 0x14
	JA_LONG(offset [LEGO1_text.m1A7F3_loc_1001B7F3])
	XOR EDX, EDX
	MOV DL,BYTE PTR [offset LEGO1_text.m1AAA4_proc_1001BAA4+EBX]
	JMP_LONG(DWORD PTR [offset LEGO1_text.m1AA84_proc_1001BA84+EDX*4])
}
}

__declspec(naked) DWORD LEGO1_sub_1001B8B7()
{
	enum{
		arg1217216 = 0x4A4B00,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217216-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1ABF0_loc_1001BBF0])
}
}

__declspec(naked) DWORD LEGO1_sub_1001B9D8()
{
	enum{
		arg1217212 = 0x4A4AF0,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217212-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1ABF0_loc_1001BBF0])
}
}

__declspec(naked) DWORD LEGO1_sub_1001BA7A()
{
	enum{
		arg1217216 = 0x4A4B00,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217216-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.m1ABF0_loc_1001BBF0])
	MOV EDI, EDI
	JMP_LONG(offset [LEGO1_text.m1AA84_proc_1001BA84])
}
}

__declspec(naked) DWORD LEGO1_sub_1001BBD9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF4A0_loc_100104A0])
}
}

__declspec(naked) DWORD LEGO1_sub_1001BC31()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	MOV ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mF4A0_loc_100104A0])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001BC40(DWORD arg1, DWORD arg2, DWORD arg3)
{
	enum{
		var_A8 = -0xA8,
		var_8C = -0x8C,
		var_88 = -0x88,
		var_84 = -0x84,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		arg2 = 0x8,
		arg3 = 0xC,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m1ACF1_proc_1001BCF1]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x00000098
	PUSH ESI
	MOV ESI, ECX
	LEA ECX,DWORD PTR [EBP+var_A8+0x4]
	CALL_LONG(offset [LEGO1_text.mAC810___0MxDSAction__QAE_XZ])
	MOV DWORD PTR [EBP+var_8+0x4],0x00000000
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	MOV EAX,DWORD PTR [EBP+arg2+0x4]
	LEA ECX,DWORD PTR [EBP+var_88+0x4]
	MOV DWORD PTR [EBP+var_8C+0x4],EAX
	MOV EAX,DWORD PTR [ESI+0x10]
	MOV DWORD PTR [EBP+var_14+0x4],EAX
	LEA EAX,DWORD PTR [EBP+var_14+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	MOV BYTE PTR [EBP+var_8+0x4],0x00
	CALL_LONG(offset [LEGO1_text.m1ACE9_sub_1001BCE9])
	CMP BYTE PTR [EBP+arg3+0x4],0x00
	JZ loc_1001BCB8
	MOV WORD PTR SS:[EBP+var_84+0x4],0xFFFF
	LEA EAX,DWORD PTR [EBP+var_A8+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABF50__Start__YAJPAVMxDSAction___Z])
	JMP loc_1001BCCA
loc_1001BCB8:
	MOV WORD PTR SS:[EBP+var_84+0x4],0xFFFE
	LEA EAX,DWORD PTR [EBP+var_A8+0x4]
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.mABF70_sub_100ACF70])
loc_1001BCCA:
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	ADD ESP, 0x04
	CALL_LONG(offset [LEGO1_text.m1ACFB_sub_1001BCFB])
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	POP ESI
	MOV DWORD PTR FS:[0x00000000], EAX
	MOV ESP, EBP
	POP EBP
	RETN 0x000C
}
}

__declspec(naked) DWORD LEGO1_sub_1001BCE9()
{
	enum{
		arg1217220 = 0x4A4B10,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217220-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mABFD0___1MxAtomId__QAE_XZ])
}
}

__declspec(naked) DWORD LEGO1_sub_1001BCFB()
{
	enum{
		arg1217183 = 0x4A4A7C,
	};

__asm{
	LEA ECX,DWORD PTR [EBP+arg1217183-0x4A4B20]
	JMP_LONG(offset [LEGO1_text.mACA80___1MxDSAction__UAE_XZ])
}
}

__declspec(naked) DWORD __stdcall LEGO1_sub_1001BD10(DWORD arg1, DWORD arg2)
{
	enum{
		var_140 = -0x140,
		var_124 = -0x124,
		var_120 = -0x120,
		var_11C = -0x11C,
		var_B0 = -0xB0,
		var_AC = -0xAC,
		var_A8 = -0xA8,
		var_A4 = -0xA4,
		var_A0 = -0xA0,
		var_9C = -0x9C,
		var_98 = -0x98,
		var_94 = -0x94,
		var_90 = -0x90,
		var_8C = -0x8C,
		var_88 = -0x88,
		var_84 = -0x84,
		var_80 = -0x80,
		var_7C = -0x7C,
		var_78 = -0x78,
		var_74 = -0x74,
		var_70 = -0x70,
		var_6C = -0x6C,
		var_68 = -0x68,
		var_64 = -0x64,
		var_60 = -0x60,
		var_5C = -0x5C,
		var_58 = -0x58,
		var_54 = -0x54,
		var_50 = -0x50,
		var_4C = -0x4C,
		var_48 = -0x48,
		var_44 = -0x44,
		var_40 = -0x40,
		var_3C = -0x3C,
		var_38 = -0x38,
		var_34 = -0x34,
		var_30 = -0x30,
		var_2C = -0x2C,
		var_28 = -0x28,
		var_24 = -0x24,
		var_20 = -0x20,
		var_1C = -0x1C,
		var_18 = -0x18,
		var_14 = -0x14,
		var_10 = -0x10,
		var_8 = -0x8,
		arg1 = 0x4,
		arg2 = 0x8,
	};

__asm{
	MOV EAX, DWORD PTR FS:[0x00000000]
	PUSH EBP
	MOV EBP, ESP
	PUSH -0x01
	PUSH offset [LEGO1_text.m1AF68_proc_1001BF68]
	PUSH EAX
	MOV DWORD PTR FS:[0x00000000],ESP
	SUB ESP, 0x00000130
	PUSH EBX
	PUSH ESI
	PUSH EDI
	PUSH offset [LEGO1_data.m2BC_str]
	CALL_LONG(offset [LEGO1_text.m14760__GameState__YAPAVLegoGameState__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m3ABB0_sub_1003BBB0])
	TEST EAX, EAX
	JZ loc_1001BD50
	CMP DWORD PTR [EAX+0x0C],0x00
	JNZ FAR loc_1001BF4E
loc_1001BD50:
	MOV ECX, 0x00000005
	MOV EAX, 0x00000006
	MOV DWORD PTR [EBP+var_AC+0x4],ECX
	MOV DWORD PTR [EBP+var_A8+0x4],EAX
	MOV EDX, 0x0000000A
	MOV ESI, 0x0000000B
	MOV DWORD PTR [EBP+var_98+0x4],EDX
	MOV DWORD PTR [EBP+var_94+0x4],ESI
	MOV DWORD PTR [EBP+var_A4+0x4],0x00000007
	MOV DWORD PTR [EBP+var_A0+0x4],0x00000008
	MOV DWORD PTR [EBP+var_9C+0x4],0x00000009
	MOV DWORD PTR [EBP+var_8C+0x4],0x0000000D
	MOV DWORD PTR [EBP+var_88+0x4],0x0000000E
	MOV DWORD PTR [EBP+var_84+0x4],0x0000000F
	MOV WORD PTR SS:[EBP+var_74+0x4],SI
	MOV EDI, 0x0000000C
	MOV WORD PTR SS:[EBP+var_70+0x2],DX
	MOV DWORD PTR [EBP+var_90+0x4],EDI
	MOV DWORD PTR [EBP+var_80+0x4],0x00000010
	MOV DWORD PTR [EBP+var_7C+0x4],0x00000011
	MOV DWORD PTR [EBP+var_78+0x4],0x00000012
	MOV WORD PTR SS:[EBP+var_6C+0x4],0x0003
	MOV WORD PTR SS:[EBP+var_68+0x2],0x0001
	MOV WORD PTR SS:[EBP+var_64+0x2],0x0001
	MOV WORD PTR SS:[EBP+var_64+0x4],0x0001
	MOV WORD PTR SS:[EBP+var_60+0x4],0x0001
	MOV WORD PTR SS:[EBP+var_5C+0x4],0x000D
	MOV WORD PTR SS:[EBP+var_70+0x4],AX
	MOV EBX, 0x00000002
	MOV WORD PTR SS:[EBP+var_6C+0x2],DX
	MOV EAX, 0x00000004
	MOV WORD PTR SS:[EBP+var_58+0x4],0x000D
	MOV WORD PTR SS:[EBP+var_68+0x4],AX
	MOV WORD PTR SS:[EBP+var_54+0x4],0x000D
	MOV WORD PTR SS:[EBP+var_60+0x2],AX
	MOV WORD PTR SS:[EBP+var_5C+0x2],AX
	MOV WORD PTR SS:[EBP+var_58+0x2],BX
	MOV WORD PTR SS:[EBP+var_54+0x2],BX
	MOV WORD PTR SS:[EBP+var_48+0x2],0x0009
	MOV WORD PTR SS:[EBP+var_48+0x4],0x0009
	MOV WORD PTR SS:[EBP+var_44+0x2],0x0007
	MOV WORD PTR SS:[EBP+var_44+0x4],0x0008
	MOV WORD PTR SS:[EBP+var_40+0x2],0x0007
	MOV WORD PTR SS:[EBP+var_40+0x4],0x0008
	MOV WORD PTR SS:[EBP+var_50+0x2],BX
	MOV WORD PTR SS:[EBP+var_50+0x4],AX
	MOV WORD PTR SS:[EBP+var_4C+0x2],DX
	MOV WORD PTR SS:[EBP+var_4C+0x4],SI
	MOV WORD PTR SS:[EBP+var_3C+0x2],CX
	MOV WORD PTR SS:[EBP+var_3C+0x4],CX
	MOV WORD PTR SS:[EBP+var_38+0x2],BX
	MOV WORD PTR SS:[EBP+var_38+0x4],BX
	MOV WORD PTR SS:[EBP+var_34+0x2],AX
	MOV WORD PTR SS:[EBP+var_34+0x4],AX
	MOV WORD PTR SS:[EBP+var_30+0x2],BX
	MOV WORD PTR SS:[EBP+var_30+0x4],AX
	MOV WORD PTR SS:[EBP+var_2C+0x2],CX
	MOV WORD PTR SS:[EBP+var_2C+0x4],SI
	MOV WORD PTR SS:[EBP+var_28+0x2],AX
	MOV WORD PTR SS:[EBP+var_28+0x4],DI
	MOV WORD PTR SS:[EBP+var_24+0x2],DX
	MOV WORD PTR SS:[EBP+var_1C+0x4],0x000E
	MOV WORD PTR SS:[EBP+var_24+0x4],DX
	MOV WORD PTR SS:[EBP+var_18+0x4],0x000E
	MOV WORD PTR SS:[EBP+var_20+0x2],DI
	LEA ECX,DWORD PTR [EBP+var_140+0x4]
	MOV WORD PTR SS:[EBP+var_20+0x4],DX
	MOV WORD PTR SS:[EBP+var_1C+0x2],DI
	MOV WORD PTR SS:[EBP+var_18+0x2],BX
	MOV WORD PTR SS:[EBP+var_14+0x2],BX
	CALL_LONG(offset [LEGO1_text.mAC810___0MxDSAction__QAE_XZ])
	XOR EBX, EBX
	MOV DWORD PTR [EBP+var_8+0x4],EBX
	MOV EAX, DWORD PTR [offset LEGO1_data + 0x456C]
	MOV BYTE PTR [EBP+var_8+0x4],0x01
	MOV ECX,DWORD PTR [EAX]
	MOV DWORD PTR [EBP+var_14+0x4],ECX
	LEA ECX,DWORD PTR [EBP+var_14+0x4]
	PUSH ECX
	LEA ECX,DWORD PTR [EBP+var_120+0x4]
	CALL_LONG(offset [LEGO1_text.mAC1C0___4MxAtomId__QAEAAV0_ABV0__Z])
	MOV BYTE PTR [EBP+var_8+0x4],BL
	CALL_LONG(offset [LEGO1_text.m1AF60_sub_1001BF60])
	MOV WORD PTR SS:[EBP+var_11C+0x4],0xFFFF
	MOV EAX,DWORD PTR [EBP+arg2+0x4]
	CMP EAX, 0x18
	JA loc_1001BF22
	CMP BYTE PTR [EBP+arg1+0x4],0x01
	SBB ECX, ECX
	NEG ECX
	LEA EDX,DWORD PTR [EAX*2+ECX]
	MOVSX EAX,WORD PTR [EBP+var_78+0x4]
	MOV ECX,DWORD PTR [EAX*4+EBP+var_B0+0x4]
	MOV DWORD PTR [EBP+var_124+0x4],ECX
loc_1001BF22:
	CMP DWORD PTR [EBP+var_124+0x4],-0x01
	JZ loc_1001BF42
	PUSH 0x04
	LEA EAX,DWORD PTR [EBP+var_140+0x4]
	PUSH 0x05
	PUSH EAX
	CALL_LONG(offset [LEGO1_text.m14730__BackgroundAudioManager__YAPAVMxBackgroundAudioManager__XZ])
	MOV ECX, EAX
	CALL_LONG(offset [LEGO1_text.m7E2F0_sub_1007F2F0])
loc_1001BF42:
	MOV DWORD PTR [EBP+var_8+0x4],0xFFFFFFFF
	CALL_LONG(offset [LEGO1_text.m1AF72_sub_1001BF72])
loc_1001BF4E:
	MOV EAX,DWORD PTR [EBP+var_10+0x4]
	POP EDI
	MOV DWORD PTR FS:[0x00000000], EAX
	POP ESI
	POP EBX
	MOV ESP, EBP
	POP EBP
	RETN 0x0008
}
}

