#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:


	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳��ӿ�
	void ExitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//��������
	~WorkerManager();

};