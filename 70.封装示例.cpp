#include<iostream>
using namespace std;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶��Բ������֮һ��

//Բ����
const double PI = 3.14;

//class��ʾ���һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��  public->����Ȩ��
public:

	//����
	int m_r;

	//��Ϊ
	//��ȡԪ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

int main()
{
	//ͨ��Բ�࣬���������Բ������
	//ʵ����  ��ͨ��һ���� ����һ������Ĺ��̣�
	Circle c1;  //c1�Ƕ��������
	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	system("pause");

	return 0;
}