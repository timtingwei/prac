#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int statement_scope_52()
{
	//在if,switch,while,for语句的控制结构中定义变量。
	//定义在控制结构中的变量只在相应语句中可见，一旦语句结束，变量就超出其作用范围了
	//while (int i = 5)   //每次迭代时候创建并初始化i
		//cout << i << endl;
	//i = 0;    //错误:在循环外部 i是未声明的标识

	//如果其他代码也需要访问控制变量，变量必须定义在语句外部
	//寻找第一个负值
	vector<int> v = { 0,9,8,-5,3,1 };
	auto beg = v.begin();   //在循环外部定义在语句外部    //声明和定义的差别??
	//vector遍历完毕或beg指向负值，退出循环
	while ((beg != v.end()) && (*beg >= 0)) {
		++beg;
	}
	if (beg == v.end())
		cout << "there is no minus value in vector" << endl;
	else
		cout << "the first minus is " << *beg << endl;

	system("pause");
	return 0;


}