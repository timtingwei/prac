#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>   //�����ڲ���C����ַ���
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::strcat; using std::strcpy; using std::strlen;

int prac_342()
{
	//����������Ԫ�ص�vector���󿽱���һ����������
	vector<int> ivec{ 1,2,3,4,5 };
	int arr[5] = {};
	for (int i = 0; i != 5; ++i) {
		arr[i] = ivec[i];
	}
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}