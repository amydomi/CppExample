#pragma once

#include <string>
#include "Window_mgr.h"

void output(Screen &s);

class Screen
{
	// ��Ԫ�ࡢ��Ԫ��������Ԫ�������Է��ʶ����˽�г�Ա
	// ��Ԫ�ñȶԷ�װ�õĶ����һ��������������������������Լ���˽�г�Ա��
	// ��Ԫ�����ƻ���ķ�װ���ԣ���������ʹ��

	friend class Window_mgr;	// ��Ԫ��
	friend void Window_mgr::clear(ScreenIndex);	// ��Ԫ����
	friend void output(Screen &);	// ��Ԫ����
public:
	typedef std::string::size_type pos;
	Screen() = default;	// C++11�����ԣ�ָ��Ĭ�Ϲ��캯��
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};
	void some_member() const;
private:
	mutable size_t access_str;	// mutable��Ա��ʹ��const������Ҳ�ܱ��޸�
	pos cursor = 0;
	pos width = 0, height = 0;
	std::string contents;
};