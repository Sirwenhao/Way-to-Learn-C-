#include<iostream>
using namespace std;

//���麯���ͳ�����

class Base
{
public:

	//���麯��
	//ֻҪ��һ�����麯����������Ϊ������
	//��������ص㣺
	//1���޷�ʵ��������
	//2�������������  ����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func��������" << endl; 
	};//д�˾�֮ǰ��Son s;���ᱨ��

};

void test01()
{
	//Base b;//����ԭ��ջ���ϳ��������޷�ʵ��������
	//new Base;//����ԭ�򣺶����ϳ��������޷�ʵ��������

	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������

	Base* base = new Son;//ʹ�ö�̬,�˴�new�����ĸ����󣬾͵����Ǹ�
	base->func();
}

int main()
{
	test01();

	system("pause");

	return 0;
}