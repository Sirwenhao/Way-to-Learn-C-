#include<iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//����������������Ȼ������,��С������ȥ��

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;//�˲�������������ȥ����С�����ֵ�.5����˽��Ϊ0

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;//��������Ϊ0�������Ƿ�

	//С�����
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	//ȡģ����ı��ʾ���������
	int e1 = 10;
	int e2 = 3;

	cout << e1 % e2 << endl;

	int f1 = 10;
	int f2 = 20;

	cout << f1 % f2 << endl;

	//C++����������С����ȡģ����

	//1��ǰ�õ���
	int a = 10;
	++a;//�ñ���+1
	cout << "a = " << a << endl;

	//2�����õ���
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ������
	int g1 = 10;
	int g2 = ++g1 * 10;
	cout << "g1 = " << g1 << endl;
	cout << "g2 = " << g2 << endl;

	//���õ��� �Ƚ��б��ʽ�����㣬���ñ���+1
	int g3 = 10;
	int g4 = g3++ * 10;
	cout << "g3 = " << g3 << endl;
	cout << "g4 = " << g4 << endl;

	system("pause");

	return 0;
}