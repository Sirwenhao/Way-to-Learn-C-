#include<iostream>
using namespace std;
#include<string>

//��������
class Building
{

	//goodGay ȫ�ֺ��� ��Building�����ѣ����Է���Building�� ˽�г�Ա
	friend void goodGay(Building *building);//ȫ�ֺ�������Ԫ��ֻ��Ҫ��ȫ�ֺ������Ƶ����ڣ�����friend������������д��public�������ڡ�

public:
	Building()
	{
		m_BedRoom = "����";
		m_SittingRoom = "����";
	}


public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

//ȫ�ֺ���
void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);

}

int main()
{

	//
	test01();

	system("pause");

	return 0;
}