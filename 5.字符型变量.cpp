#include <iostream>
using namespace std;

int main()
{
	//1���ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << ch << endl;

	//2���ַ��ͱ�����ռ�ڴ�Ĵ�С
	cout << "�ַ��ͱ�����ռ���ڴ�ռ�Ϊ��" << sizeof(char) << endl;

	//3���ַ��ͱ��������Ĵ���
	//��һ���ǵ����Ŵ�дΪ˫���ţ��ڶ����ǵ�������д����ַ�


	//4���ַ��ͱ������ʱ��Ӧ��ASCII����
	cout << (int)ch << endl;//intǿ�ƽ��ַ��ͱ���chת��Ϊʮ����


	system("pause");

	return 0;
}