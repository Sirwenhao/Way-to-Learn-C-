#include<iostream>
using namespace std;
int main()
{
	//��������;
	//1������ͨ��������ͳ����������ռ���ڴ�Ĵ�С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õĿռ�Ϊ " << sizeof(arr) << endl;
	cout << "��һ��Ԫ����ռ�ڴ�ռ�Ϊ " << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ " << sizeof(arr)/sizeof(arr[0]) <<endl;

	//2������ͨ���������Ʋ鿴������׵�ַ
	cout << "������׵�ַΪ " << (int)arr << endl;  //arrǰ��۸�intǿ��ת��Ϊʮ����
	cout << "�����еĵ�һ��Ԫ�صĵ�ַΪ " << (int)&arr[3] << endl;

	//��������һ���������ܽ��и�ֵ����

	system("pause");

	return 0;
}