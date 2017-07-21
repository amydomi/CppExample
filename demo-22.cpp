#include <iostream>
#include <string>
#include <iterator>

using namespace std;

// ����ָ��
void reset(int *ip)
{
	// �޸�ָ��ָ���ֵ
	*ip = 0;
}

// C++�Ƽ��������ã�����û�в����ڴ濽��
void reset(double &dp)
{
	dp = 0;
}

// ��������ڲ����Բ������ݽ����޸ģ��Ƽ�ʹ��const��������
int find_char(const string &s, const char &c)
{
	int i = 1;
	for (auto it = s.begin(); it != s.end(); ++it) {
		if (*it == c) break;
		++i;
	}
	return i;
}

/*
* ������Ϊ�������ݵ�ʱ�򣬻��Զ�תΪָ�룬���鳤�Ȼᶪʧ
* ���ָ�����鳤��
* 1������C�ַ������ַ����飩������ͨ���ж��Ƿ���\0����
* 2��ͨ�����ݱ�׼��begin()��end()���д���
* 3�������鳤����Ϊ����һ������һ�𴫵�
* 4��������������
*/

// 1���ַ�����
void print_char(const char *c)
{
	while (*c != '\0') {
		cout << *c << ' ';
		++c;
	}
	cout << endl;
}

// 2������begin��end
void print_arr(const int *begin, const int *end)
{
	while (begin != end)
	{
		cout << *begin++ << '\t';
	}
	cout << endl;
}

// 3���ѳ�����Ϊ�������ݣ� C���Ա�׼������ܶຯ������ôʵ�ֵ�
void print_arr(const int *arr, const size_t size)
{
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}

// 4��������������, ���Ų���ʡ������ǿ��ֻ�ܴ�7�������
void print_arr(const int(&arr)[7])
{
	for (int i : arr) {
		cout << i << '\t';
	}
	cout << endl;
}

/*
 * �ṹ����Ϊ��������
 * �ṹ��ͻ�����������һ������Ϊ�������ݣ�������ڴ濽��
 * ���Խṹ���βκ�ʵ�β�����ͬһ������
 * C�����п���ʹ�ô��ݽṹ��ָ���������ṹ���ڴ濽��
 * C++�п���ʹ�ô��ݽṹ���������Ч��
 * ͬ����ԭ���Ӧ���ڳ����������������
 */
typedef struct Point {
	int x;
	int y;
} cPoint, *mPoint;

// 1.���ݽṹ��
void print_struct1(cPoint point)
{
	cout << "x=" << point.x << "\ty=" << point.y << endl;
	// ����������ṹ�嶼���п���������Ч����ͣ������ڴ濽��
	point.x = 100;
	point.y = 200;
}

// 2.����ָ�룬C�����Ƽ�
void print_struct2(mPoint point)
{
	// ǳ������ֻ������ָ��ṹ���ָ�룬�ṹͼ�ڲ�û�б�����
	cout << "x=" << point->x << "\ty=" << point->y << endl;
	point->x = 100;
	point->y = 200;
}

// 3.��������, C++�Ƽ�
void print_struct3(cPoint &point)
{
	// �ʹ���ָ�����ͣ��ȴ���ָ�����㣬��ֱ��
	cout << "x=" << point.x << "\ty=" << point.y << endl;
	point.x = 100;
	point.y = 200;
}

/*
 * �����ɱ����
 * initializer_list �� vector һ����Ҳ������
 * ��ͬ����initializer_listֻ��װ����
 */
void print_strings(initializer_list<string> list)
{
	for(auto it = list.begin(); it != list.end(); ++it) {
		cout << *it << endl;
	}
}

int main()
{
	// ͨ������ָ���޸�ָ��ָ
	int i = 10;
	cout << i << endl;
	reset(&i);	// ͨ��ȡ��ַ��&ȡ��i�ĵ�ַ���ݸ�����
	cout << i << endl;

	// ���������ββ����������
	double d = 3.14;
	cout << d << endl;
	reset(d);
	cout << d << endl;

	// ��ʹ��const���β��������������������ᱨ��
	int location = find_char("Hello World", 'o');
	cout << location << endl;

	// �����������
	// ����1
	print_char("Hello World");

	// ����2
	int iarr[] = { 5, 8, 10, 4, 6, 7, 9 };
	print_arr(begin(iarr), end(iarr));

	// ����3
	print_arr(iarr, 7);

	// ����4
	print_arr(iarr);


	// C++�п���ʡ��struct, C���Բ���ʡ�ԣ�������typedef���¶��������
	struct Point point = { 10, 20 };
	cout << "1." << endl;
	print_struct1(point);
	cout << "x=" << point.x << "\ty=" << point.y << endl;

	cout << "2." << endl;
	print_struct2(&point);
	cout << "x=" << point.x << "\ty=" << point.y << endl;

	cout << "3." << endl;
	print_struct3(point);
	cout << "x=" << point.x << "\ty=" << point.y << endl;

	// �����ɱ����
	print_strings({"hello", "world"});
	print_strings({"a", "b", "c"});
	return 0;
}