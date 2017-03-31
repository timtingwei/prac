#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;


string::size_type find_char_prac(const string &s, char c,
	string::size_type &occurs)
{
	auto ret = s.size();              //第一次出现的位置(如果有的话)
	for (decltype(s.size()) ix = 0; ix != s.size(); ++ix) {
		if (s[ix] == c) {             //索引当前对象和字符c逻辑相等
			if (ret == s.size())      //确保第一次出现
				ret = ix;             //改变第一次出现的位置
			++occurs;                 //出现次数增加1
		}
	}
	return ret;                       //显式返回第一次出现的位置，通过引用形参隐式返回出现次数
}

/*
Q1:为什么s是常量引用而occurs是普通引用
A1:函数的功能从字符串中找到字符第一次出现的位置和出现的次数,不需要改变字符串s，而occurs是需要改变函数外部的实参对象的，因此不能是常量引用

Q2:为什么s和occurs是引用类型而c不是？
A2:对于s来说，若拷贝大的类类型或者容器对象比较低效，因此使用引用，occurs是对实参别名，是函数的额外返回值，而c字符的大小确定，且不需要通过函数去作用外部变量，因此不需要引用

Q3:如果令s是普通引用会发生什么情况？如果令occurs是常量引用会发生什么情况？
A3:s作为普通引用的情况，可能会因为逻辑错误而导致字符串更换，导致程序错误；如果occurs是常量引用，将得不到c在字符串中出现的次数。

*/
