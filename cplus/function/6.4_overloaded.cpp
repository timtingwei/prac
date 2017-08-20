#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);


//重载和const形参
bool lookup(int i);
bool lookup(const int i);    //重复声明，const没办法在形参中区分开来

bool lookup(int*);
bool lookup(int* const);    //顶层const 

//如果形参是某种类型指针或引用，const底层
bool lookup(int &);         //作用于int引用
bool lookup(const int&);    //作用与常量int引用

bool lookup(int *);
//bool lookup(const int*);

/*
//const_cast重载
const string &shorterString(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;    //返回其中size较小
}


//对函数重载，让其非常量作为实参时候，返回的也是非常量引用 
string &shorterString(string &s1, string &s2)
{
	auto &r = shorterString(const_cast<const string &>(s1), const_cast<const string &>(s2)  );//调用重载前的函数，返回常量引用
	//这个引用实际上绑定在  某个初始的非常量实参上 
	return const_cast<string&>(r);  //转换成string&
}*/


int main_overloaded_64()
{
	/*//函数名字相同，形参列表不同，称之为重载函数

	//调用时，编译器根据传递的实参推断想要的函数
	int j[2] = { 0,1 };
	print("Hello World");
	//print(j.begin(), j.end());
	print(j, end(j) - begin(j));
	print(begin(j),end(j));
	//一定程度上减轻程序员起名字、记名字的负担。


	//不允许两个函数除了返回类型外其他所有的要素都相同
	//Record lookup(const Account &acct);
	//bool lookup(const Account&);     //与上一个只有返回类型不同   */
	
	//调用shorterString函数
	//常量引用版本
	//shorterString("myname", "hu");


	system("pause");
	return 0;
}

