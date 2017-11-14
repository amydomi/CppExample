#include <iostream>

// typename 可以替换为class， typename是后来才支持的关键词，旧的写法使用class

// 声明类，指定使用模板
template <typename T> class Calculate {
public:
	Calculate();
	T add(T a, T b);
};

// 定义模板类的构造函数
template <typename M>
Calculate<M>::Calculate()
{
	std::cout << "Test constructor." << std::endl;
}

// 定义类方法
template <typename T>
T Calculate<T>::add( T a, T b)
{
	return a + b;
}

// 函数模板
template<typename T> T Add(T a, T b)
{
	return a + b;
}

// 类型参数和非类型参数
// 其中 T 为类型参数， base 为非类型参数
template <typename T, int base> T addTo(int b)
{
	return base + b;
}

int main()
{
	// 使用模板类创建对象
	Calculate<int> a;
	std::cout << a.add(10, 20) << std::endl;

	Calculate<double> b;
	std::cout << b.add(10.5, 8.32) << std::endl;

	// 使用函数模板
	std::cout << Add<int>(10, 20) << std::endl;
	std::cout << Add<double>(10.25, 8.31) << std::endl;

	// 测试非类型参数
	std::cout << addTo<int, 20>(10) << std::endl;
	return 0;
}