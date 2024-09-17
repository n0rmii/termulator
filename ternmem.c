#include <stdint.h>
#include <malloc.h>
#include "ternmem.h"
#include "terntype.h"
#include "ternops.h"

static void* _ternmem_offset = NULL;

int8_t ternmem_init(size_t memsize){	//Use console arguments to set program space
	if(memsize < MIN_TERN_MEMORY) return -1;
	if(memsize > MAX_TERN_MEMORY) return -2;
	void* check = calloc(memsize, sizeof(tword_t));
	if(!check) return 1;

	return 0;
}
