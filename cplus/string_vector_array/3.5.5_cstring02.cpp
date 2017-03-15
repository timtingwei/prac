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
using std::cend;

int cstring02_355()
{
	//允许使用能够字符串字面值来初始化string对象
	string s("Hello,world!");   
	//不能用string对象直接初始化 指向字符的指针
	//char *str = s;    //错误：不能用string对象初始化char*
	const char *str = s.c_str();   // c_str成员函数 返回的是C风格的字符串

	//使用数组初始化vector
	//不能用内置类型是 vector 来初始化 数组，但是反过来却是可以的
	int int_arr[] = { 0, 1, 2, 3, 4, 5 };
	vector<int> ivec(begin(int_arr), end(int_arr));  //只需要指明首元素和尾元素的位置 两个参数都是指针

	//拷贝三个元素  int_arr[1],int_arr[2],int_arr[3]
	vector<int> subVec(int_arr + 1, int_arr + 4);   //第二个参数直线尾元素的下一位置
	for (auto i : subVec)
		cout << i << " ";
	cout << endl;
	
	vector<int> subVec1(int_arr + 2, end(int_arr));
	for (auto i : subVec1)
		cout << i << " ";
	cout << endl;



	//小技巧:现代c++应该尽量使用 vector和迭代器，避免使用内置数组和指针；尽量使用string，避免使用C风格的基于数组的字符串


	system("pause");
	return 0;
}