#include<iostream>
using namespace std;
int main()
{
	//1������С����������
	int arr[5] = { 300,350,200,400,250 };

	//2�����������ҵ����ֵ����ӡ
	int max = 0;//�����϶�һ�����ֵ
	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i] > max)  //���ֵ��max�󣬾ͰѴ��ֵ��max
		{
			max = arr[i];
			
		}
		
	}
	cout << max << endl;

	system("pause");

	return 0;
}