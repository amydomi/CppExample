#include <iostream>
#include <string>	// std::string
#include <cctype>	// 处理字符的标准库

using namespace std;

int main()
{
	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;	// s3的内容是 hello, world\n
	s1 += s2;				// 等价于 s1 = s1 + s2;
	string s4 = s1 + ", " + "world"; // 正确
	string s5(10, 'c');		// s4为cccccccccc
	
	// 为兼容C，字符串字面量不是一个string对象
	// 错误，字面量不能相加，字面量相加，前面必须有一个string对象
	// string s5 = "hello" + ", world";
	// string s6 = "hello" + "," + s2;
	
	// 处理字符，需要引入cctype头文件，对应c语言中的ctype.h
	char c1 = 'a';
	cout << isalnum(c1) << endl;		// 当c1是字母或数字时为真
	cout << isalpha(c1) << endl;		// 当c1是字母时为真
	cout << iscntrl(c1) << endl;		// 当c1是控制字符时为真
	cout << isdigit(c1) << endl;		// 当c1是数字时为真
	cout << isgraph(c1) << endl;		// 当c1不是空格但可打印时为真
	cout << islower(c1) << endl;		// 当c1是小写时为真
	cout << isupper(c1) << endl;		// 当c1是大写时为真
	cout << isxdigit(c1) << endl;		// 当c1是十六进制时为真, (0~9A~F)
	cout << isprint(c1) << endl;		// 当c1是可打印字符时为真 (空格或具有可视化形式)
	cout << ispunct(c1) << endl;		// 当c1是标点符号时为真 (不是控制字符、数字、字母、可打印空白中的一种)
	cout << isspace(c1) << endl;		// 当c1是空白时为真 (空格、横向纵向制表符、回车、换行、进纸符中的一种)
	cout << tolower(c1) << endl;		// c1转小写
	cout << toupper(c1) << endl;		// c1转大写
	
	// 将string拆分成单个字符处理, for ... : 语法C++11才支持
	// &c是引用，更改的值直接影响s3
	for(auto &c : s3) {
		c = toupper(c);
	}
	cout << s3 << endl;
	
	string s6;
	cout << s3.size() << endl; // 返回字符串长度
	cout << s6.empty() << endl; // 判断字符串是否为空
	
	return 0;
}