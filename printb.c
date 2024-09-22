#include "printb.h"
#include <stdio.h>

void printb(unsigned long v) {
    unsigned long i, s = 1UL<<63; // s = only most significant bit at 1
    for (i = s; i; i>>=1) printf("%d", v & i || 0 );
	printf("\n");
}

