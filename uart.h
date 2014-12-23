#ifndef _UART0
#define _UART0
#include "LPC1100.h"

//#define BPS 		230400 // original
//#define BPS 		9600
#define BPS 		115200
//#define BPS 		57600

void uart0_init (void);
int uart0_test (void);
void uart0_putc (uint8_t);
uint8_t uart0_getc (void);

#endif

