#include <iostream>
#include <string>
#include <iterator>

using namespace std;

// 传递指针
void reset(int *ip)
{
	// 修改指针指向的值
	*ip = 0;
}

// C++推荐传递引用，引用没有产生内存拷贝
void reset(double &dp)
{
	dp = 0;
}

// 如果函数内部不对参数数据进行修改，推荐使用const描述参数
int find_char(const string &s, const char &c)
{
	int i = 1;
	for (auto it = s.begin(); it != s.end(); ++it) {
		if (*it == c) break;
		++i;
	}
	return i;
}

/*
 * 数组作为参数传递的时候，会自动转为指针，数组长度会丢失
 * 标记指定数组长度
 * 1、传递C字符串（字符数组），可以通过判断是否以\0结束
 * 2、通过传递标准库begin()、end()进行传递
 * 3、把数组长度作为另外一个参数一起传递
 * 4、传递数组引用
 */

// 1、字符数组
void print_char(const char *c)
{
	while (*c != '\0') {
		cout << *c << ' ';
		++c;
	}
	cout << endl;
}

// 2、传递begin、end
void print_arr(const int *begin, const int *end)
{
	while (begin != end)
	{
		cout << *begin++ << '\t';
	}
	cout << endl;
}

// 3、把长度作为参数传递， C语言标准库里面很多函数都这么实现的
void print_arr(const int *arr, const size_t size)
{
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}

// 4、传递数组引用, 括号不能省，而且强制只能传7项的数组
void print_arr(const int (&arr)[7])
{
	for (int i : arr) {
		cout << i << '\t';
	}
	cout << endl;
}

int main()
{
	// 通过传递指针修改指针指
	int i = 10;
	cout << i << endl;
	reset(&i);	// 通过取地址符&取到i的地址传递给函数
	cout << i << endl;

	// 传递引用形参不会产生拷贝
	double d = 3.14;
	cout << d << endl;
	reset(d);
	cout << d << endl;

	// 不使用const修饰参数，传递字面量参数会报错
	int location = find_char("Hello World", 'o');
	cout << location << endl;

	// 数组参数传递
	// 方法1
	print_char("Hello World");

	// 方法2
	int iarr[] = {5, 8, 10, 4, 6, 7, 9};
	print_arr(begin(iarr), end(iarr));

	// 方法3
	print_arr(iarr, 7);

	// 方法4
	print_arr(iarr);

	return 0;
}