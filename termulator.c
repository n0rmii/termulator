#include <stdint.h>
#include <stdio.h>
#include "terntype.h"
#include "ternops.h"
#include "ternmem.h"

void printb(unsigned int v) {
    unsigned int i, s = 1<<((sizeof(v)<<3)-1); // s = only most significant bit at 1
    for (i = s; i; i>>=1) printf("%d", v & i || 0 );
	printf("\n");
}

int main(int argc, char *argv[]){

	/**
	 * Register definitions
	 * There has GOT to be a better way of doing this.
	 */
	tword_t registers[13] = {0};
	tword_t *R1 = registers;
	tword_t *R2 = registers + 1;
	tword_t *R3 = registers + 2;
	tword_t *R4 = registers + 3;
	tword_t *R5 = registers + 4;
	tword_t *R6 = registers + 5;
	tword_t *R7 = registers + 6;
	tword_t *R8 = registers + 7;
	tword_t *R9 = registers + 8;
	tword_t *R10 = registers + 9;
	tword_t *R11 = registers + 10;
	tword_t *R12 = registers + 11;
	tword_t *R13 = registers + 12;
	//Q: WHY ARE POINTERS HARDLOCKED TO QWORDS RRAAAAGH
	//A: because youre using a 64bit type and theyre smart n all

	registers[1] = 777666;
	printf("size: %d\n", sizeof(tword_t));
	printf("%ld %ld %ld\n", *R1, *R2, *R3);
	printf("er's: %d, %d, %d\n", R1, R2, R3);
	printf("regs: %d, %d, %d\n", registers, &(registers[1]), &(registers[2]));



	/* printf("%s\n", "C rewrite");

	int32_t a = 41, b = -41;
	int64_t b1 = 1234567, b2 = -1234567;

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
	printf("%ld\n%ld\n", n1, n2); */

	return 0;
}
