#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void compare_iptr(const int i, const int *iptr)
{
	//������������ һ����int�͵�������һ����intָ�룬�����Ƚ�int��ֵ��ָ����ָ��ֵ�����ؽϴ���Ǹ�
	cout << (i < *iptr ? *iptr: i) << endl;  //�������������ϴ���Ǹ�
	//������ ָ��������ǳ�������ָ�롣
}

int main_compare_iptr()
{
	//���Ժ���
	int i = 5, j=8, *iptr = &j;   //i��j������,��iptr��ָ��j��ָ��
	compare_iptr(i, iptr);

	system("pause");
	return 0;
}