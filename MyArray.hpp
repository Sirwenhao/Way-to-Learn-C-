//�Լ���ͨ�õ�������

#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray 
{
public:

	//�вι��죬�������Ϊ����
	MyArray(int capacity)
	{
		cout << "MyArray���вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������,Ϊ�˷�ֹǳ����������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;//���д���ᵼ��ǳ����������

		//����������ڶ��������µ��ڴ�ռ�
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "MyArray �� operator= �������" << endl;
		//���ж�ԭ����ȥ�Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_Back(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;//��������Ĵ�С
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��,����������û�����Ϊ�Ⱥŵ���ֵ���ڣ�����Ҫ����������
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}



	//��������:�����������������ͷ�
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "MyArray��������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:

	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//��������

	int m_Size;//�����С

};