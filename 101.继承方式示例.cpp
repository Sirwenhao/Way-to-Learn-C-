#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1 
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
		m_B = 20;//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//m_C = 30;//�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;//����Ȩ�����ڿ��Է��ʣ�����ͬ�����Է���
	//s1.m_B = 120;//����Ȩ�����ڿ��Է��ʣ����ⲻ���Է���
}

//�����̳�
class Base2
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 120;//�����б�����Ա���������б�Ϊ������Ա
		//m_C = 130;//�����Ժ��ַ�ʽ�̳У������е�˽�г�Ա������ʲ���
	}
};

void test02()
{
	Son2 s1;
	//s1.m_A = 000;//��Son2�� m_A��Ϊ����Ȩ�ޣ����������ʲ���
	//s1.m_B = 111;//��Son2�� m_B��Ϊ����Ȩ�ޣ����ⲻ���Է���
}

//˽�м̳�
class Base3 
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 11;//�����еĹ�����Ա���������б�Ϊ˽�г�Ա
		m_B = 12;//�����еı�����Ա���������б�Ϊ˽�г�Ա
		//m_C = 13;//������˽�г�Ա�����޷�����
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 1000;//����Son3�У�m_A��Ϊ˽�У���ʹ�����࣬Ҳ�޷����ʸ���˽������
		//m_B = 1200;//ͬ��
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 213;//������Son3�к󣬱�Ϊ˽�г�Ա�������޷�����
	//s1.m_B = 123;//ͬ��
	//s1.m_C = 234;//ͬ��
}

int main()
{


	system("pause");

	return 0;
}