#include <iostream>
#include <iterator>

// ����ָ�������ָ��
int (*getIntArrayPoint())[5]
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
	// ����ָ�������ָ��
	int (*arr)[5] = getIntArrayPoint();
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