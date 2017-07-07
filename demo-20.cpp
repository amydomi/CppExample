#include <iostream>
#include <string>
#include <iterator>	// 数组迭代器 begin() 和 end() 定义在这里面

int main()
{
	int arrInt[] = {20, 30};
	
	// 指针和数组操作上是可以互换的
	int *p1 = arrInt;	//和 int *p = &arrInt[0]; 系统
	std::cout << p1[1] << std::endl;	// 指针也可以通过下标访问数组值
	// 指针可以自增自减移动指向的位置，数组名不行
	//p1++;	//OK
	//arrInt;	//Error
	
	auto ia(arrInt);	//ia初始化为int指针，相同 int *ia = &arrInt[0];
	//int ia = arrInt // 不允许这样写
	
	std::cout << *ia << std::endl;
	
	// 使用下标遍历数组
	int arr1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	for(int i = 0; i < 9; ++i) {
		std::cout << arr1[i] << std::endl;
	}
	
	// 使用迭代器遍历数组
	int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	for(int *i = std::begin(arr2); i != std::end(arr2); ++i) {
		std::cout << *i << std::endl;
	}
	return 0;
}