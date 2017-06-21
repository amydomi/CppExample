#include <iostream>
#include "Person.h"
using namespace std;

// 静态成员和静态方法实例化不需要使用static再修饰了，static只用于声明
int Person::m_count = 0;

int Person::getCount() {
    cout << "count:" << m_count << endl;
    return m_count;
}

Person::Person(string name, string gender, int age)
	: m_name(name), m_gender(gender), m_age(age)
{
    m_count++;
	cout << "Person constructor." << endl;
	cout << "name:" << m_name << "\tgender:" << m_gender << "\tage:" << m_age << endl;
}

Person::~Person() {
    m_count--;
	cout << "Person destructor." << endl;
}

void Person::say(string word) {
	cout << word << endl;
}

void Person::eat() {
	cout << m_name  << " will eat." << endl;
}
