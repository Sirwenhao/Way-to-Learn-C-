#include<iostream>
using namespace std;

//ջ������ע�������Ҫ���ھֲ������ĵ�ַ
//ս���������ɱ����������ٺ��ͷ�

int * func()
{
	int a = 10; //�ֲ������������ջ����ջ�������ں���ִ������Զ��ͷ�
	return &a;

}

int main()
{
	//����func�����ķ���ֵ
	int* p = func();

	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ����������Ϊ����������һ�α���
	cout << *p << endl;

	system("pause");

	return 0;
}