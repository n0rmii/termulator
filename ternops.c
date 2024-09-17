#include "ternops.h"
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "terntype.h"

int8_t trit_to_int(trit_t tritval){
	if(tritval > 2) exit(4);
	if(tritval & 0b1) return(1);
	if(tritval) return(-1);			//if 0b00000010 (-1)
	return(0);
}

trit_t int_to_trit(int8_t intval){
	if(intval > 1 || intval < -1) exit(3);
	if(intval & 0b10) return(0b10);
	if(intval) return(0b1);			//if 0b00000001 (1)
	return(0);
}

int8_t trybble_to_int(trybble_t trybbleval){
	int8_t intval = 0;
	for(int i=0; i<TRITS_PER_TRYBBLE; i++){
		intval += pow(3, i) * trit_to_int((trybbleval >> 2*i) & 0b11);
	}
}

int32_t tryte_to_int(tryte_t tryteval){
	int32_t intval = 0;
	for(int i=0; i<TRITS_PER_TRYTE; i++){
		intval += pow(3, i) * trit_to_int((tryteval >> 2*i) & 0b11);	//Funny happens when the second tryte enters. investigate
	}
	return intval;
}

tryte_t int_to_tryte(int32_t intval){
	tryte_t tryteval = 0;
	int8_t rem;
	//int8_t neg = intval < 0;
	int32_t workval = intval;
	//if(neg) workval *= -1;
	for(int i=0; i<TRITS_PER_TRYTE; i++){
		rem = workval % 3;
		workval /= 3;
		if (rem == 2){
			rem = -1;
			workval++;
		}
		if (rem == -2){
			rem = 1;
			workval--;
		}
		tryteval |= int_to_trit(rem) << 2*i;
	}
	return tryteval;
}

/*int64_t tword_to_int(tword_t twordval){
	int64_t intval = 0;
	for (int i=0; i<TRYTES_PER_TWORD; i++){
		intval += pow(TRITS_PER_TRYTE, i) * tryte_to_int((twordval >> TRITS_PER_TRYTE*2*i) &
				  ((1u << ((TRITS_PER_TRYTE*2) & 63)) - 1u));
	}
	return intval;
}*/

int64_t tword_to_int(tword_t twordval){
	int64_t intval = 0;
	for(int i=0; i<TRITS_PER_TRYTE * TRYTES_PER_TWORD; i++){
		intval += pow(3, i) * trit_to_int((twordval >> 2*i) & 0b11);	//May homogenise with tryte_to_int()
	}
	return intval;
}

tword_t int_to_tword(int64_t intval){	//Literally just int_to_tryte(), may nest later
	tword_t twordval = 0;
	int8_t rem;
	//int8_t neg = intval < 0;
	int64_t workval = intval;
	//if(neg) workval *= -1;
	for(int i=0; i<TRITS_PER_TRYTE * TRYTES_PER_TWORD; i++){
		rem = workval % 3;
		workval /= 3;
		if (rem == 2){
			rem = -1;
			workval++;
		}
		if (rem == -2){
			rem = 1;
			workval--;
		}
		twordval |= int_to_trit(rem) << 2*i;
	}
	return twordval;
}
