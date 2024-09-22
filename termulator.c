#include <stdio.h>
#include "terntype.h"
#include "ternops.h"
#include "ternmem.h"
#include "printb.h"

int main(int argc, char *argv[]){

	printf("whaddafuf\n");
	registers[R1].tword = int_to_tword(-9000954321);
	printb(registers[R1].tword);
	printf("Is this working?: %ld\n", tword_to_int(registers[R1].tword));

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
