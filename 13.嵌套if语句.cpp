#include<iostream>
using namespace std;
int main()
{
	/*
	- ��ʾһ�û�����߿����������ݷ����������ж�

	- �����������600����Ϊ����һ��������500����Ϊ���϶���������400����Ϊ����������������Ϊδ���ϱ���

	- ��һ�������У�����700�֣������廪������650�֣����뱱�󣬴���600�֣������˴�

	*/

	//1����ʾ����߿�����
	int score = 0;
	cout << "���������ĸ߿�������" << endl;
	cin >> score;


	//2����ʾ�߿�����
	cout << "������ĸ߿�����Ϊ��" << score << endl;

	//3���ж�
	if (score > 600) 
	{
	
		cout << "����һ����ѧ" << endl;
		if (score > 700) 
		{
		
			cout << "��ϲ�������廪��ѧ" << endl;
		}
		else if (score > 650) 
		{
		
			cout << "��ϲ�����뱱����ѧ" << endl;
		}
		else 
		{
		
			cout << "��ϲ�����������ѧ" << endl;
		}
	}
	else if (score > 500) 
	{
	
		cout << "���϶�����ѧ" << endl;
	}
	else if (score > 400) 
	{
	
		cout << "����������ѧ" << endl;
	}
	else 
	{
	
		cout << "δ����" << endl;
	}

	system("pause");

	return 0;
}