#pragma once
#include<iostream>
using namespace std;
#include"point.h" //�˾����д�ϣ���Ϊ�ڴ��ļ��е�Բ���а�����point��

//Բ��
class Circle
{
public:

	//���ð뾶
	void setR(int r);
	
	//��ȡ�뾶
	int getR();
	

	//����Բ��
	void setCenter(Point center);
	
	//��ȡԲ��
	Point getCenter();
	
private:
	int m_R;

	//�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;
};
