#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int prac_343()
{
	//输出数组ia中的元素
	//version1：范围for语句管理迭代过程
	//version2：普通for，下标运算符
    //version3：指针
	//直接写出数据类型，不能使用类型别名、auto关键字或者decltype关键字

	//arr是一维数组
	int arr[3] = { 0,1,2 };
	//version1
	for (int i : arr)   //范围for管理
		cout << i << " ";
	cout << endl;

	//version2
	//for (size_t i = 0; i != 2;++i)              //错误：下标指向arr[2]是，还要执行循环
	for (size_t i = 0; i != 3; ++i)
		cout << arr[i] << " ";
	cout << endl;

	//version3
	//for (int *p = arr; p!= arr+2;++p)           //错误：指针指向arr[2]时，还要执行循环
	for (int *p = arr; p != arr + 3; ++p)
		cout << *p << " ";
	cout << endl;
	
	//cout << "arr[3]:" << arr[3] << endl;

	//ia是二维数组
	int ia[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11} };
	//version1:for范围管理迭代
	//row是含有4个整数的数组
	for (int (&row)[4] : ia){     //row是一个数组，对ia中数组的引用，里面存放着整型？？
		//i是数组中中的整数
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:下标运算符
	//i是数组的下标，下标的类型是size_t  容易跟size_t弄混淆的是是类型 ？？
	for (size_t i = 0; i != 3; ++i) {  //++i  or i++ ??
		//对arr[i]中的元素下标进行循环
		for (size_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:指针
	//初始化让指针pi指向ia的首个数组，pi必须要有容量
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (int (*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
        //*pj是该数组, pj指向该数组的首个元素
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi是指向ia首个数组（指针）的指针，需要容量的是pi所指向的数组（指针）*pi，*pi的容量是4；*pi又是一个指针（数组），指向首个元素
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;

	
}