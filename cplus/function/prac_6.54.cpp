#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int ifunc(int, int) { return 0; };

int prac654()
{
	
	//��д������������������int�βΣ�����������int��������һ��vector��������Ԫ��ָ��ú�����ָ��.
	int(*pf)(int, int) = ifunc;
	vector<int(*)(int, int)> ivec = { pf };

	return 0;
}