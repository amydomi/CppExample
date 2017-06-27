/**
 * const常量有数据类型，而宏常量没有数据类型。编译器可以对前者进行类型安全检查，
 * 而对后者只进行字符替换，没有类型安全检查，并且在字符替换时可能会产生意料不到的错误。
 * const常量从汇编的角度来看，只是给出了对应的内存地址，而不是象#define一样给出的是立即数，
 * 所以，const定义的常量在程序运行过程中只有一份拷贝，而#define定义的常量在内存中有若干个拷贝。
 */
#include <iostream>
#include "Test.h"

using namespace std;

int main()
{
	Test a;
	a.foo(10);	// 调用了没有const修饰的foo函数
	
	
	a.output("hello");	// 参数为字面常量，所以调用了const的output函数
	char str[10] = {'h','i', '\0'};
	a.output(str);	// 参数为字符串数组变量，所以调用了没有const的output函数
	/* 这里有个蛋疼的概念，如果没有const参数重载，则两种调用都是调用统一个函数 */
	
	// const 在*左边代表指向的资源不可修改
	const Test * b = new Test();
	b->foo(20);	// 调用了const修饰过的foo函数
	delete b;
	
	// const 在*右边代表指针不可以修改，指向的资源可以修改
	Test * const c = new Test();
	c->foo(30);
	
	// const 指针可以接受const 和非 const 地址，但是非const 指针只能接受非const 地址。
	// 所以const  指针的能力更强一些，所以尽量多用const 指针，这是一种习惯。
	const char *s = c->getHello();	// const修饰的返回值指针，只能用const指针变量接收
	cout << s << endl;
	
	delete c;
	
	return 0;
}