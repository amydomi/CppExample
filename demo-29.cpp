#include <iostream>

// typename �����滻Ϊclass�� typename�Ǻ�����֧�ֵĹؼ��ʣ��ɵ�д��ʹ��class

// �����ָ࣬��ʹ��ģ��
template <typename T> class Calculate {
public:
	Calculate();
	T add(T a, T b);
};

// ����ģ����Ĺ��캯��
template <typename M>
Calculate<M>::Calculate()
{
	std::cout << "Test constructor." << std::endl;
}

// �����෽��
template <typename T>
T Calculate<T>::add( T a, T b)
{
	return a + b;
}

// ����ģ��
template<typename T> T Add(T a, T b)
{
	return a + b;
}

// ���Ͳ����ͷ����Ͳ���
// ���� T Ϊ���Ͳ����� base Ϊ�����Ͳ���
template <typename T, int base> T addTo(int b)
{
	return base + b;
}

int main()
{
	// ʹ��ģ���ഴ������
	Calculate<int> a;
	std::cout << a.add(10, 20) << std::endl;

	Calculate<double> b;
	std::cout << b.add(10.5, 8.32) << std::endl;

	// ʹ�ú���ģ��
	std::cout << Add<int>(10, 20) << std::endl;
	std::cout << Add<double>(10.25, 8.31) << std::endl;

	// ���Է����Ͳ���
	std::cout << addTo<int, 20>(10) << std::endl;
	return 0;
}