#include<iostream>
using namespace std;

//��̬
class Animal
{
public:
	//Spear���������麯��
	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ������������
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat :public Animal
{
public:
	//��д  ��������ֵ����  ������ �����б� ��ȫ��ͬ��������дʱvirtual�ؼ��ֿ�д�ɲ�д
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog :public Animal
{
public:

	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//����ϣ������ʲô������ô�͵���ʲô����ĺ���
//���������ַ�ڱ���׶ξ���ȷ������ô��̬����
//���������ַ�����н׶β���ȷ�������Ƕ�̬����

//ִ��˵���ĺ���
//��ַ���   �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô��������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ��󶨡������������ӹؼ���virtual
void doSpeak(Animal & animal)//����������ڵ����������
{
	animal.speak();//��ʱ�����ᱨ����Ϊ���õ�speak������ȷ�ǵ��õ�è��Ļ��Ƕ����
}
//��̬��������
//1���м̳й�ϵ.������У�è���Ͷ���
//2��������д�����е��麯����������У�è����дspeak�麯���������ں�������
//��̬ʹ�ã�
//����ָ�������ָ���������

void test01()
{
	Cat cat;//Animal & animal = cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();

	system("pause");

	return 0;
}