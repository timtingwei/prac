#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int array03_36()
{
	//指针和多维数组 
	//使用多维数组 名字，仍然自动转换成指针
	//int arr[2][3]({1,2,3},{4,5,6});
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	//int *p = arr;    //错误:p指向的数组，那么指针p也有对应的容量
	int(*p)[3] = arr;     //正确：p指向含有3个整数的数组
	//圆括号的区别
	//int *p[3];      //整型指针的数组

	p = &arr[1];          //指针p指向了arr的尾元素，该元素是一个容量为3的数组
	int (*p1)[3] = &(arr[1]);
	//输出arr中每个元素的值，每个内层数组各占一行
	//初始化pi指向arr中的首数组
	for (auto pi(arr); pi != arr + 2; ++pi) {      //arr+2代表指针向前移动两位,arr是首数组
		//初始pj指向pi所指向数组中的首元素
		for (auto pj(*pi); pj != (*pi) + 3; ++pj)  //(*pi)是首元素 
			cout << *pj << " ";
		cout << endl;
	}
	//指针和begin/end的替换
	//pi是指向数组的指针
	for (auto pi = begin(arr); pi != end(arr); ++pi) {     //这种方法不必要知道数组的长度
		//pj是指向数组中元素的指针
		for (auto pj = begin(*pi); pj != end(*pi); ++pj)
			cout << *pj << " ";
		cout << endl;
	}

	//类型别名简化多维数组的指针
	using int_array = int[3];     //3个整数组成的数组
	typedef int int_array[3];     //等价于上面语句
	//初始化p是指向首个数组的指针
	for (int_array *p = arr; p != arr + 2; ++p) {
		//初始化q是指向数组*p的首元素
		for (int *q = *p; q != *p + 3; ++q)
			cout << *q << " ";
		cout << endl;
	}



	system("pause");
	return 0;


}

