#include<iostream>
#include<string>
using namespace std;

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:
	//Phone m_Phone = pName  ��ʽת����
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}

	string m_PName;
};

//����
class Person
{
public:

	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	//����
	string m_Name;

	//�ֻ�
	Phone m_Phone;
};

void test01()
{
	Person p("����", "Apple 12 pro MAX");

	cout << p.m_Name << "ʹ��" << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}