#include <malloc.h>
#include "ternmem.h"
#include "terntype.h"
#include "ternops.h"

void* ternmem_init(unsigned int memsize){	//Use console arguments to set program space
	if(memsize < MIN_TERN_MEMORY || memsize > MAX_TERN_MEMORY) return NULL;
	return calloc(memsize, sizeof(tword_t));
}


