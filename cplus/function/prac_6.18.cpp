#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


bool compare(const int i, const int j)
{
	//��Ϊcompare�ĺ���������boolֵ��������������int�������
	return i < j;         //�Ƚ�i��j�Ĵ�С����iС��j����true
}

vector<int>::iterator change_val(const int val, vector<int>::iterator &iter)
{
	//��vector����ָ��������ָ��Ķ����ֵ����val
	*iter = val;          //�Ե�����ָ��Ԫ�ظ�ֵ
	return iter;          //���ظõ�����
}

int main_compare_change_val()
{
	bool ret = compare(5, 6);   //����compare����
	cout << ret << endl;        //���1

	vector<int> ivec = { 0,1,2,3,4 };
	auto iter = ivec.begin() + 2;
	change_val(5, iter);
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;


	system("pause");
	return 0;
}