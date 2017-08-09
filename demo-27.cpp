#include <iostream>

/*
 * C++11特性：委托构造函数
 * 先执行被委托的构造函数，再执行委托构造函数的函数体
 */
class Point
{
public:
	Point(int a, int b): x(a), y(b)	// 使用这种方法可以初始化const成员（推荐使用）
	{
		// 这种方式无法初始化const的成员
		// x = a;
		// y = b;

		std::cout << "带参数的的构造函数。" << std::endl;
	}
	Point() :Point(100, 200)	// 委托构造函数
	{
		std::cout << "无参构造函数。" << std::endl;
	}
private:
	const int x;
	int y;
};

int main()
{
	Point p1();		// 声明了一个返回值为Point的函数p1()， 不能将无参构造函数写成这样
	Point p2;		// 创建一个Point对象
	return 0;
}