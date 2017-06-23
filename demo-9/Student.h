#include <cstring>

#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student
{
public:
	Student(const char *name, int id = 0);
	~Student();
	
	void output();
	
	Student(const Student &s);	// 声明拷贝构造函数
private:
	int m_id;
	char m_name[40];
};

#endif