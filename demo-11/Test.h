#ifndef _TEST_H_
#define _TEST_H_

class Test
{
public:
	Test();
	~Test();
	
	// const函数重载
	void foo(int x);
	void foo(int x) const;	// const在末尾，函数体内不能修改成员变量, 此函数属于const对象
	
	// const参数重载
	void output(char *str);
	void output(const char *str);
	
	const char * getHello();
private:
	int m_x;
};

#endif