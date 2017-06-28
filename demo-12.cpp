#include <iostream>
#include <climits>
using namespace std;

int main()
{
	// 由小到大，所占空间大小根据不同操作系统有偏差
	cout << "char\t\t" << sizeof(char) << "byte\tbit=" << sizeof(char) * 8 << endl;
	cout << "wchar_t\t\t" <<sizeof(wchar_t) << "byte\tbit" <<  sizeof(wchar_t) * 8 << endl;
	
	// Unicode字符集类型，C++11才支持的数据类型,部分编译器需要开启-std=c++0x才能编译通过
	cout << "char16_t\t" <<sizeof(char16_t) << "byte\tbit" <<  sizeof(char16_t) * 8 << endl;
	cout << "char32_t\t" <<sizeof(char32_t) << "byte\tbit" <<  sizeof(char32_t) * 8 << endl;
	
	cout << "short\t\t" <<sizeof(short) << "byte\tbit=" <<  sizeof(short) * 8 << endl;
	cout << "int\t\t" <<sizeof(int) << "byte\tbit=" <<  sizeof(int) * 8 << endl;
	cout << "long\t\t" <<sizeof(long) << "byte\tbit=" <<  sizeof(long) * 8 << endl;
	cout << "long long\t" <<sizeof(long long) << "byte\tbit=" <<  sizeof(long long) * 8 << endl;
	
	cout << "float\t\t" <<sizeof(float) << "byte\tbit=" <<  sizeof(float) * 8 << endl;
	cout << "double\t\t" <<sizeof(double) << "byte\tbit=" <<  sizeof(double) * 8 << endl;
	cout << "long double\t" <<sizeof(long double) << "byte\tbit" <<  sizeof(long double) * 8 << endl;
	
	return 0;
}
