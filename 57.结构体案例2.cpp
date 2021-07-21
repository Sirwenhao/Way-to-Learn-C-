#include<iostream>
#include<string>
using namespace std;

//1������Ӣ�۽ṹ��
struct Hero 
{
	//����
	string name;

	//�Ա�
	string sex;

	//����
	int age;

};

//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//�ж����j�±��Ԫ�ش���j+1�±��Ԫ�أ��򽻻�
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}
}

int main()
{
	//2������һ������������Ӣ��
	struct Hero heroArray[5] =
	{
		{"����","��",23},
		{"����","��",22},
		{"�ŷ�","��",21},
		{"����","��",20},
		{"����","Ů",19},
	};

	//ʹ���������֤
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}


	//3��������������򣬰������������������
	bubbleSort(heroArray, len);

	//4���������Ľ����ӡ���
	cout << "�����" << endl;
	printHero(heroArray, len);

	system("pause");

	return 0;
}