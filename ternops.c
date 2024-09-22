#include "ternops.h"
#include <stdlib.h>
#include <math.h>
#include "terntype.h"

signed char trit_to_int(trit_t tritval){
	if(tritval > 2) exit(4);
	if(tritval & 0b1) return(1);
	if(tritval) return(-1);			//if 0b00000010 (-1)
	return(0);
}

trit_t int_to_trit(signed char intval){
	if(intval > 1 || intval < -1) exit(3);
	if(intval & 0b10) return(0b10);
	if(intval) return(0b1);			//if 0b00000001 (1)
	return(0);
}

signed char trybble_to_int(trybble_t trybbleval){
	signed char intval = 0;
	for(int i=0; i<TRITS_PER_TRYBBLE; i++){
		intval += pow(3, i) * trit_to_int((trybbleval >> 2*i) & 0b11);
	}
	return intval;
}

trybble_t int_to_trybble(signed char intval){
	trybble_t trybbleval = 0;
	signed char rem;
	//signed char neg = intval < 0;
	signed char workval = intval;
	//if(neg) workval *= -1;
	for(int i=0; i<TRITS_PER_TRYBBLE; i++){
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
		trybbleval |= int_to_trit(rem) << 2*i;
	}
	return trybbleval;
}

signed int tryte_to_int(tryte_t tryteval){
	signed int intval = 0;
	for(int i=0; i<TRITS_PER_TRYTE; i++){
		intval += pow(3, i) * trit_to_int((tryteval >> 2*i) & 0b11);	//Funny happens when the second tryte enters. investigate
	}
	return intval;
}

tryte_t int_to_tryte(signed int intval){
	tryte_t tryteval = 0;
	signed char rem;
	//signed char neg = intval < 0;
	signed int workval = intval;
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

/*signed long tword_to_int(tword_t twordval){
	signed long intval = 0;
	for (int i=0; i<TRYTES_PER_TWORD; i++){
		intval += pow(TRITS_PER_TRYTE, i) * tryte_to_int((twordval >> TRITS_PER_TRYTE*2*i) &
				  ((1u << ((TRITS_PER_TRYTE*2) & 63)) - 1u));
	}
	return intval;
}*/

signed long tword_to_int(tword_t twordval){
	signed long intval = 0;
	for(int i=0; i<TRITS_PER_TRYTE * TRYTES_PER_TWORD; i++){
		intval += pow(3, i) * trit_to_int((twordval >> 2*i) & 0b11);	//May homogenise with tryte_to_int()
	}
	return intval;
}

tword_t int_to_tword(signed long intval){	//Literally just int_to_tryte(), may nest later
	tword_t twordval = 0;
	signed char rem;
	//signed char neg = intval < 0;
	signed long workval = intval;
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
		twordval |= ((unsigned long)int_to_trit(rem)) << 2UL*i;
	}
	return twordval;
}
