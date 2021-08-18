#include<iostream>
using namespace std;

//���Բ�Ĺ�ϵ����

//����
class Point 
{
public:

	//����x
	void setX(int x)
	{
		m_X = x;
	}
	//��ȡx
	int getX()
	{
		return m_X;
	}

	//����y
	void setY(int y)
	{
		m_Y = y;
	}
	//��ȡx
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;

};
 
//Բ��
class Circle 
{
public:

	//���ð뾶
	void setR(int r)
	{
		m_R = r;
	}
	//��ȡ�뾶
	int getR()
	{
		return m_R;
	}

	//����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;

	Point m_Center;
};

//ͨ��ȫ�ֺ����жϵ��Բ�Ĺ�ϵ
void isIncircle(Circle &c, Point &p)
{
	//�ȼ�������֮������ƽ��
	int distanceSquare = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//�ټ���뾶��ƽ��
	int rSquare = c.getR() * c.getR();

	//�ж��������ߵĴ�С��ϵ
	if (distanceSquare == rSquare)
	{
		cout << "����Բ��" << endl;
	}
	else if (distanceSquare < rSquare)
	{
		cout << "��Բ��" << endl;
	}
	else
	{
		cout << "��Բ��" << endl;
	}

}

int main()
{
	//����Բ
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);

	//������
	Point p1;
	p1.setX(10);
	p1.setY(10);

	//�жϹ�ϵ
	isIncircle(c1, p1);


	system("pause");

	return 0;
}