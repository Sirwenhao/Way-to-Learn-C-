#include<iostream>
using namespace std;

//��������

//1��ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "Swap01�е�a = " << a << endl;
//	cout << "Swap01�е�b = " << b << endl;
//}

//2����ַ����
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//	cout << "Swap01�е�a = " << *a << endl;
//	cout << "Swap01�е�b = " << *b << endl;
//}


//3�����ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "Swap01�е�a = " << a << endl;
	cout << "Swap01�е�b = " << b << endl;
}


int main()
{
	int a = 10;
	int b = 20;

	//mySwap01(a, b);//ֵ�����ββ�������ʵ��
	//mySwap02(&a, &b);//��ַ�����βλ�����ʵ��
	mySwap03(a, b);//���ô����β�Ҳ������ʵ��

	//�����β�����ʵ�ι������ַ�������ַ���ݺ����ô���

	cout << "a = " << a << endl;  //�ڶ��������a��b��ֵ�����ı�
	cout << "b = " << b << endl;


	system("pause");

	return 0;
}