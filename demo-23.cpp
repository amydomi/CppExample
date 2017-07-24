/*
 * ����
 * int a[10];		// ���10��int����ֵ������
 *
 * ָ������ 
 * int *a[10];		// ���10��int����ָ�������
 *
 * ����ָ��
 * int (*a)[10];	// ָ��10��int���������ָ��
 *
 * ��������
 * int (&a)[10];	// 10��int�������������
 */
 
#include <iostream>
#include <iterator>

// ����ָ�������ָ��
int (*getIntArrayPointer())[5]
{
	// ��Ϊ���ܷ��ؾֲ�����ָ�룬����������static����
	static int arr[5] = {1, 2, 3, 4, 5};
	return &arr;
}

// ������������
int (&getIntArrayQuote())[5]
{
	static int arr[5] = { 4, 5, 6, 7, 8 };
	return arr;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };	// ����
	int(*pArr)[5] = &arr;	// ָ�������ָ��
	int(&qArr)[5] = *pArr;	// ��������
	for (auto it = std::begin(qArr); it != std::end(qArr); ++it)
	{
		std::cout << *it << std::endl;
	}
	
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int *arrAddr[5] = { &a, &b, &c, &d, &e };	// ����һ������ָ�룬��Ŷ���int���͵ĵ�ַ
	for (auto it = std::begin(arrAddr); it != std::end(arrAddr); ++it)
	{
		std::cout << **it << std::endl;
	}
	
	
	// ����ָ�������ָ��
	int (*arr)[5] = getIntArrayPointer();
	for (auto it = std::begin(*arr); it != std::end(*arr); ++it)
	{
		std::cout << *it << std::endl;
	}

	// ������������
	int(&arr2)[5] = getIntArrayQuote();
	for (auto it = std::begin(arr2); it != std::end(arr2); ++it)
	{
		std::cout << *it << std::endl;
	}

	return 0;
}