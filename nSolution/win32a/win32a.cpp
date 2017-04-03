// win32a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
http://stackoverflow.com/questions/895827/what-is-the-difference-between-tmain-and-main-in-c
http://stackoverflow.com/questions/10451529/understanding-tmain-in-visual-c-console-projects
https://social.msdn.microsoft.com/Forums/en-US/2d5af4be-8baa-4ff1-bd65-21aefa049e4b/what-is-difference-between-main-and-tmain-in-visual-studio?forum=Vsexpressvc
http://www.cplusplus.com/forum/beginner/103445/
*/
void console_text()
{
	auto s0 = "Here áéíóú ÁÉÍÓÚ Ññ Üü";
	const std::type_info& type0 = typeid(s0);
	std::cout << "cout " << s0 << std::endl;
	std::wcout << "wcout " << s0 << std::endl;
	std::wcout << type0.name() << std::endl;

	std::wcout << std::endl;

	auto s1 = _T("_T(Here áéíóú ÁÉÍÓÚ Ññ Üü)");
	const std::type_info& type1 = typeid(s1);
	std::cout << "cout " << s1 << std::endl;
	std::wcout << "wcout " << s1 << std::endl;
	std::wcout << type1.name() << std::endl;
}

int main()
{
	console_text();
	return 0;
}