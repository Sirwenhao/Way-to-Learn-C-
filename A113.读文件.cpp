#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//�ı��ļ� ���ļ�
void test01()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ�  �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4��������(���ַ���)
	
	//��һ��:
	char buff[1024] = { 0 };//����Ȩ��0���ַ�����
	while (ifs >> buff)//������������������ݣ�����ͷ����һ���ٵı�ǣ�Ȼ���˳�whileѭ��
	{
		cout << buff << endl;
	}

	////�ڶ���
	//char buff[1024] = {0};
	//while (ifs.getline(buff, sizeof(buff)))//��������һ�����ַ����׵�ַ��һ�����ַ�����
	//{
	//	cout << buff << endl;
	//}

	////������
	//string buff;
	//while (getline(ifs, buff))
	//{
	//	cout << buff << endl;
	//}

	////������(���ļ��е��ַ�һ������ȡ)�����Ƽ��ٶ���
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF(end of file)��Ϊ�Ƿ��ȡ���ļ�β���жϱ�־
	//{
	//	cout << c;
	//}

	//5���ر��ļ�
	ifs.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}