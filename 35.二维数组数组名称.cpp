#include<iostream>
using namespace std;
int main()
{
	//��ά��������

	//1�����Բ鿴ռ�õ��ڴ�ռ��С
	int arr[2][3] = { {2,3,1},{6,9,8} };
	cout << "��ά������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;

	//ͳ�������ж����ж�����
	cout << "��ά���������Ϊ��" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	//2�����Բ鿴�ڴ���׵�ַ
	cout << "��ά������׵�ַΪ: " << arr << endl;
	cout << "��ά�����һ�е��׵�ַΪ: " << arr[0] << endl;

	//����ǿ�ĳ��ȷ����Ԫ�صĵ�ַҪ��&����
	cout << "��һ��Ԫ�صĵ�ַΪ: " << &arr[1][0] << endl;

	system("pause");

	return 0;
}