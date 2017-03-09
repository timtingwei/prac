#include <iostream>
#include <cstdlib>

int pointer()
{
	//定义指针将声明写成&d的形式
	int *ip1, *ip2;  //ip1和ip2都是指向int型对象的指针
	double dp, *dp2;  //dp2是指向double类型对象的指针，dp是double型对象

	//获取对象的地址 
	//取地址符(操作符&)
	int ival = 42; 
	int *p = &ival;  //p存放变量ival的地址，或者说 p是指向变量ival的指针

	double dval; 
	double *pd = &dval;  //初始值是double型对象的地址
	double *pd2 = pd;  //初始值是指向double对象的指针

	//int &pi = pd; //错误:指针pi类型和pd的类型不匹配
	//pi = &dval    //错误:试图把double型对象的地址赋给int型指针
	
	//利用指针访问对象
	//解引用符
	//int ival = 42;
	//int *p = &ival; 
	std::cout << *p << std::endl;  //*得到指针p所指向的对象 输出42
	*p = 0;
	std::cout << *p << std::endl;  //输出0 为*p赋值实际上为p所指向的对象赋值
	//解引用操作仅仅适用于指向了某个对象的有效指针

	//空指针 Null pointer
	int *p1 = nullptr;        //equal to int *p1 = 0;   c++11新标准刚刚引入
	int *p2 = 0;              //直接将p2初始化为字面常量0
	//需要首先#include <cstdlib>
	int *p3 = NULL;         //等价于 int *p3 = 0;
	//把int变量直接赋值给指针是错误操作
	int zero = 0;
	//int *pi = zero;     //错误:不能把int变量直接赋值给指针
	int *pi = &zero;

	
	
	system("pause");
	
	return 0;


}