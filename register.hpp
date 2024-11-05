#ifndef REGISTER_HPP
#define REGISTER_HPP

#include "terntype.hpp"

enum SyscallNumber
{
	SYS_READ, // TODO: yank the ternary_to_binary functions and use them here!!!
	SYS_WRITE,
	SYS_OPEN,
	SYS_CLOSE,
	SYS_MMAP
};

enum RegisterType
{
	GP,
	ADDR,
	FLAG,
	FLOAT, //for the future
	PROT  //Registers that require kernel-mode to access
		  //Only modified inside syscalls
};

class TernaryRegister
{
private:
	word_t reg;
	enum RegisterType type;
public:
	TernaryRegister(enum RegisterType regtype);
	~TernaryRegister();
	void operator= (word_t val);
	void operator= (tryte_t val);
	void operator= (trybble_t val);
	operator word_t() const;
	operator tryte_t() const;
	operator trybble_t() const;
};

#endif /* REGISTER_HPP */
