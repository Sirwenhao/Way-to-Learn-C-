#include<iostream>
#include<string>
using namespace std;

//����ѧ���Ľṹ��
struct Student 
{
	string name;
	int age;
	int score;

};

//������ʦ�Ľṹ��
struct Teacher 
{
	int id;
	string name;
	int age;
	struct Student s;
};

int main()
{
	//�ṹ��Ƕ�׽ṹ���ʹ��
	//������ʦ

	Teacher t;
	t.id = 10086;
	t.name = "����";
	t.age = 50;  //����Ϊ��ʦ����
	t.s.age = 18;
	t.s.name = "С��";
	t.s.score = 99;  //����Ϊѧ������

	cout << "��ʦ������" << t.name << " ��ʦ�ı�ţ�" << t.id << " ��ʦ���䣺" << t.age
		<< " ѧ��������" << t.s.name << " ѧ�����䣺" << t.s.age << " ѧ��������" << t.s.score << endl;

	system("pause");

	return 0;
}