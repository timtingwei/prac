#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_437()
{
	//将旧式的转换改成用命名的强制类型转换
	int i; double d; const string *ps; char *pc; void *pv;
	//pv = (void*)ps;
	//i = int(*pc)
	//pv = &d;    //pv是对d的引用
	//pc = (char*)pv;

	//pv = const_cast<void*>(ps);  错误：无法从const std::string * 转换成 void*
	//pv = static_cast<void*>(ps); 错误
	//先const_cast去掉const性质，此时ps不包含底层const，可以用static_cast转换。或者用reinterpret在较低层次上重新解释
	pv = static_cast<void*>(const_cast<string*>(ps));
	//pv = reinterpret_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc); //pc所指的char类型强制转换成int类型
	//pv = static_cast<void>(d);  //错误：double类型，强制转化为 void*类型有问题
	pv = static_cast<void*>(&d);  //正确：转换的对象是 &d 不是 d
	//pc = reinterpret_cast<char*>(pv);
	pc = reinterpret_cast<char*>(pv);




	//test
	const char *pc1;
	char *p = const_cast<char*>(pc1);


	system("pause");
	return 0;

}