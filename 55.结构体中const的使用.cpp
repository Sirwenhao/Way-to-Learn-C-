#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���

struct Student
{
	string name;
	int age;
	int score;
};

//���������βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ�Ƴ��µĸ�����
void printStudent(Student *s)
{
	//s->age = 150; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ��������� 
	cout << "������" << s->name << " ���䣺" << s->age << " �÷֣�" << s->score << endl;
}

int main()
{
	//�����ṹ�����

	struct Student s = {"����",15,88};

	//ͨ��������ӡ�ṹ��

	printStudent(&s);

	system("pause");

	return 0;
}