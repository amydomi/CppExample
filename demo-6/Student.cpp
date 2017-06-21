#include <iostream>
#include "Student.h"

using namespace std;

Student::Student():m_id(0), m_score(0) {
	cout << "Student constructor, parameter 0." << endl;
}

Student::Student(int id)
	:m_id(id), m_score(0)	// 构造函数初始化列表，必须按照成员函数顺序进行初始化
{
	cout << "Student constructor, parameter 1." << endl;
}

Student::~Student() {
	cout << "Student distructor." << endl;
}

void Student::output() {
	cout << "Object info:" << endl;
	cout << this << endl;
	cout << "id=" << m_id << ",score=" << m_score << endl;
}

int Student::getId() {
	return m_id;
}

void Student::setId(int id) {
	m_id = id;
}

int Student::getScore() {
	return m_score;
}

void Student::setScore(int score) {
	m_score = score;
}