#include <iostream>;
using namespace std;

int main()
{
	//1��������float
	//2��˫����double

	float f1 = 3.1415926f;//һ����ڵ����ȵ�ֵ��д��һ��f,����float������ĸ
	//����д��ԭ���ǣ���дf�Ļ���ϵͳֱ��Ĭ�ϵ���double����,���Ҳ�д�Ļ�folat����֮�󣬻ὫĬ��Ϊdouble���͵�3.14ת��Ϊfloat���ͣ���һ��ת��

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;//C++��д����ô������Ҳ�����壬Ĭ����������һ��С������ʾ6λ��Ч���֣���ʾ����������Ҫ����

	cout << "d1 = " << d1 << endl;

	//ͳ��float��double��ռ�õ��ڴ�ռ�

	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;	

	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//��ʾ3��10��ƽ��

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;//3��0.1��ƽ��

	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;


}