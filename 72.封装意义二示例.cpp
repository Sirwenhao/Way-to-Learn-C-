#include<iostream>
using namespace std;

//����Ȩ��  ����
// ����Ȩ�� public      ��Ա���ڿ��Է��ʣ�����Ҳ���Է���
// ����Ȩ�� protected   ��Ա���ڿ��Է��ʣ����ⲻ���Է���
// ˽��Ȩ�� private     ��Ա���ڿ��Է��ʣ����ⲻ���Է��� ������Է��ʸ����еı�������
// ����Ȩ�޺�˽��Ȩ�޵Ĳ�����ڼ̳У��ڼ̳е��﷨���������� ���಻���Է��ʸ����е�˽������

class Person
{
	//����Ȩ��
public:
	string m_Name;

protected:
	//����Ȩ��
	string m_Car;

private:
	//˽��Ȩ��
	string m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main()
{
	//ʵ�����������
	Person p1;
	p1.m_Name = "����";
	//p1.m_car = "����"; // ����Ȩ�����ݣ���������ʲ���
	//p1.m_Password = 123; // ˽��Ȩ�����ݣ���������ʲ���

	system("pause");

	return 0;
}