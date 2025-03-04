/*
	Filename    : gameconfig_ssbb.bin
	Date created: Sun May 11 01:28:29 2014

	This adds room for 25,179 lines of gecko codes
	(0x80597800 - 0x80566528) / 8 = 25,179

	Data is equivalent to:
		RSBE??:
		codeliststart = 80566528
		codelistend = 80597800
		hooktype = 7
		poke(800042B8, 60000000)
		pokeifequal(803E9930, 4BFECA1D, 803E9930, 60000000)
		pokeifequal(803E99A8, 4BFECA1D, 803E99A8, 60000000)
		pokeifequal(803E9D5C, 4BFECA1D, 803E9D5C, 60000000)
*/

#define gameconfig_ssbb_size 0x100

const unsigned char gameconfig_ssbb[] = {

	0x52, 0x53, 0x42, 0x45,     0x3F, 0x3F, 0x3A, 0x0D,     0x0A, 0x63, 0x6F, 0x64,     0x65, 0x6C, 0x69, 0x73,
	0x74, 0x73, 0x74, 0x61,     0x72, 0x74, 0x20, 0x3D,     0x20, 0x38, 0x30, 0x35,     0x36, 0x36, 0x35, 0x32,
	0x38, 0x0D, 0x0A, 0x63,     0x6F, 0x64, 0x65, 0x6C,     0x69, 0x73, 0x74, 0x65,     0x6E, 0x64, 0x20, 0x3D,
	0x20, 0x38, 0x30, 0x35,     0x39, 0x37, 0x38, 0x30,     0x30, 0x0D, 0x0A, 0x68,     0x6F, 0x6F, 0x6B, 0x74,
	0x79, 0x70, 0x65, 0x20,     0x3D, 0x20, 0x37, 0x0D,     0x0A, 0x70, 0x6F, 0x6B,     0x65, 0x28, 0x38, 0x30,
	0x30, 0x30, 0x34, 0x32,     0x42, 0x38, 0x2C, 0x20,     0x36, 0x30, 0x30, 0x30,     0x30, 0x30, 0x30, 0x30,
	0x29, 0x0D, 0x0A, 0x70,     0x6F, 0x6B, 0x65, 0x69,     0x66, 0x65, 0x71, 0x75,     0x61, 0x6C, 0x28, 0x38,
	0x30, 0x33, 0x45, 0x39,     0x39, 0x33, 0x30, 0x2C,     0x20, 0x34, 0x42, 0x46,     0x45, 0x43, 0x41, 0x31,
	0x44, 0x2C, 0x20, 0x38,     0x30, 0x33, 0x45, 0x39,     0x39, 0x33, 0x30, 0x2C,     0x20, 0x36, 0x30, 0x30,
	0x30, 0x30, 0x30, 0x30,     0x30, 0x29, 0x0D, 0x0A,     0x70, 0x6F, 0x6B, 0x65,     0x69, 0x66, 0x65, 0x71,
	0x75, 0x61, 0x6C, 0x28,     0x38, 0x30, 0x33, 0x45,     0x39, 0x39, 0x41, 0x38,     0x2C, 0x20, 0x34, 0x42,
	0x46, 0x45, 0x43, 0x41,     0x31, 0x44, 0x2C, 0x20,     0x38, 0x30, 0x33, 0x45,     0x39, 0x39, 0x41, 0x38,
	0x2C, 0x20, 0x36, 0x30,     0x30, 0x30, 0x30, 0x30,     0x30, 0x30, 0x29, 0x0D,     0x0A, 0x70, 0x6F, 0x6B,
	0x65, 0x69, 0x66, 0x65,     0x71, 0x75, 0x61, 0x6C,     0x28, 0x38, 0x30, 0x33,     0x45, 0x39, 0x44, 0x35,
	0x43, 0x2C, 0x20, 0x34,     0x42, 0x46, 0x45, 0x43,     0x41, 0x31, 0x44, 0x2C,     0x20, 0x38, 0x30, 0x33,
	0x45, 0x39, 0x44, 0x35,     0x43, 0x2C, 0x20, 0x36,     0x30, 0x30, 0x30, 0x30,     0x30, 0x30, 0x30, 0x29
	
};
