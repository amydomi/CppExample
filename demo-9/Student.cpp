#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

Student::Student(const char *name, int id) : m_id(id)
{
	memset(m_name, 0, 40);
	if(name != NULL) {
		int len = strlen(name);
		if(len > 39) len = 39;
		strncpy(m_name, name, len);
		cout << m_name << " constructor." << endl;
	}
}

Student::~Student()
{
	cout << m_name << " destructor." << endl;
}

// 定义拷贝构造函数
Student::Student(const Student &s)
{
	m_id = s.m_id;
	strcpy(m_name, s.m_name);
	strcat(m_name, "_副本");
	cout << m_name << " copy constructor." << endl;
}

void Student::output()
{
	cout << "my name is " << m_name << endl;
}