#include <iostream>
using std::cin; using std::cout; using std::endl;

void exchange_r(int &i, int &j)
{
	//ʹ�������βν�������������ֵ���ȽϺ�ָ���βε�������
	int tmp = i;       //����tmpֵΪi�����ڴ���
	i = j, j = tmp;    //����i��j��ֵ,���������ö���ʵ��
}
//�����ԣ�ָ����Ϊ�β���Ҫ����һ��ָ������ָ�룬�������βεı�����������ֻ�ں�������
//�����ǽ���ֵ�Ļ�������Ҫ�õ���ַ��


int main_exchange_t()
{
	int mi = 1, mj = 42;
	exchange_r(mi,mj);                 //����exchange_r����������mi,mjʵ����Ϊ���ö���
	cout << mi << " " << mj << endl;   //��� 42 1


	system("pause");
	return 0;
}