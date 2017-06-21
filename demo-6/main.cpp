#include <iostream>
#include "Student.h"

using namespace std;

/**
 * 隐式调用带一个参数的构造函数实例化Student对象
 * 使用explicit修饰过的构造函数禁止隐式转换
 */
void foo(Student stu) {
	stu.setScore(60);
	stu.output();
}

int main(int argc, char *argv[]) {
	
	Student stu1;		// 调用无参数构造函数
	stu1.setScore(95);
	stu1.output();
	
	cout << "==================================" << endl;
	
	// 隐式转换
	foo(1001);
	
	return 0;
}