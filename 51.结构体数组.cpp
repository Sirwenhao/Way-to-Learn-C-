#include<iostream>
using namespace std;
#include<string>
//�ṹ������
	//1������ṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
int main()
{
	
	//2�������ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,100} ,
		{"����",19,90} ,
		{"����",20,80}
	};

	//3�����ṹ���е�����Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 24;
	stuArray[2].score = 97;

	//4�������ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << " ������ " << stuArray[i].name 
			 << " ���䣺 " << stuArray[i].age 
			 << " ������ " << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}