/**
 * 函数参数传递时：
 * 1.传递实参会进行数据拷贝
 * 2.传递指针只对指针进行拷贝
 * 3.传递引用不会拷贝源数据
 *
 * 深拷贝： 对象指向的资源拷贝
 * 浅拷贝： 只拷贝指向对象的指针，不拷贝资源
 */
#include <iostream>
#include <cstdio>
#include "Student.h"


Student foo(Student s);	// 实际项目中很少如此写，非常消耗性能
void bar(Student &s);	// 使用引用不会产生构造函数拷贝

int main()
{
	Student s1("张三");
	Student s2 = s1;	//调用了拷贝构造函数
	
	// s1 和 s2 是两个完全独立的对象
	printf("&s1=%x\n", &s1);
	printf("&s2=%x\n", &s2);
	
	Student s3("李四");
	Student s4 = foo(s3);
	
	bar(s3);
	
	return 0;
}

// 传递实参时发生一次拷贝
Student foo(Student s)
{
	// 返回结果时又发生一次拷贝
	s.output();
	return s;
}

void bar(Student &s)
{
	s.output();
}