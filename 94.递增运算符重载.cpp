#include<iostream>
using namespace std;

//���ص��������


//�Զ��������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ�õ��������
	MyInteger& operator++()//����ֵ����������ҲҪ����ʵ�������صķ���ֵ�����޸�
		//�����������õ�ԭ���ǣ�����������ֵҲ���ᱨ�������ڶ��ִ��++����ʱ��ԭֵ�������𡣴˴�����������Ϊ��һֱ��һ�����ݽ��е���������
		//C++��Ĭ���������͵�ǰ�õ����������Ƕ�һ�����ݽ��в����ģ����ֻ�в������õķ�ʽ�ſ���
	{
		//ǰ�õ��������Ҫ�Ƚ���++����
		m_Num++;

		//�ٽ�����������
		return *this;//�˴����ķ���ֵ��Ȼ��myint��thisָ����ָ������ģ����������*this
	}

	//���غ��õ��������
	//�˴������ڲ�дint�ᱨ���޷����ؽ��������������ֵĺ�������Ϊ�����ܷ����ص������ﲢû�з������Ͳ�ͬ������ص�����
	//int����ռλ������������������ǰ�úͺ��ã�ֻ��int
	MyInteger operator++(int)//���õ������ò������õķ�ʽ�����÷���ֵ�ķ�ʽ
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	}

private:
	int m_Num;
};

//�������������
ostream &operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;   //�˴���д��Ԫ֮ǰ�Ƿ��ʲ�����
	return cout;
}


void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;//�����ص��������֮ǰд++�ᱨ��
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test01();

	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;

	test02();

	system("pause");

	return 0;
}
