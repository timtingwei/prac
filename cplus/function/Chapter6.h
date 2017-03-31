#pragma once
#include <iostream>
#include <vector>


extern int iext = 5;

//void print(vector<int>::const_iterator beg,
	//vector<int>::const_iterator end);
//如果把函数声明放在头文件中，就能确保同一函数的所有声明保持一致。
//而且一旦我们想改变函数的接口，只需要改变一条声明即可

int head_call(int j)
{
	static int i = j;
	return j++;
}

int call_back();      //头文件声明call_back函数

int myFact();