#include "register.hpp"
#include "terntype.hpp"

TernaryRegister::TernaryRegister(enum RegisterType regtype)
{
	type = regtype;
}

TernaryRegister::~TernaryRegister(){}

/*void TernaryRegister::operator= (word_t val)
{
	reg = val;
}
void TernaryRegister::operator= (tryte_t val)
{
	reg &= ~BITMASK(BITS_PER_TRIT * TRITS_PER_TRYTE);
	reg |= val;
}
void TernaryRegister::operator= (trybble_t val)
{
	reg &= ~BITMASK(BITS_PER_TRIT * TRITS_PER_TRYBBLE);
	reg |= val;
}
TernaryRegister::operator word_t() const
{
	return reg;
}
TernaryRegister::operator tryte_t() const
{
	return reg & BITMASK(BITS_PER_TRIT * TRITS_PER_TRYTE);
}
TernaryRegister::operator trybble_t() const
{
	return reg & BITMASK(BITS_PER_TRIT * TRITS_PER_TRYBBLE);
}*/
