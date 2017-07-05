#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10, 100);	// 定义10个int型的数据容器，并全部初始化为100
	size_t size1 = ivec.size(); // size() 返回容器大小
	for(int i = 0; i < size1; i++) {
		// 使用类似数组下标访问容器
		cout << ivec[i] << "\t";
	}
	cout << endl;
	
	// 根据对象的不同，有的对象不支持默认初始化，这种语法就用不了
	vector<int> ivec2(8);	// 定义8个int型的数据容器，初始值全部为0
	
	vector<string> svec = {"hi", "hello", "world"};
	svec.push_back("wong");	// 使用push_back()在尾部动态追加数据
	size_t size2 = svec.size();
	for(int i = 0; i < size2; i++) {
		cout << svec[i] << "\t";
	}
	cout << endl;
	
	// empty() 判断集合是否空
	vector<string> svec2;
	if(svec2.empty()) {
		cout << "svec2 null" << endl;
	}
	
	// 二维数组容器
	// 部分旧版本的语法 vector<vector<string> > ，这里需要用空格分开，C++11不存在此问题
	vector<vector<string>> file = {svec, svec2};
	cout << file[0][1] << endl;	// hello
	
	return 0;
}