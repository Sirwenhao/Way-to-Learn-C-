#include<iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person 
{
public:

	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա������ ���Է��� ��̬�ĳ�Ա����
		//m_B = 200;//�Ǿ�̬��Ա������ �����Է��� �Ǿ�̬�ĳ�Ա����
		//�Ǿ�̬��Ա����m_B����ͨ��������ܷ��ʣ����ǵ����ú���funcʱ����֪���ı������һ�������m_B
		cout << "static void func����" << endl;
	}

	static int m_A;//��̬��Ա�������ص㣺���������������ʼ����
	int m_B;//�Ǿ�̬��Ա����


	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};

int Person::m_A = 0;

//�����ַ��ʷ�ʽ
void test01()
{
	//1��ͨ���������
	Person p;
	p.func();

	//2��ͨ����������
	Person::func();

	//Person::func2();//������ʲ���˽�еľ�̬��Ա����

}



int main()
{
	

	system("pause");

	return 0;
}