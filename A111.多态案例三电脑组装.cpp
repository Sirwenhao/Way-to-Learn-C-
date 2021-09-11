#include<iostream>
using namespace std;

//����ͬ�������
//����CPU��
class CPU
{
public:
	
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:

	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ���
class Memory
{
public:

	//�������ʾ����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//�����������������ӿ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();

	}

	//�ṩһ�����������ͷ������������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//�ͷŴ洢���
		if(m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU* m_cpu;//CPU�����ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ������ָ��

};

//��װ�ɾ���ĳ���
//Intel����
class IntelCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ������~��" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��~��" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���Կ���ʼ�洢��~��" << endl;
	}
};


//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ������~��" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��~��" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���Կ���ʼ�洢��~��" << endl;
	}
};

void test01()
{
	//��һ̨���Ե����
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelVideoCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;

	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelVideoCard, intelMemory);
	computer1->work();
	delete computer1;

	cout << "------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-----------------------" << endl;
	cout << "����̨���Կ�ʼ������" << endl;
	//����̨������װ
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
	computer3->work();
	delete computer3;
}

int main()
{
	test01();

	system("pause");

	return 0;
}