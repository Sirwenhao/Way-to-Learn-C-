#include<iostream>
using namespace std;

//��ģ���г�Ա�����Ĵ���ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person1
{
public:

	void showPerson1()
	{
		cout << "show Person1" << endl;
	}
};

class Person2
{
public:

	void showPerson2()
	{
		cout << "show Person2" << endl;
	}
};

template<class T>
class MyClass
{
public:

	T obj;

	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1>m;
	m.func1();
	//m.func2();//��������˵���������òŻ�ȥ������Ա����
}

int main()
{
	test01();

	system("pause");

	return 0;
}