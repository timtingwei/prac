#include <iostream>
using std::cin; using std::cout; using std::endl;

void myReset(int &ir)
{
	//��д����֤reset������ʹ���������������͵Ĳ���
	ir = 7;                //�����õĶ���ֵ
}

int main_myReset()
{
	int i = 0;             //����һ������Ϊ0
	myReset(i);            //����myReset����
	cout << i << endl;     //��� 7

	system("pause");
	return 0;
}