#include <iostream>
#include "Test.h"
using namespace std;

Test::Test() : m_x(0)
{
	cout << "Test constructor." << endl;
}

Test::~Test()
{
	cout << "Test destructor." << endl;
}

void Test::foo(int x)
{
	m_x = x;
	cout << m_x << endl;
}

void Test::foo(int x) const
{
	// m_x = x;		// 修改成员变量会报错
	cout << "const " << m_x << endl;
}

void Test::output(char *str)
{
	cout << str << endl;
}
void Test::output(const char *str)
{
	cout << "const " << str << endl;
}

const char * Test::getHello()
{
	return "hello World";
}