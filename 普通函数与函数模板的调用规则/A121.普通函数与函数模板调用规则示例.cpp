#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ��ĵ��ù���
//1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2������ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//3������ģ����Է�����������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "�������ص�ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;

	myPrint(a,b);

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a,b);


	//�������صĺ���ģ��
	myPrint(a, b, 100);

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);//��ͨ������ģ�嶼���Ե��ã����ǵ��ú���ģ����Ǹ��ŵ�ѡ��
}

int main()
{
	test01();

	system("pause");

	return 0;
}