#include<iostream>
using namespace std;

//��������

int add(int num1, int num2)//num1��num2��Ϊ��ʽ������û����ʵ�����ݣ��β�
{
	int sum = num1 + num2;

	return sum;
}



int main()
{
	//��main�����е���add����

	int a = 10;
	int b = 22;

	//�������õ��﷨����������(����)
	//a��b��Ϊʵ�ʲ�����ʵ��
	//�ڵ��ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��������β�
	int c = add(a, b);
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}