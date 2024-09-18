#include <malloc.h>
#include "ternmem.h"
#include "terntype.h"
#include "ternops.h"

static void* _ternmem_start = NULL;
static void* _ternmem_end = NULL;

int ternmem_init(size_t memsize){	//Use console arguments to set program space
	if(memsize < MIN_TERN_MEMORY) return -1;
	if(memsize > MAX_TERN_MEMORY) return -2;
	void* check = calloc(memsize, sizeof(tword_t));
	if(!check) return 1;
	_ternmem_start = check;
	_ternmem_end = check + memsize * sizeof(tword_t);
	return 0;
}
