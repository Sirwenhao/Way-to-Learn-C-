#include<iostream>
using namespace std;

//�������������
class Person 
{
	friend ostream& operator<<(ostream& cout, Person& p);//�����Ա������˽�еģ�����ͨ����Ԫ��һ��������

	//дһ�����캯��������ֵ
public:

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//���ó�Ա�������� ���������  p.operator<<(cout) �򻯰汾  p<<cout
	//�������ó�Ա��������<<���������Ϊ�޷�ʵ�� cout�����
	//void operator<<(cout)
	//{

	//}

	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ�����������<<�����
ostream &operator<<(ostream &cout ,Person &p)//���� operator<< (cout , p)����ʽcout << p
{
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	return cout;
}

void test01()
{
	Person p(10, 20);
	//p.m_A = 10;
	//p.m_B = 20;

	cout << p << endl; //���õ�����ʽ��̵�˼��
}

int main()
{
	test01();

	system("pause");

	return 0;
}