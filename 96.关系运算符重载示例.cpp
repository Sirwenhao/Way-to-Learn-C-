#include<iostream>
#include<string>
using namespace std;

//���ع�ϵ�������==��!=��

class Person 
{
public:

	Person(string name, int age)//���ù��캯�������������丳��ֵ
	{
		m_Age = age;
		m_Name = name;
	}

	//���ع�ϵ�����==��
	bool operator==(Person &p)//��Ա�������õĲ�������Ҫ����һ������
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			//cout << "p1����p2" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	//���ع�ϵ�����!=��
	bool operator!=(Person &p)
	{
		if (this->m_Name != p.m_Name && this->m_Age != p.m_Age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 18);

	Person p2("Tom", 18);

	if (p1 == p2)//�Զ�������޷�ʹ��C++Ĭ�ϵĹ�ϵ������������Ҫ����
	{
		cout << "p1��p2��ȵ�" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1��p2�����" << endl;
	}
	else
	{
		cout << "p1��p2���" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}