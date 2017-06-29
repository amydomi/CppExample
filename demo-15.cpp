#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main()
{
    // &在左边是引用，在右边是取地址符号
    int a = 10;
    int *p = &a; // 定义指针p指向a
    cout << "*p=" << *p << "\tp=" << p << endl;
    
    // 指向指针的指针
    int **p1 = &p;
    cout << "**p1=" << **p1 << "\t*p1=" << *p1 << "\tp1=" << p1 << endl;
    
    // 空指针
    int *p2 = nullptr;
    
    // void万用指针, void指针可以指向任何类型的对象
    void *p3 = nullptr;
    
    // 指向函数的指针
    int (* pFun)(int, int) = add;
    cout << pFun(10, 20) << endl;
    
    int *p5 = new int(10);
    cout << *p5 << endl;
    delete p5;
    // 内存释放后，指向该对象的指针就成野指针，访问会有可能发生未知错误
    // 良好的变成习惯，释放对象后立即补上将指针设为空指针
    p5 = nullptr;
    
    // 引用只是对象别名，引用必须在定义的时候就赋值，并且不能被修改
    int a1 = 20;
    int &q = a1;
    q = 18; // 修改引用就是修改原变量的值
    cout << q << endl;
    // a2 = a; // 引用定义后不能再修改
    
    // 指针引用，也可以称指针别名
    int * &p6 = p;
    cout << *p6 << endl;
 
    return 0;
}
