#include <iostream>

using std::ostream;
using std::cin;
using std::cout;
using std::endl;

class Calculate {
public:
	Calculate(int a, int b) : m_num1(a), m_num2(b) {};
	friend ostream & operator<<(ostream &out, Calculate &obj) {
		out << obj.m_num2 << " �� " << obj.m_num1 << " �İٷ�֮ " << obj.best();
		return out;
	}
	friend ostream & operator<<(ostream &out, Calculate *obj) {
		out << obj->m_num2 << " �� " << obj->m_num1 << " �İٷ�֮ " << obj->best();
		return out;
	}
private:
	int m_num1;
	int m_num2;
	double best() {
		return static_cast<double>(m_num2) / static_cast<double>(m_num1) * 100;
	}
};

int main()
{
	int a, b;
	cout << "����������\n";
	cin >> a;
	cout << "���������\n";
	cin >> b;
	Calculate *obj = new Calculate{a, b};
	cout << obj << endl;
	delete obj;
}