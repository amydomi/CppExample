#include <iostream>
#include <string>

class Person
{
public:

	// 使用 explicit 修饰可禁止隐式类类型转换，多个参数的构造函数不会执行隐式类型转换，可以不用加 explicit
	// explicit Person(std::string &s)
	Person(std::string &s)
	{
		std::cout << s << std::endl;
	}
	void output()
	{
		std::cout << "Person test" << std::endl;
	}
};

void test1(Person p)	// 传递string会自动调用只有一个参数的构造函数进行隐式实例化
{
	p.output();
}

int main()
{
	std::string name = "A";
	test1(name);	// 隐式调用 Person(std::string &s)
	return 0;
}