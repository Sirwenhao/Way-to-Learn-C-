#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ�� ����ʽָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a,int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a,T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a - 97 c - 99����Ӧ��ASCII��ֵ
	cout << myAdd01(a, c) << endl;//������ʽת�������ַ��͵�cת��int�ͣ�������ASCII��������


	//����ģ����á����Զ������Ƶ�
	//cout << myAdd02(a, c) << endl;//�����Է�����ʽ����ת�����ᱨ��

	//����ģ����á�����ʾָ������
	cout << myAdd02<int>(a, c) << endl;//ʹ��<int>��ʾָ�����ͣ����ᱨ��
}

int main()
{
	test01();

	system("pause");
	
	return 0;
}