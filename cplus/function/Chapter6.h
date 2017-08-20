#pragma once
#include <iostream>
#include <vector>
#include <string>


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

void reset_p(int *p);                                         //声明形参为指针类型的reset
void reset_r(int &r);                                         //声明形参为引用类型的reset
//std::string::size_type find_char(const std::string &s, char c,
	//std::string::size_type &occurs);                        //声明find_char函数

std::string::size_type find_char(const std::string &s, char c,      //声明find_char函数形参类型类string &
	std::string::size_type &occurs);