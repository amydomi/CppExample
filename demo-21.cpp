#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// ���û�в���throw�׳������ʹ��� ����C++Ĭ�ϵ��쳣���� 
	try
	{
		char s[10];
		cin.getline(s, 9);
		
		if(0 == strcmp(s, "int")) { 
			throw -1;	// �׳�int���ʹ��� 
		} else if (0 == strcmp(s, "string")) {
			throw "error";	// �׳�const char *���ʹ��� 
		} 
		cout << "success" << endl;
	}
	catch(const char *e)	// ���� const char * ���ʹ��� 
	{
		cout << e << endl;
	}
	catch(int i)	// ���� const char *���ʹ���  
	{
		cout << "int i =" << i << endl;
	}
	return 0;
}