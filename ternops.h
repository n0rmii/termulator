#ifndef TERNOPS_H
#define TERNOPS_H

#include "terntype.h"

signed char trit_to_int(trit_t tritval);
trit_t int_to_trit(signed char intval);

signed char trybble_to_int(trybble_t trybbleval);
trybble_t int_to_trybble(signed char intval);

signed int tryte_to_int(tryte_t tryteval);
tryte_t int_to_tryte(signed int intval);

signed long tword_to_int(tword_t twordval);
tword_t int_to_tword(signed long intval);

#endif /* TERNOPS_H */
