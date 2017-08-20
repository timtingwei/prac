#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
/*
//默认形参作为形参的初始值，出现在形参列表中
typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');
//一旦某个形参赋予默认值，后面所有都必须有默认值。

//默认实参声明
//函数声明通常被放在头文件中，一个函数声明一次和声明多次都是可以。
//对有默认实参的函数来说，后面的声明只能为那些没有默认值的形参添加默认形参，且该形参右侧的所有形参都必须要有默认值
string screen1(sz, sz, char = ' ');
//string screen1(sz, sz, char = '*');     //错误：重复声明，不能修改已经存在的默认值
//string screen1(sz = 24, sz = 80, char);


//默认实参初始值

//只要表达式类型能转换为形参所需要类型
sz ht();
char def = ' ';
sz wd = 80;

string screen2(sz = ht(), sz = wd, char = def);
string window = screen2();       //screen2(ht(), 80, ' '); 

//在作用域内解析
void f2()
{
	def = '*';            //def重新赋值
	sz wd = 100;          //隐藏了外层定义的wd,但是没有改变默认值
	window = screen2();   //调用screen2(ht(), 80, '*')
}
//新声明的局部变量，只是隐藏其外层定义wd，不会改变默认值,与传递给screen2的默认实参没有关系.


int main_default_argument_651()
{
	//默认形参函数的调用
	string window;
	window = screen();        //调用screen(24,80,' ');
	window = screen(66);      //调用screen(66,80,' ');
	window = screen(66, 44);  //调用screen(66,44,' ');
	window = screen(66, 44, '#');//调用screan(66,44,'#')
	//默认负责填补函数尾部调用缺少的尾部实参
	//window = screen(, , '?');      //错误：只能忽略尾部的实参
	window = screen('?');            //调用screen('?',80,' ')
	//char类型转换成string::size_type类型，16进制是0x3F,十进制63

	//设计时候注意，不默认的形参在前，经常使用默认值的在后

	return 0;
}
*/