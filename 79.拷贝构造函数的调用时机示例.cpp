#include<iostream>
using namespace std;

//�������캯���ĵ���ʱ��



class Person 
{
public:
	Person()
	{
		cout << "personĬ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age)
	{
		cout << "person�вι��캯���ĵ���" << endl;
		m_Age = age;
	}
	Person(const Person &p)
	{
		cout << "person�������캯���ĵ���" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "personĬ�����������ĵ���" << endl;
	}

	int m_Age;
};

//1��ʹ��һ���Ѿ������õĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);//p2��p1���ϵ����Զ�������

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}


//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p3)
{

}

void test02()
{
	Person p3;
	doWork(p3);
}


//3��ֵ��ʽ���ؾֲ�����
Person doWork1()
{
	Person p4;
	cout << (int*)&p4 << endl;
	return p4;
}

void test03()
{
	Person p = doWork1();
	cout << (int*)&p << endl;
}

int main()
{
	test01();
	test03();

	system("pause");

	return 0;
}