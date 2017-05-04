#include <iostream>
#include "tinybmp_def.h"

int main(int argc, char** argv)
{
	std::cout << "Hello, world!!" << std::endl;
	std::cout << sizeof(BITMAP_HEADER) << std::endl;
	std::cout << sizeof(BITMAP_INFO_HEADER) << std::endl;
	return 0;
}