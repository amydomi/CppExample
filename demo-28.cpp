#include <iostream>
#include <string>

class Person
{
public:

	// ʹ�� explicit ���οɽ�ֹ��ʽ������ת������������Ĺ��캯������ִ����ʽ����ת�������Բ��ü� explicit
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

void test1(Person p)	// ����string���Զ�����ֻ��һ�������Ĺ��캯��������ʽʵ����
{
	p.output();
}

int main()
{
	std::string name = "A";
	test1(name);	// ��ʽ���� Person(std::string &s)
	return 0;
}