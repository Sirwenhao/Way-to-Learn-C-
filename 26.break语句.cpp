#include<iostream>
using namespace std;
int main()
{
	//break��ʹ��ʱ��

	////1��������switch�����
	//cout << "ѡ���Ѷ�" << endl;
	//cout << "1������" << endl;
	//cout << "2��һ��" << endl;
	//cout << "3����" << endl;

	//int select = 0;
	//cout << "������ѡ���Ѷ�" << endl;
	//cin >> select;

	//switch (select)
	//{
	//	case 1:
	//		cout << "��ѡ���������" << endl;
	//		break;
	//	case 2:
	//		cout << "��ѡ�����һ��" << endl;
	//		break;
	//	case 3:
	//		cout << "��ѡ����Ǽ�" << endl;
	//		break;
	//	default:
	//		break;
	//} 

	////2��������ѭ�������
	//for (int i = 0; i < 10; i++)
	//{
	//	//���i����5�˳�ѭ��

	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}
		
	

	//3��������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}