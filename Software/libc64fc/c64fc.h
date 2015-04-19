#ifndef C64FC_H
#define C64FC_H 1

#define C64FC_16K		0x16
#define C64FC_8K		0x08
#define C64FC_GETSIZE   0x20

#define C64FC_RESET		0xf0
#define C64FC_DATA		0xcc
#define C64FC_READDATA  0xcd
#define C64FC_SETADDR		0x64
#define C64FC_SETMODE   0x04



#define  C64FC_BOOTLOADER 0xFE

enum C64_MODE {
	C64_MODE_DISABLED,
	C64_MODE_8K,
	C64_MODE_16K,
	C64_MODE_ULTIMAX
};

#endif
