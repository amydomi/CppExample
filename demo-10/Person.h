#ifndef _PERSON_H_
#define _PERSON_H_

class Person
{
public:
	Person(const char *name, int age);
	~Person();
	
	// 显示删除拷贝构造函数和赋值运算符
//	Person(const Person &p) = delete;
//	Person & operator = (const Person &p) = delete;

	Person(const Person &p);
	Person & operator = (const Person &p);
    
    void output();
    
private:
	int m_age;
	char *m_name;

	// 也可以将拷贝构造函数和赋值运算符设为私有的屏蔽这两个函数
//	Person(const Person &p);
//	Person & operator = (const Person &p);
};

#endif
