#include <iostream>
using namespace std;

const int a = 10;   // 普通常量只能在一个文件中使用
extern const int b;  // 使用extern进行声明，共享other.cpp中的常量

int main()
{
    cout << a << endl;
    cout << b << endl;  // 输出100
    return 0;
}
