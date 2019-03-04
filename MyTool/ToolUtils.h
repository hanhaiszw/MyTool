#pragma once



class ToolUtils
{
private:
	ToolUtils() = default;
	
public:
	// result必须是长度为4的char数组
	static void int2charsBig(int value, char result[]);
	// src必须是长度为4的char数组
	static int chars2intBig(char src[]);

};

