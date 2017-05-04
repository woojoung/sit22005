#pragma once

#include <iostream>
#include "tinybmp_def.h"

class TinyBitmap
{
public:
	TinyBitmap();
	TinyBitmap(const char* _path);

public:
	void print_header(std::ostream& strm);
	void print_info_header(std::ostream& strm);
	
private:
	BITMAP_HEADER m_header;
	BITMAP_INFO_HEADER m_info_header;
};