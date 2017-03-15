#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;


int prac_345()
{

	//输出数组ia中的元素
	//version1：范围for语句管理迭代过程
	//version2：普通for，下标运算符
	//version3：指针
	//使用auto关键字

	//ia是二维数组
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
	//version1:for范围管理迭代
	//row是含有4个整数的数组
	for (auto (&row)[4] : ia) {     
		//i是数组中中的整数
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:下标运算符
	//i是数组的下标，下标的类型是size_t  容易跟size_t弄混淆的是是类型 ？？
	for (auto i = 0; i != 3; ++i) {  //++i  or i++ ??
		//对arr[i]中的元素下标进行循环
		for (auto j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:指针
	//初始化让指针pi指向ia的首个数组，pi必须要有容量
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (auto (*pi) = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
														 //*pj是该数组, pj指向该数组的首个元素
		for (auto *pj = *pi; pj != *pi + 4; ++pj)         //pi是指向ia首个数组（指针）的指针，需要容量的是pi所指向的数组（指针）*pi，*pi的容量是4；*pi又是一个指针（数组），指向首个元素
			cout << *pj << " ";
		cout << endl;
	}

	//用auto声明数组时候，竟然不用声明维度？
	//test
	int iarr[3] = { 1,2,3 };
	auto &coarr = iarr;
	for (auto i : coarr)
		cout << i << " ";
	cout << endl;
	//确实可以不用


	system("pause");
	return 0;
}