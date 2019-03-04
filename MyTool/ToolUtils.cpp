#include "stdafx.h"
#include "ToolUtils.h"

void ToolUtils::int2charsBig(int value, char result[])
{
	result[0] = (char)((value >> 24) & 0xFF);
	result[1] = (char)((value >> 16) & 0xFF);
	result[2] = (char)((value >> 8) & 0xFF);
	result[3] = (char)(value & 0xFF);
}

int ToolUtils::chars2intBig(char src[])
{
	int value;
	value = (int)(((src[0] & 0xFF) << 24)
		| ((src[1] & 0xFF) << 16)
		| ((src[2] & 0xFF) << 8)
		| (src[3] & 0xFF));
	return value;
}
