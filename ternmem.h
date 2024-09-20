#ifndef TERNMEM_H
#define TERNMEM_H

#include <malloc.h>
#include "terntype.h"

#define MIN_TERN_MEMORY 27
#define MAX_TERN_MEMORY 2187

void* ternmem_init(unsigned int memsize);

#endif /* TERNMEM_H */
