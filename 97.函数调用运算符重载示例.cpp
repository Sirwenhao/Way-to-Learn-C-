#include<iostream>
#include<string>
using namespace std;

//�����������������

//��ӡ�����
class MyPrint 
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;

	myPrint("hello world");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���

	MyPrint02("hello world");
}

//�º����ǳ�����û�й̶���д��
//�ӷ���

class MyAdd 
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myAdd;
	int ret = myAdd(190, 200);
	cout << "ret = " << ret << endl;

	//������������,���ص��ǵ�ǰ����ִ�����֮���������ͷ�
	cout << "MyAdd()(190,200) = " << MyAdd()(190, 200) << endl;

}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}