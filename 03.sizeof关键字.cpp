#include <iostream>
using namespace std;

int main()
{
	//���ͣ�short��2�� int��4�� long��4�� longlong��8��
	//����sizeof���������������ռ�õ��ڴ��С

	short num1 = 10;
	//cout << "shortռ�õ��ڴ�ռ��СΪ" << sizeof(short) << endl;
	cout << "shortռ�õ��ڴ�ռ��СΪ" << sizeof(num1) << endl;//ʹ�ñ����������������Ͷ�����

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ��СΪ" << sizeof(int) << endl;

	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ��СΪ" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ��СΪ" << sizeof(long long) << endl;

	//��С�Ƚ�
	//short < int <= long <= long long  int��long֮��С�ڵ��ڵĹ�ϵ����Ϊ���ڲ�ͬ�Ĳ���ϵͳ��longռ�õ��ֽڲ�ͬ

	system("pause");

	return 0;
}