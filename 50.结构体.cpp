#include<iostream>
using namespace std;
#include<string>

	//1������ѧ����������  ѧ����Ϣ���������������䡢����

struct Student  //�ṹ�嶨���ǹؼ���struct����ʡ��
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;  //;���ܶ�,˳�㴴���ṹ�����s3,s3���ڴ����ṹ��ʱ˳�㴴���Ľṹ��������ױ�����

//2��ͨ��ѧ���������ͣ���������ѧ��


int main()
{
	//2.1��struct Student s1
	struct Student s1;  //�ṹ���������ʱ���ؼ���struct����ʡ��
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " " << " ���䣺" << s1.age << " " << " ������" << s1.score << endl;


	//2.2��struct Student s2 = {...}
	struct Student s2 = { "����", 19, 80 };
	cout << "������" << s2.name << " " << " ���䣺" << s2.age << " " << " ������" << s2.score << endl;

	//2.3���ڶ���ṹ���ʱ��˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " " << " ���䣺" << s3.age << " " << " ������" << s3.score << endl;

	system("pause");

	return 0;
}