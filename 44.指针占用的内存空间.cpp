#include<iostream>
using namespace std;

int main()
{
	//ָ����ռ�õ��ڴ�ռ�

	int a = 10;
	//int* p;
	//p = &a;

	//�������д�����Եȼ��滻Ϊ��
	int* p = &a;

	//��x86ϵͳ��32λ����ϵͳ�����£�ָ��Ĭ�϶����ĸ��ֽ�
	//��x64ϵͳ��64λ����ϵͳ�����£�ָ��Ĭ�϶��ǰ˸��ֽ�
	//����ָ����ռ�ڴ�Ĵ�С�����������޹�

	cout << "sizeof (int *) = " << sizeof(int *) << endl;
	cout << "sizeof (float *) = " << sizeof(float *) << endl;
	cout << "sizeof (double *) = " << sizeof(double *) << endl;
	cout << "sizeof (char *) = " << sizeof(char *) << endl;

	system("pause");

	return 0;
}