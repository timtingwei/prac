#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//不能把isShorter函数，改成constexpr函数

//函数形参和返回值都不是字面值
/*
constexpr bool isShorter2(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}*/