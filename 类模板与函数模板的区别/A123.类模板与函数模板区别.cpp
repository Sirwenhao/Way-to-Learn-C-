#include<iostream>
#include<string>
using namespace std;

//��ģ���뺯��ģ������
template<class NameType,class AgeType = int>//ֱ���ڴ˴�����Ĭ���������ͣ������������ʱ�Ͳ����ٸ�
class Person 
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name=" << this->m_Name << "  age=" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//Person p("�����",999);//�����޷����Զ������Ƶ�ʵ��
	Person<string, int>p("�����",99);//ֻ������ʾָ������

	p.showPerson();
}


//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string>p("��˽�",1000);//�����Ѿ�ָ�������Ͳ���Ҫ��ָ����������,���������ں���ģ�����ǲ�����ģ�ֻ������ģ���в�����

	p.showPerson();
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}