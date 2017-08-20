#include <iostream>
#include "Chapter6.h"

void fcn(const int i){/*fcn能够读取i，但是不能向i写值*/}
void fcn(char i){/*定义相同名字,不同函数的形参列表 函数*/}
//void fcn(int i){/*...*/}    //错误：重复定义了fcn(int)
//形式有差异，实际上和第一个fcn的形参没什么不同

int main_const_fcn()
{
	const int ci = 42;   //不能改变ci的值，顶层const
	int i = ci;          //正确：当拷贝ci时候，忽略了它的顶层const
	int *const p = &i;   //const是顶层的，不能给p赋值
	*p = 0;
	//实参初始化形参时会忽略掉顶层const,当形参是顶层const时，传入常量对象或者非常量对象都是可以的
	
	char ca = 'a';
	fcn(ca);             //调用fcn传入char类型的函数
	int fi = 7;
	fcn(fi);             //调用fcn传入int类型的函数，忽略顶层const 

	system("pause");
	return 0;
}

int main_normal_const()
{
	//指针或引用形参与const
	//可以用非常量初始化一个底层const对象，但是反过来不行；同时一个普通的引用必须同类型的对象初始化
	int i = 42;
	const int *cp = &i;   //正确：底层const，不能通过cp改变i
	const int &r = i;     //正确：用于声明引用的const都是底层const,不能通过r修改i,也不能修改r
	const int &r2 = 42;   //正确：可以用字面值初始化一个常量引用
	//int *p = cp;        //错误：p和cp的类型不匹配
	//int &r3 = r;        //错误：r3的类型和r的类型不匹配
	//int &r4 = 42;       //错误：不能用字面值初始化一个非常量引用  

	return 0;
}

int main_reset_findChar()
{
	//const初始化应用到参数传递上
	int i = 0;
	const int ci = i;
	std::string::size_type ctr = 0;
	reset_p(&i);             //正确：调用形参类型是int*的resest函数
	//reset_p(&ci);          //错误：不能用指向const int对象的指向指针初始化int*
	reset_r(i);              //正确：调用形参类型是int&的reset函数
	//reset_r(ci);           //错误：不用把普通引用绑定到const对象ci上
	//reset_r(42);           //错误：不能把普通引用绑定到字面值上
	//reset_r(ctr);          //错误：类型不匹配ctr是无符号类型
	//正确：find_char的第一个形参是对常量的引用，所以可以用字面值常量作为实参
	//find_char("Hello World!", 'o', ctr);

	//调用引用版本，只能使用int类型对象，固不能使用字面值、求值结果为int的表达式、需要转换的对象或者const int类型的对象
	//调用指针版本，只能使用int*类型对象，
	//find_char函数，能传递一个字符串字面值作为find_char第一个实参，该函数的引用形参是常量引用，c++允许我们用字面值初始化常量引用

	return 0;
}

//不良设计：第一个形参的类型应该是const string&
//std::string::size_type find_char_nc(std::string &s, char c, std::string::size_type &occurs);

bool is_sentence(const std::string &s)
{
	//如果在s的末尾有且只有一个句号，则s是一个句子
	std::string::size_type ctr = 0;
	//std::string local_s = s;
	return  find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;   //错误：find_char只能接受普通引用，而s是常量引用
	//正确的思路是修改find_char的形参为常量引用
	//如果实在不能修改，在is_sentence内部定义一个string类型的变量，令其为s副本
	//return  find_char(local_s, '.', ctr) == s.size() - 1 && ctr == 1;

}


int main_const_reference()
{
	//尽量使用常量引用
	//把不会改变的形参定义成引用是一种比较常见的错误，给调用者一种误导：函数可以修改它的实参的值
	//引用非常量引用，限制实参类型。不能把const对象、字面值或者需要转换类型的对象传递给普通的引用形参
	
	//std::string s = "Hello World!";
	std::string::size_type ctr = 0;
	find_char("Hello World", 'o', ctr);           //错误：无法传入字面值常量初始化形参
	//find_char(s, 'o', ctr);                         //正确：只能作用于string对象

	return 0;
}


