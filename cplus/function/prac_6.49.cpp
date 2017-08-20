#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//什么是候选函数？什么是可行函数?
void print5();
void print5(int);
void print5(int, int);
void print5(double, double=3.4);

//候选匹配：函数名相同；声明在可调用点
//可行匹配：形参数量与本次调用提供的实参数量相等；实参与对应形参的类型相同，或者能够转换成形参类型

/*int main_prac66()
{
	print5(6.2);   //调用  void print4(double, double=3.4);
	
	//print4(2.56, 42);  //调用具有二义性
	print5(42);        //void print4(int);
	print5(42, 0);     //void print4(int, int);
	print5(2.56, 3.14);//void print4(double, double=3.4);


	system("pause");
	return 0;
}*/
