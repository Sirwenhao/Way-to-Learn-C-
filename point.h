#pragma once   //�˾����Ŀ����Ϊ�˷�ֹͷ�ļ��ظ�����

#include<iostream>
using namespace std;

//����
class Point
{
public:  //һ����һ����Ա������Ƶ�ʱ��ֻ��Ҫһ���������ɣ����԰�ʵ�ֵĲ���ɾ�����������ֲ�ȫ

	//����x
	void setX(int x);
	
	//��ȡx
	int getX();
	

	//����y
	void setY(int y);
	
	//��ȡx
	int getY();
	

private:
	int m_X;
	int m_Y;

};
