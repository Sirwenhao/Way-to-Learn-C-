#include<iostream>
using namespace std;
int main()
{
	//��ֻС����أ����ж��Ǹ�����
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//���û�������ֻС�������
	cout << "������С��A������" << endl;
	cin >> num1;

	cout << "������С��B������" << endl;
	cin >> num2;

	cout << "������С��C������" << endl;
	cin >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;

	cout << "С��B������Ϊ��" << num2 << endl;

	cout << "С��C������Ϊ��" << num3 << endl;

	//�ж���ֻ����
	if (num1 > num2) 
	{
	
		if (num1 > num3) 
		{
		
			cout << "���ص�С��Ϊ��" << num1 << endl;
		}
		else 
		{
		
			cout << "���ص�С��Ϊ��" <<  num3 << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{

			cout << "���ص�С��Ϊ��" << num2 << endl;
		}
		else
		{

			cout << "���ص�С��Ϊ��" << num3 << endl;
		}

	}

	system("pause");

	return 0;
}