#ifndef PROBE_LIST_355_H__
#define PROBE_LIST_355_H__

///> probe list G30Plus
#define PROBE_INFO_SIZE  128
#ifdef EMP_355
#ifdef VET
enum EProbeList355 {P35C50L, P35C20I, P70L40J, P75L40J, P70L60J, P90L40J_1, P65C10L, P65C15E_80, P65C15E_128, P30P16B, P10L25K_1, P65C10I, P55L60G};
#else
enum EProbeList355 {P35C50L, P35C20I, P70L40J, P75L40J, P70L60J, P90L40J_1, P65C10L, P65C15E_80, P65C15E_128, P30P16B, P10L25K_1, P65C10I};
#endif
unsigned char Probe35C50L[128] = { //35C50L convex
    // black-white
    '3',	'5',	'C',	'5',	'0',	'L',	'0',	'0',	'0',	'0',
    'C',	1,		28,		2,		56,		72,		0,		50,		0,		0,
    0,		40,		2,		50,		0,		70,		2,		20,		1,		0,
    1,		80,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0x5a,

    //color
    '3',	'5',	'C',	'5',	'0',	'L',	0,		0,		0,		0,
    'C',	1,		28,		2,		56,		72,		0,		50,		0,		0,
    0,		40,		1,		0,		3,		20,		0,		54,		0,		66,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'A',		'P',		'X',		0x5a,
};

unsigned char Probe65C10L[128] = { //65C10L //TV
    // black-white
    '6',   '5',    'C',    '1',    '0',    'L',    '0',	'0',	'0',	'0',
    'C',    1,		28,		2,		56,		150,	0,		10,		0,		0,
    1,		0,		1,		20,     1,		30,     1,      0,		1,     50,
    0,     90,     0,      0,		0,      0,		0,      0,		0,		0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '6',	'5',	'C',	'1',	'0',	'L',	0,		0,		0,		0,
    't',	1,		28,		2,		56,		150,	0,		10,		0,		0,
    1,		0,		1,		50,		1,		20,		0,		98,		1,		16,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'A',		'P',		'X',		0x5a,
};

unsigned char Probe70L40J[128] = { //70L40J
    // black-white //4000
    '7',   '0',    'L',    '4',    '0',    'J',		'0',	'0',	'0',	'0',
    'L',    1,		28,		2,		56,		38,		0,		0,		0,		0,
    1,		0,		1,		20,		1,		30,		1,		0,		1,		50,
    0,		90,		1,		70,		0,		80,		1,		8,		0,		80,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '7',	'0',	'L',	'4',	'0',	'J',	0,		0,		0,		0,
    'l',	1,		28,		2,		56,		38,		0,		0,		0,		 0,
    1,		0,		1,		80,		1,		20,		1,		18,		1,		44,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'A',		'P',		'X',		0x5a,
};

unsigned char Probe75L40J[128] = { //75L40J
    // black-white //4000
    '7',   '0',    'L',    '4',    '0',    'J',		'0',	'0',	'0',	'0',
    'L',    1,		28,		2,		56,		38,		0,		0,		0,		0,
    1,		0,		1,		20,		1,		30,		1,		0,		1,		50,
    0,		90,		1,		70,		0,		80,		1,		8,		0,		80,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '7',	'5',	'L',	'4',	'0',	'J',	0,		0,		0,		0,
    'l',	1,		28,		2,		56,		38,		0,		0,		0,		 0,
    1,		0,		1,		80,		1,		20,		1,		18,		1,		44,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'A',		'P',		'X',		0x5a,
};

unsigned char Probe70L60J[128] = { //70L60J
    // black-white
    '7',   '0',    'L',    '6',    '0',    'J',		'0',	'0',	'0',	'0',
    'L',    1,		28,		2,		56,		60,		0,		0,		0,		0,
    1,		0,		1,		20,		1,		30,		1,		0,		1,		50,
    0,		90,		1,		70,		0,		80,		1,		8,		0,		80,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '7',	'0',	'L',	'6',	'0',	'J',	0,		0,		0,		0,
    'l',	1,		28,		2,		56,		60,		0,		0,		0,		 0,
    1,		0,		1,		80,		1,		20,		1,		18,		1,		44,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0x5a,
};

unsigned char Probe90L40J_1[128] = { //90L40J
    // black-white
    '9',   '0',    'L',    '4',    '0',    'J',		'0',	'0',	'0',	'0',
    'L',    1,		28,		2,		56,		40,		0,		0,		0,		0,
    1,		20,		1,		20,		1,		50,		1,		0,		1,		80,
    0,		90,		2,		0,		0,		80,		2,		40,		0,		80,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '9',	'0',	'L',	'4',	'0',	'J',	0,		0,		0,		0,
    'l',	1,		28,		2,		56,		40,		0,		0,		0,		0,
    1,		20,		2,		40,		1,		20,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0x5a,
};

unsigned char Probe35C20I[128] = { //35C20I //��Ƶ΢͹
    // black-white
    '3',   '5',    'C',    '2',    '0',    'I',		'0',	'0',	'0',	'0',
    'C',    0,		96,		1,		92,		90,		0,		20,		0,		0,
    0,		50,		2,		50,		0,		70,		2,		20,		0,		90,
    1,		80,		1,		0,		1,		60,		0,		0,		0,		0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '3',	'5',	'C',	'2',	'0',	'I',	0,		0,		0,		0,
    'N',	0,		96,		1,		92,		90,		0,		20,		0,		 0,
    //0,		50,		1,		0,		3,		0,		0,		76,		0,		86,
    0,		50,		1,		0,		3,		0,		0,		54,		0,		66,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'E',		'M',		'P',		0x5a,
};

