/**
 * C++标准库中的容器不是所有都支持下标访问，但全部都支持迭代器
 * 多使用迭代器，少使用下标访问
 */
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string str = "Hello world";
	
	// 使用下标访问
	for(int i = 0; i < str.size(); ++i) {
		cout << str[i] << "  ";
	}
	cout << endl;
	
	// 使用迭代器访问， C++11可以把string::iterator简化为auto
	for(string::iterator it = str.begin(); it != str.end(); ++it) {
		*it = toupper(*it);
		// 访问迭代器对象的方法可以使用箭头
		// 假设it指向的对象有方法test() 可以这样间接 it->test()
	}
	cout << str << endl;
	
	vector<int> ivec;
	ivec.push_back(10);
	ivec.push_back(20);
	ivec.push_back(30);
	ivec.push_back(40);
	ivec.push_back(50);
	
	//下标访问
	for(int i = 0; i < ivec.size(); ++i) {
		cout << ivec[i] << "\t";
	}
	cout << endl;
	
	// 使用迭代器访问, 这里条件请用 != C++支持的好
	for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it) {
		*it += 100;
		cout << *it << "\t";
	}
	cout << endl;
	
	
	vector<string>::const_iterator svec1;	// 只读容器
	const vector<string> svec2;	//和上面一样
	vector<string>::iterator svec3;	// 可读容器
	vector<string> svec4;	// 默认是可读写的
	
	// 只读迭代器， C++11 增加了cbegin()  cend() 方法用来做只读访问控制
	for(vector<int>::const_iterator it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
	
	return 0;
}