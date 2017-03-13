#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>   //可用于操作C风格字符串
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::strcat; using std::strcpy; using std::strlen;

int prac_342()
{
	//将含有整数元素的vector对象拷贝给一个整型数组
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