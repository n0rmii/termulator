#include <stdint.h>
#include <stdio.h>
#include "trytetype.h"
#include "ternops.h"

void printb(unsigned int v) {
    unsigned int i, s = 1<<((sizeof(v)<<3)-1); // s = only most significant bit at 1
    for (i = s; i; i>>=1) printf("%d", v & i || 0 );
	printf("\n");
}

int main(int argc, char *argv[]){
	printf("%s\n", "C rewrite");

	int32_t a = 41, b = -41;

	tryte_t x = int_to_tryte(a);
	tryte_t y = int_to_tryte(b);
	printb(x);
	printb(y);

	int32_t g = tryte_to_int(x);
	int32_t h = tryte_to_int(y);

	printf("\n%i\n%i\n", g, h);

	return 0;
}
