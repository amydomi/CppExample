/**
 * 赋值运算符函数 和 拷贝构造函数应用场景：
 * 当成员变量有指针的情况下使用
 *
 * 没有定义赋值运算函数和拷贝构造函数，系统会自动分配一个，只做浅拷贝，需要深拷贝需要程序员自己实现
 */
#include <iostream>
#include "Person.h"

Person foo(Person p);

int main()
{
	Person p1("张三", 30);
	Person p2("李四", 25);
	Person p3 = p1;	// 执行了拷贝构造函数
	p3 = p2;	//执行了赋值运算符函数
    
    Person p4 = foo(p1);
	return 0;
}

// 传递实参和返回实参都会出发拷贝构造函数
// 实际项目避免这种操作，非常影响效率
Person foo(Person p)
{
    p.output();
    return p;
}
