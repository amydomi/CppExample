#include <iostream>
#include <string>

// 定义函数指针类型的两种方式
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

//函数指针作为参数传递
int calculateOne(int a, int b, int(*fun)(int, int))
{
	return fun(a, b);
}

// 传递函数指针第二种写法
int calculateTwo(int a, int b, funTypeOne fun)
{
	return fun(a, b);
}

// 返回函数指针 
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
	//使用函数指针类型创建函数指针，并指向对应的函数
	funTypeOne add1 = plus;		// 等价 funTypeOne add1 = &plus
	int ret1 = add1(10, 20);
	std::cout << ret1 << std::endl;

	funTypeTwo add2 = minus;	// 等价 funTypeTwo add2 = &minus
	int ret2 = add2(100, 30);
	std::cout << ret2 << std::endl;

	// 创建函数指针
	int(*funPointer)(int, int) = plus;
	int ret3 = funPointer(100, 200);
	std::cout << ret3 << std::endl;

	// 传递函数指针参数, 传递plus进行加法运算，传递minus进行减法运算, 类似javascript中事件回调
	int ret4 = calculateTwo(50, 40, minus);
	std::cout << ret4 << std::endl;

	// 调用返回函数指针的函数
	// 可简化为 funTypeTwo funPlus = getCalculate("plus");

	int(*funPlus)(int, int) = getCalculate("plus");
	int ret5 = funPlus(10, 10);
	std::cout << ret5 << std::endl;

	return 0;
}