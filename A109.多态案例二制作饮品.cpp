#include<iostream>
using namespace std;

//��̬����2 ������Ʒ
class AbstractDrinking 
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void AddSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddSomething();
	}
};

//��������
class Coffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void AddSomething()
	{
		cout << "���Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class Tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "������" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void AddSomething()
	{
		cout << "������" << endl;
	}
};

//��������
void doWork(AbstractDrinking *abs)//AbstractDrinking *abs = new Coffee
{
	abs->makeDrink();
	delete abs;//�����������ֶ����٣���Ҫ�ֶ��ͷ�
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "-----------------------" << endl;

	doWork(new Tea);
}


int main()
{
	test01();

	system("pause");

	return 0;
}