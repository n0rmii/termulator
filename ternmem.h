#ifndef TERNMEM_H
#define TERNMEM_H

#include <malloc.h>
#include <stdint.h>

#define MIN_TERN_MEMORY 27
#define MAX_TERN_MEMORY 2187

int8_t ternmem_init(size_t memsize);

#endif /* TERNMEM_H */
