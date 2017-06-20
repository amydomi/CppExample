/**
 * 指针和引用的区别
 * 指针有自己的内存地址，而且可以改变指向的内存地址
 * 引用只是变量的别名，引用一旦定义就不能修改
 *
 * C语言不支持引用，C++支持
 */
#include <iostream>
using namespace std;

void intSwap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 使用引用更好的表达参数
void floatSwap(float &a, float &b) {
	float temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	cout << "a=" << a << ",b=" << b << endl;
	intSwap(&a, &b);
	cout << "a=" << a << ",b=" << b << endl;
	
	float fa = 1.5f;
	float fb = 2.4f;
	cout << "fa=" << fa << ",fb=" << fb << endl;
	floatSwap(fa, fb);
	cout << "fa=" << fa << ",fb=" << fb << endl;
	return 0;
}