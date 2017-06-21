#include <iostream>
#include "Person.h"

int main(int argc, char *argv[]) {
    Person::getCount();
    Person p1("张三");
    Person::getCount();
    p1.say("hi my name is zhangsan.");
	Person p2("李四");
    Person::getCount();
	p2.eat();
	return 0;
}
