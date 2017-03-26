#include <iostream>
#include <vector>
#include <string>
//#include "Sales_item.h"
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

int throw_561()
{
	//部分使用throw表达式引发一个异常,throw表达式包含关键字throw和紧随其后的一个表达式，
	//其中表达式的类型就是抛出异常的类型。throw表达式后通常紧跟一个分号，从而构成一个表达式语句
	/*Sales_item item1, item2;
	cin >> item1 >> item2;
	//首先检查item1和item2是否在同一种书籍
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2 << endl;
		return 0;   //表示成功
	}
	else {
		std::cerr << "Data must refer to same ISBN " << endl;
		return -1;  //表示失败
	}*/


	/*//真实的程序中，应该把对象相加的代码和用户交互的代码分离开
	//改写程序，使得检查完成后不再直接输出一条信息，而是抛出一个异常
	Sales_item item1, item2;
	cin >> item1 >> item2;
	//首先检查item1和item2是否在同一种书籍
	if (item1.isbn() != item2.isbn())
		throw runtime_error("Data mush refer to same ISBN");
	//如果程序执行到这里，表示两个ISBN是相同的
	cout << item1 + item2 << endl;

	//异常类型是runtime_error。抛出异常将终止当前的函数，并把控制权转移给能处理该异常的代码。*/



	system("pause");
	return 0;
}