unsigned char Probe65C15E_80[128] = { //65C15E  //��Ƶ΢͹   ͣ��
    // black-white
    '6',	'5',	'C',	'1',	'5',	'E',	'0',	'0',	'0',	'0',
    'C',	0,		80,		1,		60,		98,		0,		15,		0,		0,
    1,		0,		1,		0,
    1,		30,		0,		90,
    1,		60,		0,		70,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0x5a,
    //color-65C15D
    '6',	'5',	'C',	'1',	'5',	'E',	0,		0,		0,		0,
    'n',	0,		80,		1,		60,		98,		0,		15,		0,		 0,
    1,		0,		1,		60,		1,		20,		0,		98,		1,		16,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'A',		'P',		'X',		0x5a,
};

unsigned char Probe65C15E_128[128] = { //65C15E  //��Ƶ΢͹
    // black-white
    '6',	'5',	'C',	'1',	'5',	'E',	'0',	'0',	'0',	'0',
    'C',	1,		18,		2,		56,		93,		0,		15,		0,		0,
    1,		0,		1,		0,
    1,		30,		0,		90,
    1,		60,		0,		70,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0,
    0,		0,		0,		0x5a,
    //color-65C15D
    '6',	'5',	'C',	'1',	'5',	'E',	0,		0,		0,		0,
    'n',	1,		28,		2,		56,		93,		0,		15,		0,		 0,
    1,		0,		1,		60,		1,		20,		0,		72,		0,		84,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'J',		'R',		0,		0x5a,
};

unsigned char Probe55L60G[128] = { //55L60G
    // black-white
    '5',   '5',    'L',    '6',    '0',    'G',		0,	0,	0,	0,
    'L',    0,		96,		1,		92,		63,		27,		0,		0,		0,
    1,		0,		1,		20,		1,		30,		1,		2,		1,		50,
    1,		2,		0,		0,		0,		0,		0,		0,		0,		0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,
    //color
    '5',   '5',    'L',    '6',    '0',    'G',		0,	0,	0,	0,
    'L',    0,		96,		1,		92,		63,		27,		0,		0,		0,
    1,		0,		1,		50,		1,		20,		1,		18,		1,		14,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'E',		'M',		'P',		0x5a,
};

unsigned char Probe10L25K_1[PROBE_INFO_SIZE] = { //10L25K
    // black-white
    '1',   '0',    'L',    '2',    '5',    'K',		0,	0,	0,	0,
    'L',    1,		28,		2,		56,		25,		60,		0,		0,		0,
    1,		60,		1,		20,		2,		0,		1,		0,		2,		40,
    0,		90,		0,		0,		0,		0,		0,		0,		0,		0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0,		0,		0,		0,		0,		0,     0,
    0,     0,		0,		0x5a,

    //color
    '1',	'0',	'L',	'2',	'5',	'K',	0,		0,		0,		0,
    'l',	1,		28,		2,		56,		25,		40,		0,		0,		 0,
    1,		60,		2,		40,		1,		20,		1,		50,		1,		80,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'S',		'N',		'R',		0x5a,
};

unsigned char Probe30P16B[PROBE_INFO_SIZE] = { //30P16B
    // black-white
    '3',   '0',    'P',    '1',    '6',    'B',        '0',    '0',    '0',    '0',
    'P',    0,        64,        2,        56,        16,        0,        0,        0,        0,
    0,        40,        2,        50,        0,        50,        2,        50,        0,        56,
    2,        20,        0,        70,        2,        20,        0,        80,        2,        0,
    0,     0,        0,        0,        0,        0,        0,        0,        0,     0,
    0,     0,        0,        0,        0,        0,        0,        0,        0,     0,
    0,     0,        0,        0x5a,

    //color
    '3',    '0',    'P',    '1',    '6',    'B',        0,        0,        0,        0,
    'P',    0,        64,        2,        56,        90,        0,        0,        16,         0,
    0,        40,        0,        80,        2,        50,        0,        48,        0,        56,
    0,        0,        0,        0,        0,        0,        0,        0,        0,        0,
    0,        0,        0,        0,        0,        0,        0,        0,        0,        0,
    0,        0,        0,        0,        0,        0,        0,        0,        0,        0,
    'J',        'R',        0,        0x5a,
};

unsigned char Probe65C10I[PROBE_INFO_SIZE] = { //��������
    '6',	'5',	'C',	'1',	'0',	'I',	'0',	'0',	'0',	'0',
    'C',	0,		96,		1,		92,		150,	0,		10,		0,		0,
    1,		0,		1,		22,		1,		30,		1,		2,		1,		60,
    1,		2,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0x5a,
    '6',	'5',	'C',	'1',	'0',	'I',    0,		0,		0,		0,
    't',	0,		96,		1,		92,		150,	0,		10,		0,		0,
    1,		0,		1,		60,		1,		22,		0,		98,		1,		16,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
    'E',		'M',		'P',		0x5a,
};
#endif
#endif
