#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building;

class GoodGay 
{
public:

	GoodGay();

	void visit();//�ιۺ��� ����Buillding�е�����

	Building* building;
};

class Building 
{
	//����GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class GoodGay;

public:
	Building();

public:

	string m_SittingRoom;

private:

	string m_BedRoom;
};

//����д��Ա����,Ҫ����������Building
Building::Building()
{
	//ʵ�ָ���ֵ����
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	//
	test01();

	system("pause");

	return 0;
}