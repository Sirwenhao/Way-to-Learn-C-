#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��

//����ҳ����
class BasePage 
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨��class ����:�̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����


//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
	
};

//C++ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
};


void test01()
{
	cout << "Javaҳ��" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.content();
	ja.left();

	cout << "Pythonҳ��" << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
	py.left();

	cout << "Javaҳ��" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.content();
	cpp.left();
}

int main()
{
	test01();

	system("pause");

	return 0;
}