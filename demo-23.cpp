/*
 * 数组
 * int a[10];		// 存放10个int类型值的数组
 *
 * 指针数组 
 * int *a[10];		// 存放10个int类型指针的数组
 *
 * 数组指针
 * int (*a)[10];	// 指向10个int类型数组的指针
 *
 * 数组引用
 * int (&a)[10];	// 10个int类型数组的引用
 */
 
#include <iostream>
#include <iterator>

// 返回指向数组的指针
int (*getIntArrayPointer())[5]
{
	// 因为不能返回局部变量指针，所以声明成static变量
	static int arr[5] = {1, 2, 3, 4, 5};
	return &arr;
}

// 返回数组引用
int (&getIntArrayQuote())[5]
{
	static int arr[5] = { 4, 5, 6, 7, 8 };
	return arr;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };	// 数组
	int(*pArr)[5] = &arr;	// 指向数组的指针
	int(&qArr)[5] = *pArr;	// 数组引用
	for (auto it = std::begin(qArr); it != std::end(qArr); ++it)
	{
		std::cout << *it << std::endl;
	}
	
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int *arrAddr[5] = { &a, &b, &c, &d, &e };	// 定义一个数组指针，存放都是int类型的地址
	for (auto it = std::begin(arrAddr); it != std::end(arrAddr); ++it)
	{
		std::cout << **it << std::endl;
	}
	
	
	// 遍历指向数组的指针
	int (*arr)[5] = getIntArrayPointer();
	for (auto it = std::begin(*arr); it != std::end(*arr); ++it)
	{
		std::cout << *it << std::endl;
	}

	// 遍历数组引用
	int(&arr2)[5] = getIntArrayQuote();
	for (auto it = std::begin(arr2); it != std::end(arr2); ++it)
	{
		std::cout << *it << std::endl;
	}

	return 0;
}