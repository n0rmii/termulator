#ifndef TERNTYPE_H
#define TERNTYPE_H

#define TRITS_PER_TRYBBLE 3
#define TRYBBLES_PER_TRYTE 3
#define TRITS_PER_TRYTE TRITS_PER_TRYBBLE * TRYBBLES_PER_TRYTE
#define TRYTES_PER_TWORD 3

typedef unsigned char trit_t;
typedef unsigned char trybble_t;
typedef unsigned int tryte_t;
typedef unsigned long tword_t;

#endif /* TERNTYPE_H */
