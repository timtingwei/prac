#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int array_question3_36()
{
	//ia是二维数组
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
	for (int (*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
		// int *pi[4] = ia    //pi是一个整型指针的数组，容量为4
		// int (*pi)[4] = ia  //pi是一个整数指针的数组
		// int *(pi[4]) = ia  //pi是一个整型指针的数组，容量为4 ??  错误：实际无法运行
														 											 
		//*pj是该数组, pj指向该数组的首个元素
		for (int *pj = *pi; pj != *pi + 4; ++pj)
			cout << *pj << " ";
		cout << endl;
	}
	int arr[10];              //含有10个整数的数组
	int *ptrs[10];            //含有10个整型指针的数组
	//int &refs[10] = /*?*/;    //错误：不存在引用的数组
	int(*Parray)[10] = &arr;  //含有10个整型的指针，指向一个含有10个整数的数组
	int(&arrRef)[10] = arr;   //对arr的引用，含有10个整型的数组

	int *(&arry)[10] = ptrs;  //arry是对ptrs的引用，还有10个整型指针

	system("pause");
	return 0;
}