#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_432()
{
	//��������ѭ������
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	//��ʼ�� ָ��ptrָ������ia����Ԫ�أ�ix��ʼ��Ϊ0����ixֵ��size��Ȼ� ptrָ��βԪ�صĺ�һλ��ѭ��ֹͣ��ÿ����һ��ѭ����ix+1,ptr+1�����ʽ����+1���ptr
	for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
		cout << ix << " " << (*ptr) << endl;
	/*
	���:
	0 1
	1 2
	2 3
	3 4
	4 5

	*/
	

	system("pause");
	return 0;

}