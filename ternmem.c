#include <malloc.h>
#include "ternmem.h"
#include "terntype.h"
#include "ternops.h"

struct tword_distancer registers[13] = {0};

void* ternmem_init(unsigned int memsize){	//Use console arguments to set program memory space
	if(memsize < MIN_TERN_MEMORY || memsize > MAX_TERN_MEMORY) return NULL;
	return calloc(memsize, sizeof(struct tword_distancer));
}

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
	registers[RSP].tword = int_to_tword(tword_to_int(registers[RSP].tword) + 9);
	*(tword_t*)tword_to_int(registers[RSP].tword) = *val;
	//God I should not be allowed to cook
}

tword_t stack_pop(void){
	tword_t retval = *(tword_t*)tword_to_int(registers[RSP].tword);
	registers[RSP].tword = int_to_tword(tword_to_int(registers[RSP].tword) - 9);
	return retval; //Why am I like this.
}
