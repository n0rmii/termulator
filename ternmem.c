#include "ternmem.h"
#include "terntype.h"
#include "ternops.h"

tword_t registers[13] = {0};

void mov_tword(tword_t* dst, tword_t* src){
	*dst = *src;
	// *((unsigned char*)dst + 8) = 0; //Simulate data overwrite (tword is canonically 9 bytes)
}

void mov_tryte(tryte_t* dst, tryte_t* src){
	*((unsigned short*)dst) = *((unsigned short*)src);
	*((unsigned char*)dst + 2) = *((unsigned char*)dst + 2); //Tryte is 3 bytes
}

void mov_trybble(trybble_t* dst, trybble_t* src){
	*dst = *src;
}

void stack_push(tword_t* val){
	//Aligning memory to tword is easier
	//FIXME: replace this when ternary math
	registers[RSP] = int_to_tword(tword_to_int(registers[RSP]) + 9);
	*(tword_t*)tword_to_int(registers[RSP]) = *val;
	//God I should not be allowed to cook
}

tword_t stack_pop(void){
	tword_t retval = *(tword_t*)tword_to_int(registers[RSP]);
	registers[RSP] = int_to_tword(tword_to_int(registers[RSP]) - 9);
	return retval; //Why am I like this.
}
