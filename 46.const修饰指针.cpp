#include<iostream>
using namespace std;
int main()
{
	//1��const����ָ��
	int a = 10;
	int b = 20;

	const int * p = &a;
	//�ص���ָ��ָ���ֵ�������޸ģ�ָ���ָ������޸�
	//*p = 20;  //����
	p = &b; //��ȷ

	//2��const���γ���  ָ�볣��
	int* const p2 = &a;
	*p2 = 100;  //��ȷ
	//p2 = &b;   //����

	//3��const����ָ��ͳ���
	const int * const p3 = &a;
	//*p3 = 100;  //����
	//p3 = &b;    //����

	system("pause");

	return 0;
}