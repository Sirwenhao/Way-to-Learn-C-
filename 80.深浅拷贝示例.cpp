#include<iostream>
using namespace std;

//�����ǳ��������

class Person 
{
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	//�вι��캯��
	Person(int age, int height)
	{
		cout << "Person���вι��캯������" << endl;

		m_age = age;
		m_height = new int(height);
	}
	//�������캯��
	Person(const Person &p)
	{
		cout << "�������캯��!" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶӶ�������
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}

	//��������
	~Person()
	{
		cout << "��������" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}

public:
	int m_age;//����
	int * m_height;
};

void test01()
{
	Person p1(18, 180);

	Person p2(p1);


	cout << "p1������Ϊ��" << p1.m_age << "���" << *p1.m_height << endl;

	cout << "p1������Ϊ��" << p2.m_age << "���" << *p2.m_height << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}