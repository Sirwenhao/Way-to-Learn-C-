#include<iostream>
using namespace std;

class Base1 
{
public:

	Base1()
	{
		m_A = 10;
	}
	int m_A;
};

class Base2
{
public:

	Base2()
	{
		//m_B = 20;
		m_A = 20;
	}
	//int m_B;
	int m_A;
};

//����  ��Ҫ�̳�Base1��Base2
//�﷨��class ����:�̳з�ʽ ����1,�̳з�ʽ ����2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 100;
		m_D = 200;
	}

	int m_C;
	int m_D;
};

void test01()
{
	Son s;

	cout << "sizeof Son = " << sizeof(s) << endl;

	//�������г���ͬ����Աʱ����Ҫͨ������������������
	cout << "Base1 �µ� m_A = " << s.Base1::m_A << endl;//��ʱ����������ԣ����ڱ������������ָ�����Ǹ���1�Ļ��Ǹ���2��
	cout << "Base2 �µ� m_A = " << s.Base2::m_A << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}