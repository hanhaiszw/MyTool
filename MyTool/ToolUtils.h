#pragma once



class ToolUtils
{
private:
	ToolUtils() = default;
	
public:
	// result�����ǳ���Ϊ4��char����
	static void int2charsBig(int value, char result[]);
	// src�����ǳ���Ϊ4��char����
	static int chars2intBig(char src[]);

};

