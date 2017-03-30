#include <iostream>
#include <vector>
#include "Chapter6.h"
using std::cin; using std::cout; using std::endl;
using std::vector;

//函数声明
//函数只能定义一次，但是可以声明多次
//函数声明无须函数体，用一个分号代替即可

//无须写形参名字，但写上能帮助使用者更好的理解函数的功能
void print(vector<int>::const_iterator beg,
	vector<int>::const_iterator end);

//函数三要素 (返回类型，函数名，形参类型)描述了函数的接口，说明该函数的全部信息。
//函数声明也称作函数原型



int function_prototype_612()
{
	cout << i << endl;

	cout << head_call(8) << endl;
	//vector<int> ivec = { 0,1,2,3 };
	//auto beg = ivec.begin(), end = ivec.end();
	//print(beg,end);
	//如果把函数声明放在头文件中，就能确保同一函数的所有声明保持一致。
	//而且一旦我们想改变函数的接口，只需要改变一条声明即可

	//调用call_back函数
	for (int i = 0; i != 10; ++i)
		cout << call_back() << endl;   
	//函数在任何一个源文件中被定义后，声明在头文件中，可以在任意源文件中使用


	system("pause");
	return 0;
}