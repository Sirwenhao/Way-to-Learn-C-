#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�����  �����õĳ�Ա����  �����Ķ���
		this->age = age;//�˴���p1�ڵ������thisָ��p1
	}

	Person &PersonAddAge(Person &p)//���Ҫ���ر��壬���������õ���ʽ����
		//�����õķ�ʽ���أ����ᴴ���µĶ��󣻰�����ֵ�ķ�ʽ���أ��ᴴ���µĶ��󡣴˴�˼���°�����ֵ�ķ�ʽ�������������Ƕ��٣���20��
	{
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;//�˴�֮ǰ��д������m_Age�������������ֳ�Ա���������������ͬ������Person�������ڵ�age������ľͲ�һ������˿���ʹ��thisָ��������
};

//1��������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}


//2�����ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);

	//ʵ��һ������һ���˵�����ӵ���������Ĳ���

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2������Ϊ���" << p2.age << endl;

}


int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}