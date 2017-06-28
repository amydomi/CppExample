#include <iostream>
using namespace std;

// 所有的字面量都为常数
int main()
{
    // 符号并不是和字面量一体的，值是对字面量取负值而已
    int a1 = -10; // 十进制字面量 10
    int a2 = -0xA; // 十六进制字面量 10
    int a3 = -012;  // 八进制字面量 10
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    
    // 浮点类型字面量默认为double类型的
    double i1 = 3.14159e2;   // e后面的是指数
    cout << i1 << endl;  // 314.159
    
    // 单引号是字符型字面量、双引号是字符串字面量
    char ch = 'C';
    char * str = "Hello World";    // 字符串常量，末尾自动补充 '\0', C语言写法，c++会警告
    char str2[12] = "Hello World"; // 和上面的等价，但下面的是可变的，上面是不可变常量
    cout << ch << endl;
    cout << str << endl;
    cout << str << endl;
    
    /*
     不可打印字符字面量：
     换行符 \n 横向制表符 \t 报警(响铃)符 \a
     纵向制表符 \v 退格符 \b 双引号 \" 反斜线 \\
     问号 \? 单引号 \’ 回车符 \r 进纸符 \f
     */
    cout << '\n' << "\t" << endl;
    
    /*
     Latin-1字符集：
     \x后面跟着1~4个十六进制进行输出
     \后面跟1~3个八进制输出
     Latin-1字符集对照表 http://baike.baidu.com/item/ISO-8859-1#3
     */
    // 下面这些输出的都是 Hell World~!
    // 八进制的Latin-1字符集
    cout << "\110\145\154\154\157 \127\157\162\154\144\176\41" << endl;
    // 十六进制的Latin-1字符集
    cout << "\x48\x65\x6c\x6c\x6f \x57\x6f\x72\x6c\x64\x7e\x21" << endl;
    
    // 使用L前缀代表wchar_t宽字符字面量
    wchar_t ch_t = L'中'; // 宽字符字面量
    cout << ch_t << endl;
    
    //书上是这么写的，但实际编译没有编译通过
    //使用小u和大U做前缀代表Unicode字符字面量，小u是16位，大U是32位
    //char16_t char16 = u'A';
    //char32_t char32 = U'A';
    
    //char * str = u8"Hi";  //UTF-8字面量
    //cout << char16 << endl;
    //cout << char32 << endl;
    //cout << str << endl;
    
    unsigned u1 = 10U;   // 无符号整数字面量
    long long1 = 10000L;    // long型字面量，适用于long double
    float f1 = 3.14f;    // float字面量
    long long long2 = 10000000000LL;    //long long类型字面量
    
    cout << u1 << endl;
    cout << long1 << endl;
    cout << f1 << endl;
    cout << long2 << endl;
    
    bool b1 = true; // true or false 是bool类型字面量，也可以用1和0代替true和false
    bool *p = nullptr;  // nullptr或NULL都是空指针的字面量
    cout << b1 << endl; // 1
    cout << p << endl; // 0x0
	return 0;
}
