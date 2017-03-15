#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int main()
{
	//输出数组ia中的元素
	//version1：范围for语句管理迭代过程
	//version2：普通for，下标运算符
	//version3：指针
	//直接写出数据类型，不能使用类型别名、auto关键字或者decltype关键字
	//使用类型别名来代替循环控制变量的类型

	//ia是二维数组
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };

	//声明类型别名
	using int_array = int[4];   
	//typedef int int_array[4]      类型别名为什么这样声明

	//version1:for范围管理迭代
	//row是含有4个整数的数组
	for (int(&row)[4] : ia) {     //row是一个数组，对ia中数组的引用，里面存放着整型？？
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
	for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
														 //*pj是该数组, pj指向该数组的首个元素
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi是指向ia首个数组（指针）的指针，需要容量的是pi所指向的数组（指针）*pi，*pi的容量是4；*pi又是一个指针（数组），指向首个元素
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;
}
/*//ia是二维数组
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
using int_array = int[4];
typedef int int_array[4];
//输出ia中每个元素的值，每个内层数组各占一行
for (int_array *p = ia; p != ia + 3; ++p) {  //为什么能用用int_array *p = ia 代替了 int (*p)[4] = ia 
	for (int *q = *p; q != *p + 4; ++q)
		cout << *q << " ";
	cout << endl;
}

//ia是二维数组
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
//for (int *pi = ia; pi != ia + 3; ++pi) {
for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
	//*pj是该数组, pj指向该数组的首个元素
	for (int *pj = *pi; pj != *pi + 4; ++pj)         
		cout << *pj << " ";
	cout << endl;
}*/