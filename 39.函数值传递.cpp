#include<iostream>
using namespace std;

//ֵ����
// ���庯����ʵ���������ֽ��н����ĺ���
//�����������Ҫ����ֵ��������ʱ���������Ϳ���дvoid����

void swap(int num1, int num2)
{
	cout << "����ǰ" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;


	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;  //����û��ʵ�ʵķ���ֵ������return����ʲô����д����returnֱ�Ӳ�д
}


int main()
{
	
	//���������е��ö���õĺ���
	int a = 10;
	int b = 22;

	//�������βη����仯������Ӱ��ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	
	return 0;
}