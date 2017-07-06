#include <iostream>
#include <cstring>

#include "Person.h"

using namespace std;

Person::Person(const char *name, int age) : m_age(age)
{
	if(name != NULL) {
		int len = strlen(name);
		m_name = (char *)malloc(sizeof(char) * (len + 1));	// 在堆中开辟一段字符串内存空间
		memset(m_name, 0, len + 1);	// 将空间清零
		strcpy(m_name, name);	// 将字符串赋值
		cout << m_name << " constructor." << endl;
	}
}

Person::~Person()
{
	cout << m_name << " destructor." << endl;
	free(m_name);	// 销毁字符串空间
}

// 拷贝构造函数
Person::Person(const Person &p)
{
    // 保证拷贝源是有效的
    if(p.m_name != NULL) {
        int len = strlen(p.m_name);
        m_name = NULL;
        m_name = (char *)malloc(sizeof(char) * (len + 1));	// 重新申请空间
        memset(m_name, 0, len);
        strcpy(m_name, p.m_name);
        m_age = p.m_age;
        cout << m_name << " copy constructor." << endl;
    }
}

// 重写赋值运算符函数
Person & Person::operator = (const Person &p)
{
	// 如果赋值和被赋值的对象是同一个对象，不做任何操作
	if(this == &p) return *this;
    
	if(p.m_name != NULL) {
		// 释放旧值
		free(m_name);
        	m_name = NULL;
        
        	// 分配新的空间并赋值
        	int len = strlen(p.m_name);
		m_name = (char *)malloc(sizeof(char) * (len + 1));
		memset(m_name, 0, len);
		strcpy(m_name, p.m_name);
		m_age = p.m_age;
		cout << m_name << " operator." << endl;
	}
	return *this;
}

void Person::output()
{
    cout << "name:" << m_name << "\tage：" << m_age << endl;
}

