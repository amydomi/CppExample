#include <iostream>
#include <string>

/*
 * Fish �� Person �඼�̳� Animal
 * ��д�����breathe�鷽��
 * ͨ������ָ��ָ���������ʵ�ֶ�̬
 */
#include "Animal.h"
#include "Fish.h"
#include "Person.h"

// ����ָ��ָ���������ʵ�ֶ�̬
void test(Animal *animal) {
	animal->breathe();	// �����breathe������������Ϊ virtual (�麯��) �ٰ󶨣�����ָ��������ͬ��������
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