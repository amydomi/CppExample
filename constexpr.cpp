/*
 * constexpr (常量表达式) 是C++ 11才支持的
 * 常量表达式是在编译阶段执行的表达式，效率比运行阶段执行的表达式要快
 * 因为常量表达式是在编译阶段执行的，所以在编译前要能确定常量值，之所以需要所有表达式中的值都是常量
 */
#include <iostream>
using namespace std;

// 常量表达式函数
constexpr int add(int a, int b) {
	return a + b;
}

int main()
{
	// constexpr的必须是一个常量，并且只能用常量或者常量表达式来初始化。
	int a = 20;
	const int b = 10;
	// constexpr int c = a + b; // error, a是变量，所以表达式不成立
	constexpr int c = 50 + b;	// 50 和 b 都是常量
	cout << c << endl;
	
	// 常量表达式函数的接收值必须也是constexpr修饰过的
	// 并且参数必须是常量或常量表达式
	constexpr int result = add(b, c);
	cout << result << endl;
	
	const int *p = nullptr;  //p是一个指向整型常量的指针（pointer to const）
    constexpr int *p1 = nullptr; //p1是一个常量指针(const pointer)
	
	return 0;
}