#include "machine.hpp"
#include <iostream>
#include "terntype.hpp"
#include "register.hpp"
// damn you class initialisation
Machine::Machine() : R1(GP), R2(GP), R3(GP), R4(GP), RSP(ADDR), RBP(ADDR), RIP(ADDR), RF(FLAG), ORIG(PROT)
{
	KernerMode = false;
	/*R1 = TernaryRegister(GP);
	R2 = TernaryRegister(GP);
	R3 = TernaryRegister(GP);
	R4 = TernaryRegister(GP);
	RSP = TernaryRegister(ADDR);
	RBP = TernaryRegister(ADDR);
	RIP = TernaryRegister(ADDR);
	RF = TernaryRegister(FLAG);
	ORIG = TernaryRegister(PROT);*/
	//R1 = TernaryRegister();
	//R1 = TernaryRegister();
	//R1 = TernaryRegister();
	//R1 = TernaryRegister();

}

Machine::~Machine(){}

void Machine::SyscallHandler()
{
	KernerMode = true;
	switch ((word_t)R1) {
		default:
			std::cerr<<"SYSCALL ERROR: incorrect syscall number"<<std::endl;
			exit(10);
			break;
		case SYS_READ:
			
			break;
	}

	KernerMode = false;
}

