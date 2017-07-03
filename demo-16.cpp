#include <iostream>
#include <cstring>
using namespace std;

int fun(int a, int b);
int main()
{
	// typedef 是类型别名关键词，C语言就支持的了
	typedef char * STRING;
	
	char name[20] = {'\0'};
	strcpy(name, "Hello");
	
	const STRING cstr = name;	// cstr只是指针是常量，指向的字符串是可变的
	cstr[1] = 'E'; 
	
	cout << cstr << endl;
	
	//C++11 新增的关键词 decltype， sum的类型是fun返回值的类型
	decltype(fun(10, 20)) sum = 30;
	cout << sum << endl;
	
	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;	// x的类型是const int
	decltype(cj) y = x; // y的类型是const int &, y绑定到变量x
	
	// auto关键词是C++11引入的，通过值推导变量类型
	auto i = 10;	// i 类型是int类型
	auto L = 1000L;  // L是long int类型的
	cout << i << endl;
	
	return 0;
}