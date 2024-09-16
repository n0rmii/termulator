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
	int64_t b1 = 9842, b2 = -1234567;

	tryte_t x = int_to_tryte(b1);
	tryte_t y = int_to_tryte(b2);
	printb(x);
	printb(y);

	int32_t g = tryte_to_int(x);
	int32_t h = tryte_to_int(y);

	printf("\n%i\n%i\nBig boys:\n", g, h);

	tword_t t1 = int_to_tword(b1), t2 = int_to_tword(b2);
	printb(t1);
	printb(t2);

	int64_t n1 = tword_to_int(t1), n2 = tword_to_int(t2);
	printf("%ld\n%ld\n", n1, n2);

	return 0;
}
