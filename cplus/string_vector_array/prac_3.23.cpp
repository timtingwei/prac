#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_323()
{
	//����һ������10��������vector�����õ�����������Ԫ�ص�ֵ���ԭ��������������vector����
	vector<int> ivec(10, 2);

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		*it *= 2;


	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}