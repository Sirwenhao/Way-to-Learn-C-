#include<iostream>
using namespace std;

//��ģ��ķ��ļ���д�����Լ����

//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "����Ϊ��" << this->m_Name << endl;
//	cout << "����Ϊ��" << this->m_Age << endl;
//}

//#include "person.h" //��������±��������ɴ���ᱨ�����������޸�Ϊ#include "person.cpp"���ɳɹ����У���һ�ֽ����ʽ��
//ԭ����ģ���еĳ�Ա����һ��ʼ�ǲ��ᴴ���ģ����Ե������Ӳ���person.cpp�еĴ��룬�����ֱ�Ӱ���person.cpp�Ϳ��Խ�ͷ�ļ���cpp�ļ���������������һ��û��ֱ�Ӱ���cpp�ļ���
//����Ը��������ģ���еĳ�Ա�����Ĵ���ʱ�����ڵ��ý׶Σ�ֻ�е��òŻᴴ����һ��ʼ���ᴴ��
//�ڶ��ֽ����ʽ�����õĽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺���޸�Ϊ.hpp�ļ�
#include "person.hpp"

void test01()
{
	Person <string, int>p("Jerry", 18);
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}