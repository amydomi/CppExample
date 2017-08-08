#include <iostream>
#include "Screen.h"

// 函数末尾增加const修饰this指针为常量
void Screen::some_member() const
{
	// 使用mutable修饰的成员，即使是指向常量的指针，也能修改其成员
	++access_str;
}

// 有元函数
void output(Screen &s)
{
	std::cout << s.width << std::endl;
}