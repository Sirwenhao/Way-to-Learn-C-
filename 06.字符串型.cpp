#include<iostream>
//C++�����Ҫ���ȶ���ͷ�ļ�
#include<string>
using namespace std;

int main()
{

	//1��C�����ַ���
	//ע������A��char �ַ����� []�����������Ų��ܶ�
	//ע������B���Ⱥ�֮������˫���Ž��ַ���ֵ��������
	char str[] = "hello world";
	cout << str << endl;

	//2��C++����ַ���
	string str2 = "hello world";
	cout << str2 << endl;//C++�����Ȼд������Լ򵥣����Ǳ����ȶ���ͷ�ļ�����

	system("pause");

	return 0;
}