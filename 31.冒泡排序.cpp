#include<iostream>
using namespace std;
int main() 
{
	//����ð������ʵ����������
	int arr[10] = { 1,3,5,7,2,4,6,8,9,0 };
	cout << "����ǰ��" << sizeof(arr)/sizeof(arr[0]) << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//��ʼð������
	//�ܵ���������Ϊ��Ԫ�ظ���-1
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//�ڲ�ѭ���Աȴ�����Ԫ�ظ���-��ǰ����-1
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)
		{
			//���ǰһ�����ֱȺ�һ�����ִ󣬽�����������
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	//�����Ľ��
	cout << "�����Ľ��Ϊ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



	system("pause");

	return 0;
}