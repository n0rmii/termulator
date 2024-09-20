#ifndef TERNREGS_H
#define TERNREGS_H

#include "terntype.h"

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
	R9,
	RFB, //Function Base - bottom of the current function's scope
	RSP, //Stack Pointer - top of the memory stack (used for push and pop)
	RBP, //Base Pointer - bottom of the memory stack
		 //(use for locating global variables)
	RIP  //Instruction Pointer - Reserved for now, will be used when switching
		 //from pseudo-assembly to pseudo-machine code
};

#endif /* TERNREGS_H */
