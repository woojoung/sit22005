#include "tinybmp.h"
#include <fstream>

TinyBitmap::TinyBitmap()
{

}

TinyBitmap::TinyBitmap(const char* _path)
{
	std::ifstream fin;
	fin.open(_path, std::ifstream::binary);
	fin.read((char*)&m_header, sizeof(m_header));

	fin.close();
}