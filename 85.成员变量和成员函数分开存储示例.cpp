#include<iostream>
using namespace std;

//��Ա���� �� ��Ա���� �ֿ��洢��

class Person 
{
	int m_A;// �Ǿ�̬��Ա����  ������Ķ����ϵ� ����test02���Ϊ4���ֽ�

	static int m_B; // ��̬��Ա���� ��������Ķ����ϵ�  ����test02���Ҳ��4���ֽ�

	void func() //�Ǿ�̬��Ա����  ��������Ķ�����  ��Ա�����ͳ�Ա�����Ƿֿ��洢��
	{}

	static void func2()// ��̬��Ա���� ��������Ķ�����
	{}
};

int Person::m_B = 10;// ��̬��Ա�������ص㣺���������������ʼ��

void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "����p��ռ���ڴ�ռ��С" << sizeof(p) << endl;
}

void test02()
{
	Person p;

	cout << "����p��ռ���ڴ�ռ��С" << sizeof(p) << endl;
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}
