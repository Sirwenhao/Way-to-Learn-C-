#include<iostream>
using namespace std;
int main()
{
	//��ϰ������ˮ�ɻ���
	//����������ˮ�ɻ�����ָһ����λ����ÿλ���ֵ�������֮�͵������������磺1^3+5^3+3^3= 153
	//��ʹ��do����while�����ʵ��

	/*  ���Լ�д�Ĳ���(��ѭ��)
	int num = 0;  //num����λ�����ܴ�0��ʼ
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "������һ����λ��" << endl;// ���ø�ֵ���ǿ�ѭ���Լ���ֵ��
	cin >> num; //ͬ��

	num1 = num / 100;
	num2 = num % 10;
	num3 = (num / 10) % 10;   // ͬ�ϣ�ȡ���ȡģ����ͬ��

	do
	{

		if (num = num1 ^ 3 + num2 ^ 3 + num3 ^ 3)
		{
			cout << "ˮ�ɻ���Ϊ��" << num << endl;
		}
		else
		{
			break;
		}
	} while (100 < num < 999);
	*/

	//1���ȴ�ӡ���е���λ��
	int num = 100;//��100��ʼ����100����С����λ��

	do
	{

		int a = 0;
		int b = 0;
		int c = 0;
		//2�������е���λ�����ҵ�ˮ�ɻ���
		a = num / 100;//��λ
		b = num % 10;//��λ
		c = num / 10 % 10;//ʮλ
		if (num == a*a*a + b*b*b + c*c*c)//ע�⣺���ں��������Ⱥ�
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);




	system("pause");

	return 0;
}