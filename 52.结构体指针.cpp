#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
//����ѧ���ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{

	//1������ѧ���ṹ�����
	struct Student s = {"����" ,18,100};

	//2��ͨ��ָ��ָ��ṹ��
	//int* p = &s;  //�Ⱥ����Ҳ�����ָ���ǲ����ݵ�
	struct Student* p = &s;

	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���� ' -> '
	//s.name;  //��ʹ��ָ�������£�����ʹ��.ȥ����ָ��ı�������˾�

	cout << "����Ϊ��" << p->age << endl;
	cout << "����Ϊ��" << p->name << endl;
	cout << "����Ϊ��" << p->score << endl;

	p->score;  // ʹ��ָ��ķ���

	system("pause"); 

	return 0;
}