// ����Ҫ��ͷ�ļ���Դ�ļ���������

#include"swap.h"  // ˫���ű�ʾͷ�ļ����Զ����

//��������
void swap(int a, int b)   //����Ҫ����ֵ
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}