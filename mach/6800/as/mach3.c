#define RCSID3 "$Header$"

/*
 * Motorola 6800 keywords
 */
0,	X,		0,		"x",
0,	BRANCH,		0x20,		"bra",
0,	BRANCH,		0x22,		"bhi",
0,	BRANCH,		0x23,		"bls",
0,	BRANCH,		0x24,		"bhs",	/* bcc */
0,	BRANCH,		0x24,		"bcc",
0,	BRANCH,		0x25,		"blo",	/* bcs */
0,	BRANCH,		0x25,		"bcs",
0,	BRANCH,		0x26,		"bne",
0,	BRANCH,		0x27,		"beq",
0,	BRANCH,		0x28,		"bvc",
0,	BRANCH,		0x29,		"bvs",
0,	BRANCH,		0x2A,		"bpl",
0,	BRANCH,		0x2B,		"bmi",
0,	BRANCH,		0x2C,		"bge",
0,	BRANCH,		0x2D,		"blt",
0,	BRANCH,		0x2E,		"bgt",
0,	BRANCH,		0x2F,		"ble",
0,	BRANCH,		0x8D,		"bsr",
0,	XOP,		0xA0,		"suba",
0,	XOP,		0xA1,		"cmpa",
0,	XOP,		0xA2,		"sbca",
0,	XOP,		0xA4,		"anda",
0,	XOP,		0xA5,		"bita",
0,	XOP,		0xA6,		"ldaa",
0,	XOP,		0xA8,		"eora",
0,	XOP,		0xA9,		"adca",
0,	XOP,		0xAA,		"oraa",
0,	XOP,		0xAB,		"adda",
0,	XOP,		0xE0,		"subb",
0,	XOP,		0xE1,		"cmpb",
0,	XOP,		0xE2,		"sbcb",
0,	XOP,		0xE4,		"andb",
0,	XOP,		0xE5,		"bitb",
0,	XOP,		0xE6,		"ldab",
0,	XOP,		0xE8,		"eorb",
0,	XOP,		0xE9,		"adcb",
0,	XOP,		0xEA,		"orab",
0,	XOP,		0xEB,		"addb",
0,	AOP,		0x60,		"neg",
0,	NOARG,		0x40,		"nega",
0,	NOARG,		0x50,		"negb",
0,	AOP,		0x63,		"com",
0,	NOARG,		0x43,		"coma",
0,	NOARG,		0x53,		"comb",
0,	AOP,		0x64,		"lsr",
0,	NOARG,		0x44,		"lsra",
0,	NOARG,		0x54,		"lsrb",
0,	AOP,		0x66,		"ror",
0,	NOARG,		0x46,		"rora",
0,	NOARG,		0x56,		"rorb",
0,	AOP,		0x67,		"asr",
0,	NOARG,		0x47,		"asra",
0,	NOARG,		0x57,		"asrb",
0,	AOP,		0x68,		"asl",
0,	NOARG,		0x48,		"asla",
0,	NOARG,		0x58,		"aslb",
0,	AOP,		0x68,		"lsl",
0,	NOARG,		0x48,		"lsla",
0,	NOARG,		0x58,		"lslb",
0,	AOP,		0x69,		"rol",
0,	NOARG,		0x49,		"rola",
0,	NOARG,		0x59,		"rolb",
0,	AOP,		0x6A,		"dec",
0,	NOARG,		0x4A,		"deca",
0,	NOARG,		0x5A,		"decb",
0,	AOP,		0x6C,		"inc",
0,	NOARG,		0x4C,		"inca",
0,	NOARG,		0x5C,		"incb",
0,	AOP,		0x6D,		"tst",
0,	NOARG,		0x4D,		"tsta",
0,	NOARG,		0x5D,		"tstb",
0,	AOP,		0x6F,		"clr",
0,	NOARG,		0x4F,		"clra",
0,	NOARG,		0x5F,		"clrb",
0,	XOP,		0x6E,		"jmp",
0,	XOP,		0xAD,		"jsr",
0,	XOP,		0xAC,		"cpx",
0,	XOP,		0xAE,		"ldx",
0,	XOP,		0xEE,		"lds",
0,	XOP,		0xA7,		"sta",
0,	XOP,		0xE7,		"stb",
0,	XOP,		0xAF,		"stx",
0,	XOP,		0xEF,		"sts",
0,	NOARG,		0x19,		"daa",
0,	NOARG,		0x01,		"nop",
0,	NOARG,		0x3B,		"rti",
0,	NOARG,		0x39,		"rts",
0,	NOARG,		0x3F,		"swi",
0,	NOARG,		0x0C,		"clc",
0,	NOARG,		0x0D,		"sec",
0,	NOARG,		0x0E,		"cli",
0,	NOARG,		0x0F,		"sei",
0,	NOARG,		0x0A,		"clv",
0,	NOARG,		0x0B,		"sev",
0,	NOARG,		0x3E,		"wai",
0,	NOARG,		0x06,		"tap",
0,	NOARG,		0x07,		"tpa",
0,	NOARG,		0x1B,		"aba",
0,	NOARG,		0x11,		"cba",
0,	NOARG,		0x10,		"sba",
0,	NOARG,		0x16,		"tab",
0,	NOARG,		0x17,		"tba",
0,	NOARG,		0x09,		"dex",
0,	NOARG,		0x08,		"inx",
0,	NOARG,		0x34,		"des",
0,	NOARG,		0x31,		"ins",
0,	NOARG,		0x35,		"txs",
0,	NOARG,		0x30,		"tsx",
