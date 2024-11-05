#include <iostream>
#include <cstdlib>
#include "terntype.hpp"
#include "register.hpp"
#include "machine.hpp"

#define _PROGRAM_MEMORY 13122 // 3^8 * 2

int main()
{
	char *_program_memory_start = (char*)calloc(_PROGRAM_MEMORY, 9);
	char *_program_memory_end = _program_memory_start + _PROGRAM_MEMORY*9;

	Machine emulator = Machine();

	std::cout<<"Let's try again"<<std::endl;
	return 0;
}
