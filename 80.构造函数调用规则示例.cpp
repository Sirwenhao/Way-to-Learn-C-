#include<iostream>
using namespace std;

//���캯���ĵ���ʾ��
//1������һ���࣬C++���������ÿ���඼���������������
//Ĭ�Ϲ��캯��(��ʵ��)
//��������(��ʵ��)
//�������캯��(ֵ����)


//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ�����Ĺ��캯��������Ĭ�Ϲ��캯����
class Person 
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}

	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

void test01()
{
	Person p;
	p.m_Age = 18;

	Person p2(p);

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

void test02()
{
	//����û��ṩ�вι��죬�����������ṩĬ�Ϲ��죬���ṩ��������
	Person p1;//��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
	Person p2(10);//�û��ṩ���в�
	Person p3(p2);//��������û�û���ṩ�������죬���������ṩ

	//����û��ṩ�������죬�����������ṩ�������캯��
	Person p4;//�����û��Լ�û���ṩĬ�Ϲ��죬�����
	Person p5(10);//��������û��Լ�û���ṩ�вΣ������
	Person p6(p5);//�û��Լ��ṩ��������
}

int main()
{
	test01();

	system("pause");

	return 0;
}