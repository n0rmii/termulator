#ifndef TERNTYPE_H
#define TERNTYPE_H

#include <stdint.h>

#define TRITS_PER_TRYBBLE 3
#define TRYBBLES_PER_TRYTE 3
#define TRITS_PER_TRYTE TRITS_PER_TRYBBLE * TRYBBLES_PER_TRYTE
#define TRYTES_PER_TWORD 3

typedef uint8_t trit_t;
typedef uint8_t trybble_t;
typedef uint32_t tryte_t;
typedef uint64_t tword_t;

#endif /* TERNTYPE_H */
