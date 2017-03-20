#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_433()
{
	//根据优先级和结合律,说明下面表达式的含义
	int x = 0, y = 1;
	int someValue = 0;
	int k = (someValue ? ++x, ++y : --x, --y);

	//int k = ((someValue? ++x, ++y : --x), --y);
	cout << x << " " << y << " " << k << endl;
	/*分析1
	//优先级：前置运算符>条件运算符>逗号运算符
	//结合律：前置运算符为右结合律,逗号为左结合律
	//含义：先运算第一个逗号运算符两侧，x,y递增后，该表达式返回递增后的y
	//在运算第二个逗号两侧，x,y递减后，返回递减后的y
	//someValue的值转换成布尔值，若true,返回表达式1的值，递增后的y；若false，返回表达式2，递减后的y
	
	//someValue=0,x=-1,y=0,k = 0  //正确：但是刚好凑巧
	//someValue非0,x=1,y=2,k = 2  //错误：为啥非0时，为1 1 1，难道跟?:运算顺序有关系？
	*/

	/*分析2
	正确理解：
	由于?:条件运算符的优先级大于逗号运算符，
	实质含义是这样：int k = ((someValue? ++x, ++y : --x), --y) 

	someValue=0时
	返回表达式2，表达式2由前置递减运算符作用于x,x-1得到 x:-1,条件运算符返回值为-1作为逗号运算符的左侧表达式，忽略该结果，返回右侧值,y-1得到 y:0,整体返回0,k:0
	x=-1;y=0;k=0;

	someValue=0时
	返回表达式1，表达式由逗号运算符连接，左侧表达式x+1,x=1,忽略结果；右侧表达式y+1,y=2，返回作为逗号左侧运算对象，右侧的运算对象是y-1,y=1,整体返回1,k:1
	x=1;y=1;k=1
	*/

	//test1 ,是否会把左表达式的求值过程中的操作直接忽略
	int ival1 = 1, ival2 = 2;
	int ival3 = (++ival1, ++ival2);
	cout << ival1 << " " << ival2 << " " << ival3 << endl;  //输出 2 3 3 
	//不会把左侧求值过程中的操作直接忽略，而是忽略左侧表达式的求值结果

	//test2 ?:条件运算符的运算过程是否满足右结合律
	bool ib = true;
	ib==true ? (cout << "a") : (cout << "b");
	cout << endl;
	//满足右结合律，但是右结合律是针对多个相同优先级的运算符来说的,下面仍旧尝试证明
	//这里只有一个条件运算符 ?:只是对?前的运算对象求布尔值，false->expr1,true->expr2
	ival1 = 1, ival2 = 2;
	ib = true ? (++ival1) : (++ival2);
	cout << ival1 << " " << ival2 << endl;
	
	//条件运算符的嵌套，是否满足右结合律？
	int ival4 = 80;
	(ival4 > 75) ? (cout << "a")
		: (ival4 > 60) ? (cout << "b") : (cout <<"c");  
	//仍旧先输出"a",靠右的运算条件构成了靠左运算条件的分支
	

	//条件运算符的并列,是否满足右结合律?
	cout << endl;
	ival4 = 5;
	(ival4 > 3) ? (cout << "a") : (cout << "b"), (ival4 > 4) ? (cout << "c") : (cout << "d");
	//输出 a c




	system("pause");
	return 0;

}

