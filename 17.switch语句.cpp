#include<iostream>
using namespace std;
int main()
{
	//switch���
	//����Ӱ���
	//9~10 ����
	//7~8 �ǳ���
	//5~6 һ��
	//5������ ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���" << endl;

	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "������ķ���Ϊ " << score << endl;

	//3�������û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ��Ӱ�Ǹ���Ƭ" << endl;
		break;
	}

	//if��switch������
	//switchȱ�㣬�ж�ʱ��ֻ���Ǹ����λ����ַ��ͣ���������һ�����䷶Χ
	//�ŵ� �ṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}