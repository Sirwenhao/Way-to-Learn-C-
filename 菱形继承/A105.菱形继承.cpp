#include<iostream>
using namespace std;

//������
class Animal 
{
public:
	int m_Age;
};

//������̳п��Խ�����μ̳е�����
//�ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// Animal ��ʱ����Ϊ�����
//����
class Sheep :virtual public Animal {};

//����
class Camel :virtual public Animal {};

//������
class Alpaca :public Sheep, public Camel{};

void test01()
{
	Alpaca st;

	st.Sheep::m_Age = 18;
	st.Camel::m_Age = 20;
	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Camle::m_Age = " << st.Camel::m_Age << endl;

	//����virtual�ؼ���֮��Ҳ�������ָ����ȷ������
	cout << "st.m_Age = " << st.m_Age << endl;

	//�������������������ݣ�ֻ��Ҫһ�ݼ��ɡ����μ̳е������������ݣ��˷���Դ
}

int main()
{
	test01();

	system("pause");

	return 0;
}