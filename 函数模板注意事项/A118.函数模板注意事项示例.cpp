#include<iostream>
using namespace std;

//����ģ���ע������


template<class T> // typename�����滻��class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1���Զ������Ƶ��������Ƶ���һ�µ���������T
void test01()
{
	int a = 10;
	int b = 20;
	double c = 3.14;
	mySwap(a, b);
	//mySwap(a, c);//�������Ͳ�ƥ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func�����ĵ���" << endl;
}

void test02()
{
	func<int>();//�����Ƶ�����T���������ͣ�Ҫ��ʹ��ֻ���Լ������������ͣ�����<int>
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}