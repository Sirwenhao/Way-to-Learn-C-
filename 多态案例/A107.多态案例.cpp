#include<iostream>
#include<string>
using namespace std;

//�ֱ�������ͨ��д���Ͷ�̬����ʵ�ּ�����

//��ͨд��

class Calculator 
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����ʵ������  �ᳫ  ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
	}

	int m_Num1;//������1
	int m_Num2;//������2
};

void test01()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;

	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;

	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//���ö�̬ʵ�ּ�����
//��̬�����ƣ�1����֯�ṹ���� 2���ɶ���ǿ 3������ǰ�ںͺ��ڵ���չ�Լ�ά���Ը�
//ʵ�ּ������ĳ�����

class AbstractCalculator 
{
public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;

};

//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//������������
class SubCalculator :public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷���������
class MultiCalculator :public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	//��̬ʹ������
	//�����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

	//new�����ݴ洢�ڶ�����������Ҫɾ��
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 30;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�����
	abc = new MultiCalculator;
	abc->m_Num1 = 30;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}
