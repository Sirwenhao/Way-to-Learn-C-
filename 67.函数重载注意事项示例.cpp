#include<iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����

void func(int& a) // int &a = 10; ���Ϸ�(func(10)��������£����������func����)
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a) // const int &a = 10;�൱�ڱ����������Ż���������һ����ʱ�Ŀռ䣬��ָ�������ʱ�ռ�
{
	cout << "func(const int &a)����" << endl;
}

void func2(int a,int b = 10) 
{
	cout << "func2(int a,int b)����" << endl;
}

void func2(int a) 
{
	cout << "func2(int &a)����" << endl;
}

int main()
{
	//
	//int a = 10;
	//func(a); // ���õ��ǵ�һ��func

	//func(10);

	//func2(10);  //��ʱ�������ᱨ����Ϊ����func2���������Ե��ã����ڶ�����.������������Ĭ�ϲ��������ֶ����ԡ�

	system("pause");

	return 0;
}