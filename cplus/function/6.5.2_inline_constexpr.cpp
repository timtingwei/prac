#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


//内联函数，编译过程中展开，适用在规模较小，流程直接，频繁调用的函数中，提高运行速度 
inline const string&
shorterString3(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

//constexpr
//只能用于常量表达式的函数
//两个规定：
//返回类型和所有的形参都是字面值
//函数有且只有一条返回值
constexpr int func() { return 42; };
constexpr int foo = func();          //func()函数返回常量表达式

constexpr size_t scale(size_t cnt) { return func() * cnt; };
int arr[scale(2)];
int a = 5;
//int arr[scale(a)];    //错误：函数调用在常量表达式中必须要常量值

int main_inline_constexpr()
{
	cout << shorterString3("tim", "cooper") << endl;

	system("pause");
	return 0;
}