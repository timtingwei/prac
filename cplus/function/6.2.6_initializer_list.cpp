#include <iostream>
#include <string>
#include <iterator>
#include <initializer_list>
//#include <ErrCode>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;
using std::initializer_list;
using std::error_code;

//编写能处理不同数量实参的函数，c++11新标准提供了两种主要的方法：
//如果所有的实参类型相同，可以传递一个名为initializer_list的标准库类型
//如果实参类型不同，可以编写一种特殊的函数，也就是所谓的可变参数模板

//另外一种特殊的形参类型：省略符。可以传递可变数量的实参，一般只用于C函数的交互接口 

void error_msg(error_code e,initializer_list<string> il)
{
	//输出错误信息的函数，作用于可变数量的实参
	cout << e.message() << ": ";
	for (const auto &elem : il)
		cout << elem << " ";
	cout << endl;
}


int main_error_msg()
{
	//initializer_list形参 
	//函数的实参数量未知但是全部实参的类型相同。
	//是一种标准库类型，用于表示某种特定类型的数组。定义在同名的头文件中。
	//和vector一样，也是一种模板类型，定义initializer_list对象时，必须ishuoming列表中所含元素类型
	initializer_list<string> ls;     //元素类型是string
	initializer_list<int> li;        //元素类型是int
    //与vector 不同的是 initalizer_list对象中的元素永远是常量，无法改变

	string expected = "Tim", actual = "Tim";
	//if (expected != actual)
		//error_msg(ErrCode(42), { "functionX",expected,actual });    //第一次调用传入三个值
	//else
		//error_msg(ErrCode(0), { "functionX", "okay" });             //第二次调用传入两个值

	system("pause");
	return 0;
}

