#pragma once

#include <string>
#include "Window_mgr.h"

void output(Screen &s);

class Screen
{
	// 友元类、友元函数、友元方法可以访问对象的私有成员
	// 友元好比对封装好的对象打开一个洞，让其它对象或函数来访问自己的私有成员。
	// 友元容易破坏类的封装特性，尽量避免使用

	friend class Window_mgr;	// 友元类
	friend void Window_mgr::clear(ScreenIndex);	// 友元方法
	friend void output(Screen &);	// 有元函数
public:
	typedef std::string::size_type pos;
	Screen() = default;	// C++11新特性，指定默认构造函数
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};
	void some_member() const;
private:
	mutable size_t access_str;	// mutable成员即使在const对象内也能被修改
	pos cursor = 0;
	pos width = 0, height = 0;
	std::string contents;
};