// MyTool.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ToolUtils.h"
#include <iostream>
using namespace std;

void test01() {
	char result[4] = { 0 };
	ToolUtils::int2charsBig(3126,result);
	int ret = ToolUtils::chars2intBig(result);
	cout << ret << endl;
}

int main()
{
	test01();
	system("pause");
    return 0;
}

