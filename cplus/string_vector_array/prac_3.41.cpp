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

int prac_341()
{
	//用整型数组初始化一个vector对象
	int arr[] = { 0,1,2,3,4,5 };
	vector<int> ivec(begin(arr), end(arr));  //完全拷贝给数组

	//拷贝arr[2],arr[3],arr[4],arr[5]
	vector<int> subVec(arr + 2, arr + 6);  //第二个元素指向尾元素的下一位置

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	for (auto i : subVec)
		cout << i << " ";
	cout << endl;
	

	system("pause");
	return 0;
}