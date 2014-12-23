#ifndef _IAP
#define _IAP
#include "LPC1100.h"

// use sector7 as memory
// program size should be under 28KB

// LPC1114 dip 28 
// Flash：32KB
// RAM：4KB
// num of sectors 8 (num0-7)
// sector size 4k

#define FLASH_SECTOR_7 0x00007000
#define FLASH_SECTOR_SIZE_0_TO_15 (4 * 1024)

// sector 7, size should be 256 || 512 || 1024 || 4096
int saveFlash(char* src, int size);
#define SAVED_FLASH ((char*)FLASH_SECTOR_7)

int readBootCodeVersion(void);
int readPartID(void);
int readUID(void);

#endif

