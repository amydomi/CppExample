#include <iostream>

/*
 * C++11���ԣ�ί�й��캯��
 * ��ִ�б�ί�еĹ��캯������ִ��ί�й��캯���ĺ�����
 */
class Point
{
public:
	Point(int a, int b): x(a), y(b)	// ʹ�����ַ������Գ�ʼ��const��Ա���Ƽ�ʹ�ã�
	{
		// ���ַ�ʽ�޷���ʼ��const�ĳ�Ա
		// x = a;
		// y = b;

		std::cout << "�������ĵĹ��캯����" << std::endl;
	}
	Point() :Point(100, 200)	// ί�й��캯��
	{
		std::cout << "�޲ι��캯����" << std::endl;
	}
private:
	const int x;
	int y;
};

int main()
{
	Point p1();		// ������һ������ֵΪPoint�ĺ���p1()�� ���ܽ��޲ι��캯��д������
	Point p2;		// ����һ��Point����
	return 0;
}