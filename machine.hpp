#ifndef MACHINE_HPP
#define MACHINE_HPP

#include "terntype.hpp"
#include "register.hpp"

class Machine
{
private:
	bool KernerMode;
	TernaryRegister R1;
	TernaryRegister R2;
	TernaryRegister R3;
	TernaryRegister R4;
	TernaryRegister RSP;
	TernaryRegister RBP;
	TernaryRegister RIP;
	TernaryRegister RF;
	//TernaryRegister R1;
	//TernaryRegister R1;
	//TernaryRegister R1;
	//TernaryRegister R1;
	/*
	 * @brief	Program origin register, used to calculate the physical
	 *			memory address from the relative one
	 */
	TernaryRegister ORIG;

public:
	Machine();
	~Machine();
	void SyscallHandler();
};

#endif /* MACHINE_HPP */
