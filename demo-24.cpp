#include <iostream>
#include <string>

// ���庯��ָ�����͵����ַ�ʽ
typedef int(*funTypeOne)(int, int);
using funTypeTwo = int(*)(int, int);

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

//����ָ����Ϊ��������
int calculateOne(int a, int b, int(*fun)(int, int))
{
	return fun(a, b);
}

// ���ݺ���ָ��ڶ���д��
int calculateTwo(int a, int b, funTypeOne fun)
{
	return fun(a, b);
}

// ���غ���ָ�� 
funTypeOne getCalculate(const std::string &name)
{
	if (name == "plus") {
		return plus;
	}
	else {
		return minus;
	}
}

int main()
{
	//ʹ�ú���ָ�����ʹ�������ָ�룬��ָ���Ӧ�ĺ���
	funTypeOne add1 = plus;		// �ȼ� funTypeOne add1 = &plus
	int ret1 = add1(10, 20);
	std::cout << ret1 << std::endl;

	funTypeTwo add2 = minus;	// �ȼ� funTypeTwo add2 = &minus
	int ret2 = add2(100, 30);
	std::cout << ret2 << std::endl;

	// ��������ָ��
	int(*funPointer)(int, int) = plus;
	int ret3 = funPointer(100, 200);
	std::cout << ret3 << std::endl;

	// ���ݺ���ָ�����, ����plus���мӷ����㣬����minus���м�������, ����javascript���¼��ص�
	int ret4 = calculateTwo(50, 40, minus);
	std::cout << ret4 << std::endl;

	// ���÷��غ���ָ��ĺ���
	// �ɼ�Ϊ funTypeTwo funPlus = getCalculate("plus");

	int(*funPlus)(int, int) = getCalculate("plus");
	int ret5 = funPlus(10, 10);
	std::cout << ret5 << std::endl;

	return 0;
}