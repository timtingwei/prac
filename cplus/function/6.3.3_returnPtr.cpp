#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


int(*func(int i))[10];

//使用尾置返回类型 
//func接受一个int实参，返回一个指针，该指针指向含有10个整数的数组
auto func(int i) -> int(*)[10];

//使用decltype
//函数返回的指针将指向哪个数组
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even;     //返回一个指向数组的指针
}

int main_returnPtr()
{
	//int arr[10];    //创建一个大小为10的数组

	//类型别名 简化返回数组的指针 
	typedef int arrT[10];       //arrT是

	using arrT = int[10];
	//arrT* func(int i);
	
	//返回数组指针的函数 
	int arr[10];        //arr是一个含有10个整数的数组
	//int *p1[10];        //pl是一个含有10个指针的数组
	int(*p2)[10] = &arr;//p2是一个指针，它指向含有10个整数的数组
	//定义一个返回数组指针的函数，数组的维度必须跟在函数名之后。
	//形参列表跟在函数名后，数组维度之前。
	//Type (*function(parameter_list))[dimension]
	//返回类型是数组的指针，而不是指针的数组 




	system("pause");
	return 0;
}