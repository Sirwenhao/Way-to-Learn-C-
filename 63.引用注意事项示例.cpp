#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//1�����ñ����ʼ����������ȷָ��
	//int& b;  //����д���Ǵ���ģ�û����ȷָ�����õĶ���
	int& b = a;

	//2�����ó�ʼ��֮�󣬲����Ը���
	int c = 20;

	b = c;//�˴��Ѿ��Ǹ�ֵ���������Ǹ�������

	cout << "a = " << a << endl;  //�˴�����һ��a��ֵ����ô��Ϊ20��
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");

	return 0;
}