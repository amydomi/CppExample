#include <iostream>
#include "Screen.h"

// ����ĩβ����const����thisָ��Ϊ����
void Screen::some_member() const
{
	// ʹ��mutable���εĳ�Ա����ʹ��ָ������ָ�룬Ҳ���޸����Ա
	++access_str;
}

// ��Ԫ����
void output(Screen &s)
{
	std::cout << s.width << std::endl;
}