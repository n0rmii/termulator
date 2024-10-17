#ifndef TERNMEM_H
#define TERNMEM_H

#include "terntype.h"

#define MIN_TERN_MEMORY 19683 //3^9
#define MAX_TERN_MEMORY 387420489 //3^18

extern tword_t registers[];

enum reg_enum {
	R1,
	R2,
	R3,
	R4,
	R5,
	R6,
	R7,
	R8,
	RSP, //Stack Pointer - top of the memory stack (used for push and pop)
	RFB, //Function Base - bottom of the current function's scope
	RBP, //Base Pointer - bottom of the memory stack
		 //(use for locating global variables)
	RIP, //Instruction Pointer - Reserved for now, will be used when switching
		 //from pseudo-assembly to pseudo-machine code
	RIB  //Instruction Base - Reserved for now, probably useful for loops?
};

#endif /* TERNMEM_H */
