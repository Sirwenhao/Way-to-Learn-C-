#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ����

class Student 
{
public:

	//���е����Ժ���Ϊ ����ͳ��Ϊ��Ա
	//���� Ҳ��Ϊ��Ա���Ժͳ�Ա����
	//��Ϊ Ҳ��Ϊ��Ա�����ͳ�Ա����
	string s_Name;
	long long s_ID;

	//��Ϊ
	void Print()
	{
		cout << "������" << s_Name << endl;
		cout << "ѧ�ţ�" << s_ID << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		s_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setID(long long ID)
	{
		s_ID = ID;
	}

};

int main()
{
	//�������������
	Student S;

	//����������Ը�ֵ
	//S.s_Name = "�ĺ�";
	S.setName("�ĺ�");
	//S.s_ID = 20013082036;
	S.setID(20013082036);

	S.Print();

	system("pause");

	return 0;
}