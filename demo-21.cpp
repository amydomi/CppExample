#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// 如果没有捕获到throw抛出的类型错误， 调用C++默认的异常处理 
	try
	{
		char s[10];
		cin.getline(s, 9);
		
		if(0 == strcmp(s, "int")) { 
			throw -1;	// 抛出int类型错误 
		} else if (0 == strcmp(s, "string")) {
			throw "error";	// 抛出const char *类型错误 
		} 
		cout << "success" << endl;
	}
	catch(const char *e)	// 捕获 const char * 类型错误 
	{
		cout << e << endl;
	}
	catch(int i)	// 捕获 const char *类型错误  
	{
		cout << "int i =" << i << endl;
	}
	return 0;
}