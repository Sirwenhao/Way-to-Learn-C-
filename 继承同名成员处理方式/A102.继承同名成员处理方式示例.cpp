#include<iostream>
using namespace std;

//�̳���ͬ����Ա�Ĵ���ʽ
class Base 
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func()����" << endl;
	}

	void func(int a)//�����к���������
	{
		cout << "Base-func(int a)����" << endl;
	}

	int m_A;
};

class Son :public Base
{
public:

	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func()����" << endl;
	}

	int m_A;
};

//ͬ����Ա���ԵĴ���ʽ
void test01()
{
	Son s;
	cout << "Son �µ� m_A = " << s.m_A << endl;//��ô�������ˣ�s.m_A��100����200�����𰸣�200��
	
	//���ͨ��������� ���ʵ������е�ͬ����Ա����Ҫ��������
	cout << "Base �µ� m_A = " << s.Base::m_A << endl;//����������Base::�Ϳ����ˡ�
}

//ͬ����Ա�����Ĵ���ʽ
void test02()
{
	Son s;
	s.func();//ֱ�ӵ��� ������������ͬ����Ա

	//��ε��õ������ͬ����Ա������ָ��������
	s.Base::func();

	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ������б����ص�ͯ����Ա��������Ҫ��������
	s.Base::func(100);
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}