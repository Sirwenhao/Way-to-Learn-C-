#include<iostream>
using namespace std;

//����һ����ӡ���ݵĺ���
void showValue( const int & value) //�ڴ˴�����const֮�󣬾Ϳ��������β��ˣ��Ҳ�����������
{
	//value = 1000;  //���ڴ˴����޸ģ���a��ֵҲ�������޸ģ���Ϊa��valueָ�����ͬһ���ַ��
	//���溯������ʱ��������constʱ��value��ֵ�Ͳ��������޸���

	cout << "value = " << value << endl;
}

int main()
{
	//��������
	//ʹ�ó��������������βΣ���ֹ�����

	//int a = 10;
	//int& ref = 10; //���ñ�����һ��Ϸ����ڴ�ռ�,10�����ڴ�ռ�
	//const int& ref = 10;//����д���ǺϷ���
	//����д��ʵ�����Ǳ������������������޸ģ�������������temp��int temp = 10; int & ref = temp;
	//ref = 20; //����const���Ϊֻ�����������޸�

	int a = 100;
	showValue(a);

	system("pause");

	return 0;
}