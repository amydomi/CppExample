#include <iostream>
#include <string>

/*
 * Fish 和 Person 类都继承 Animal
 * 重写父类的breathe虚方法
 * 通过父类指针指向子类对象，实现多态
 */
#include "Animal.h"
#include "Fish.h"
#include "Person.h"

// 父类指针指向子类对象实现多态
void test(Animal *animal) {
	animal->breathe();	// 父类的breathe方法必须声明为 virtual (虚函数) 迟绑定，才能指向子类中同名函数。
}

int main(int argc, char **argv)
{
	Fish fish;
	Person person;
	
	using namespace std;
	string s;
	while(true) {
		cin >> s;
		if(s == "fish") {
			test(&fish);
		} else if(s == "person") {
			test(&person);
		} else {
			cout << "error" << endl;
		}
	}
	
	return 0;
}