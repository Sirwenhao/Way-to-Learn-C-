#include<iostream>
using namespace std;
int main()
{
	//ʵ������Ԫ������

	//1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2��ʵ������
	//2.1����¼��ʼ�±��λ��
	//2.2����¼�����±��λ��
	//2.3����ʼ�±�������±��Ԫ�ػ���
	//2.4����ʼλ��++  ����λ��--
	//2.5��ѭ��ִ��

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	
	while (start < end)
	{
		int temp = arr[end];
		arr[end] = arr[start];
		arr[start] = temp;
		start++;
		end--;

	}

	//3����ӡ���ú������
	cout << "Ԫ�����ú��˳��Ϊ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	
	system("pause");

	return 0;
}