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

int prac_341()
{
	//�����������ʼ��һ��vector����
	int arr[] = { 0,1,2,3,4,5 };
	vector<int> ivec(begin(arr), end(arr));  //��ȫ����������

	//����arr[2],arr[3],arr[4],arr[5]
	vector<int> subVec(arr + 2, arr + 6);  //�ڶ���Ԫ��ָ��βԪ�ص���һλ��

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	for (auto i : subVec)
		cout << i << " ";
	cout << endl;
	

	system("pause");
	return 0;
}