#include<iostream>
#include<string>
using namespace std;
int main()
{
	//��ά���鰸��-���Գɼ�ͳ��

	//1��������ά����
	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };

	string names[3] = { "����","����","����" };

	//2��ͳ��ÿ���˵ķ����ܺ�

	for (int i = 0; i < 3; i++)
	{
		int score = 0;
		for (int j = 0; j < 3; j++)
		{

			score += scores[i][j];
			//cout << score;
		}
		cout << names[i] << "�ķ����ܺ�Ϊ��" << score << endl;
	}

	system("pause");

	return 0;
}