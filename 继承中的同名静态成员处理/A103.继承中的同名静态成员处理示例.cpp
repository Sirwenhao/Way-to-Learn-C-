#include<iostream>
using namespace std;

class Base 
{
public:

	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)//������������
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base::m_A = 10;

//����
class Son:public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 100;

//ͬ����̬��Ա����
void test01()
{
	//1����һ��ͨ����������������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << "Son �µ� m_A = " << s.m_A << endl;
	cout << "Base �µ� m_A = " << s.Base::m_A << endl;

	//2���ڶ���ͨ����������������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son �µ� m_A = " << Son::m_A << endl;
	//��һ��::����ͨ�������ķ�ʽ����  �ڶ���::������ʸ�����������
	cout << "Base �µ� m_A = " << Son::Base::m_A << endl;

}

//ͬ����̬��Ա����
void test02()
{
	cout << "ͨ���������" << endl;
	//��һ��ͨ���������
	Son s;
	s.func();//ֱ�ӵ���Ĭ���������
	s.Base::func();

	//�ڶ���ͨ�������������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();

	//������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա����Ҫ��������
	Son::Base::func(100);
}


int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}