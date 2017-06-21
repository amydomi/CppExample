#ifndef _PERSON_H_
#define _PERSON_H_

/**
 * 使用 static 声明过方法和成员变量成为静态方法和静态成员变量
 * 静态方法和静态成员属于类本身，不属于对象，内存中只有一份
 * 静态方法中不能使用this指针
 */
#include <string>
using std::string;

class Person {
public:
	explicit Person(string name, string gender = "男", int age = 30);
	~Person();
	void say(string word);
	void eat();
   	static int getCount();  // 静态方法
    
private:
	string m_name;
	string m_gender;
	int m_age;
    	static int m_count;  // 静态成员函数
};

#endif
