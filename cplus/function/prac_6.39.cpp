#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//int calc(int, int);
//int calc(const int, const int);    //重复声明，一个拥有顶层const没办法和另一个没有顶层const的形参区别开来

//int get();
//double get();   //错误：与上一个函数相比，只有返回值不同，其他函数名和形参列表都是相同的。

//int *reset(int *);
//double *reset(double *);

int main_prac639()
{
	//int a = 5, int b = 6;
	//calc(a, b);
	double a = 5.00;
	int b = 6;
	double *da = &a; int *ib = &b;
	//reset(da);
	//reset(ib);

	system("pause");
	return 0;
}