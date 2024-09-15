#ifndef TERNOPS_H
#define TERNOPS_H

#include <stdint.h>
#include "trytetype.h"

 int8_t trit_to_int(trit_t tritval);
 trit_t int_to_trit(int8_t intval);

 int32_t tryte_to_int(tryte_t tryteval);
 tryte_t int_to_tryte(int32_t intval);

#endif /* TERNOPS_H */
