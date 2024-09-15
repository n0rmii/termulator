#include <stdint.h>
#include <stdio.h>
#include "trytetype.h"
#include "ternops.h"

int main(int argc, char *argv[]){
	printf("%s\n", "C rewrite");

	int32_t a = 41, b = -41;

	tryte_t x = int_to_tryte(a);
	tryte_t y = int_to_tryte(b);

	int32_t g = tryte_to_int(x);
	int32_t h = tryte_to_int(y);

	printf("%i\n%i\n", g, h);

	return 0;
}
