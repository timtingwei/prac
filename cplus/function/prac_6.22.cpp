#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void exchange_iptr(int (*i), int (*j))
{
	//��������intָ��
	int *temp = nullptr;
	temp = i, i = j, j = temp;
}

int main_exchange_iptr()
{
	int i = 5, j = 8;    //����i,j��������
	int *iptr = &i, *jptr = &j;
	exchange_iptr(iptr, jptr);
	cout << *iptr << " " << *jptr << endl;
	//���ʣ���ôͨ��������������ʵ��

	system("pause");
	return 0;
}