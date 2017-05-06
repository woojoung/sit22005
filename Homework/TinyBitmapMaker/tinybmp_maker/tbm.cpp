#include <iostream>
#include "tinybmp_def.h"
#include "tinybmp.h"

int main(int argc, char** argv)
{
	std::cout << "Hello, world!!" << std::endl;
	std::cout << sizeof(BITMAP_HEADER) << std::endl;
	std::cout << sizeof(BITMAP_INFO_HEADER) << std::endl;
	TinyBitmap tb = TinyBitmap("image/image.bmp");
    tb.export_image("image/image2.bmp");

	return 0;
}