#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_331()
{
	//����һ����10��int�����飬��ÿ��Ԫ�ص�ֵ�������±�ֵ
	int ia[10] = {};   //10��0������
	//for (size_t ix = 0; ix <= 9; ++ix)
	for (size_t ix = 0; ix != 10;++ix)      //������ά����֪
		ia[ix] = ix;

	for (auto i : ia)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}