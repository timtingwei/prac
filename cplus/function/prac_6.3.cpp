#include <iostream>
using std::cin; using std::cout; using std::endl;

int fact1(int n) {
	int ret = 1;   //����һ���ֲ�������¼���
	while (n > 1)
		ret *= n--; //��ret��n�ĳ˻�����ret,Ȼ��n��1
	return ret;    //���ؽ��
}

int prac_63()
{
	int val = 5;
	int j = fact1(val);
	cout << "5! is: " << j << endl;

	system("pause");
	return 0;
}