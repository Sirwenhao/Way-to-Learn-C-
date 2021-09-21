#include<iostream>
using namespace std;


//ʵ���������ν�������
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//ʵ�����������ͽ�������
void swapDouble(double &a,double &b)
{
	double temp = a;
	a = b;
	b = temp;
}


//����ģ��
template<typename T> //����һ��ģ��,���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a = " << a << "    " << "b = " << b << endl;

	double c = 3.12324;
	double d = 4.12143;
	swapDouble(c, d);
	cout << "c = " << c << "    " << "d = " << d << endl;

	//���ú���ģ��ʵ�ֽ���
	//������ʹ�÷���
	//1���Զ������Ƶ�
	int e = 11;
	int f = 22;

	mySwap(e, f); //�������������Ǵ�����������ͣ��Զ��Ƶ�T��Ӧ����������
	cout << "e = " << e << "    " << "f = " << f << endl;

	//2����ʾָ������
	int g = 13;
	int h = 23;
	mySwap<int>(g, h); //ֱ��ָ��T����������
	cout << "g = " << g << "    " << "h = " << h << endl;

}



int main()
{
	test01();

	system("pause");
	
	return 0;
}