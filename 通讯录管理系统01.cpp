// ��װ������ʾ�ý��棬��void showMenu()
// ��main�����е��÷�װ�õĺ���


#include<iostream>
using namespace std;

// �˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳���ϵ��  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	int select = 0; // �����û�ѡ������ı���


	while (true) 
	{
		//��������showMenu()
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:; break; // 1�������ϵ��
		case 2:; break; // 2����ʾ��ϵ��
		case 3:; break; // 3��ɾ����ϵ��
		case 4:; break; // 4��������ϵ��
		case 5:; break; // 5���޸���ϵ��
		case 6:; break; // 6�������ϵ��
		case 0:cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			break; // 0���˳���ϵ��
			return 0;
		default:; break; //
		}
	}
	
	system("pause");

	return 0;
}