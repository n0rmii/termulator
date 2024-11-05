#ifndef TERNTYPE_HPP
#define TERNTYPE_HPP

#define BITS_PER_TRIT 2
#define TRITS_PER_TRYBBLE 3
#define TRYBBLES_PER_TRYTE 3
#define TRITS_PER_TRYTE TRITS_PER_TRYBBLE * TRYBBLES_PER_TRYTE
#define TRYTES_PER_WORD 3

#define BITMASK(n) (1UL << n) - 1

typedef unsigned char trit_t;
typedef unsigned char trybble_t;
typedef unsigned int tryte_t;
typedef unsigned long word_t;

#endif /* TERNTYPE_HPP */
