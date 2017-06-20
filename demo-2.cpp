/*
inline ��������
template<typename T> ����ģ��
namespace ���ƿռ�Ƕ��
*/
#include <iostream>
using namespace std;

#define ADD(A,B) ((A)+(B))	// ʹ��inline������������궨��������鷳

namespace comParent {
	namespace comChildA {
		template<typename T1, typename T2> inline T1 plus(T1 a, T2 b);
	}
	namespace comChildB {
		template<typename T> void swrap(T &a, T &b);
	}
}

int main(int argc, char **argv) {
	int a = 10;
	int b = 20;
	// ������ƿռ�Ƕ��
	cout << comParent::comChildA::plus(a, b) << endl;
	float c = 1.5f;
	float d = 2.0f;
	cout << comParent::comChildA::plus(c, a) << endl;
	cout << ADD(a,b) << endl;

	int sa = 50;
	int sb = 20;
	cout << "sa:" << sa << "\tsb:" << sb << endl;
	comParent::comChildB::swrap(sa, sb);
	cout << "sa:" << sa << "\tsb:" << sb << endl;

	return 0;
}

namespace comParent {
	namespace comChildA {
		template<class T1, class T2> inline T1 plus(T1 a, T2 b) {
			return a + b;
		}
	}
	namespace comChildB {
		template<typename T> void swrap(T &a, T &b) {
			T temp = a;
			a = b;
			b = temp;
		}
	}
}