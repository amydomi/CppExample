/**
 * C语言不支持函数默认参数，C++支持
 * 函数默认参数从右往左赋值
 *
 * 函数声明时赋默认值，函数实现时不需要默认值
 */
#include <iostream>
using namespace std;

// int add(int = 10, int = 20, int = 30);   // 允许这样写，但不推荐

// 声明函数时赋默认值
int add(int a = 10, int b = 20, int c = 30);

int main() {
    cout << add() << endl;  // 60
    cout << add(1) << endl; // 51
    cout << add(1, 2) << endl;  // 33
    cout << add(1, 2, 3) << endl;   // 6
    return 0;
}

// 实现函数不需要默认值
int add(int a, int b, int c) {
    return a + b + c;
}
