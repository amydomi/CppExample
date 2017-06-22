/**
 * 内存划分：
 * 代码区：运行的代码加载到代码区
 * 栈区：局部变量，局部对象
 *		栈速度快，存放在CPU寄存器中
 *
 * 堆区(自由存储区)：new、malloc出来的对象
 *		堆速度慢，但空间大，对象通常放堆中
 *
 * 全局/静态区：全局变量，静态变量
 *		bss段：存放未初始化的全局变量 值为0
 *		data段：存放初始化的全局变量，非0
 *
 * 常量区：常量
 */
#include <iostream>
#include <string>
using namespace std;
using std::string;

class Test {
public:
	Test() {
		m_name = "anonymous";
		m_count++;
		cout << m_name << " constructor." << endl;
	}
	Test(string name) : m_name(name) {
		m_count++;
		cout << m_name << " constructor." << endl;
	}
	~Test() {
		m_count--;
		cout << m_name << " destructor." << endl;
	}
	static int getCount() {
		return m_count;
	}
private:
	string m_name;
	static int m_count;		// 静态成员变量属于类本身
};

// 静态成员变量在类外面赋值
int Test::m_count = 0;

// 全局对象会在main函数执行前优先执行，程序结束后销毁
Test a("A");
Test b("B");

int main(void) {
	cout << "main start." << endl;
	
	// 静态方法不需要实例化对象
	cout << Test::getCount() << endl;
	
	// new 创建，delete 销毁
	Test *c = new Test("C");
	delete c;
	c = NULL;	// 编码规范：释放后记得将指针置空
	
	// new 对象数组，delete[] 销毁
	// new创建对象数组，不能调用自定义构造函数，自动调用无参构造函数
	Test *d = new Test[5];
	delete[] d;
	d = NULL;
	
	// malloc创建，free销毁
	int *m = (int *)malloc(sizeof(int));
	*m = 10;
	cout << *m << endl;
	free(m);
	m = NULL;
	
	// 存放到常量
	const Test e("E");
	return 0;
}
