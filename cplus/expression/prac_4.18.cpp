#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_418()
{
	vector<int> ivec = { 0,1,2,3,4,9,-2 };
	auto pbeg = ivec.begin();
	while (pbeg != ivec.end() && *pbeg >= 0 )
		cout << *++pbeg;
	cout << endl;
	//�����ǰ�õ���
	//vector���и�ֵ�����һ������Ǹ�
	//û�и�ֵ�����һ��������ָ��β��Ԫ�أ���һ��δ�����Ԫ��

	system("pause");
	return 0;



}