#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;
using std::overflow_error;
int try_562()
{
	/*
	try {
	    program-statements
	} catch (exception-declaration){
	    handler-statements
	} catch (exception-declaration){
	    hanlder-statements
	}//...
	*/
	//try块之后的是一个或多个catch子句。
    //catch子句包括三部分：关键字catch,括号内一个对象声明(异常声明 expection declaration),一个块
	//catch选中某异常后，执行与之对应的块。catch一旦完成，程序跳转到try语句块最后一个catch子句之后的那条语句
	//try语句块内声明的变量在块外部无法访问。特别是在catch子句内也无法访问

	//编写处理代码
	Sales_item item1, item2;
	while (cin >> item1 >> item2) {
		//首先检查item1和item2是否在同一种书籍
		try {
			cout << item1 + item2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()    //每个标准库异常类都定义了名为what的成员函数，这些函数没有参数
				<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;  //跳出while循环
		}
	}
	

	system("pause");
	return 0;  









}