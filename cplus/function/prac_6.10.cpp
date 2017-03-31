#include <iostream>
using std::cin; using std::cout; using std::endl;

void exchange(int *ip,int *jp)
{
	//使用指针形参交换两个整数的值
	auto tmp = *ip;//初始化tmp变量用于储存先被赋值的对象值
	*ip = *jp;     //ip的指向的对象，赋值为jp指向的对象
	*jp = tmp;     //同上交换
}

int prac_610()
{
	//传入引用类型        -->错误：&仍然是指针类型 int *j = &i;  实参为&i 
	int i = 42, j = 0;
	exchange(&i, &j);                           //调用交换函数，传入的是指针类型
	cout << "i= " << i << " j= " << j << endl;  //输出 i= 0, j= 42
	
	//传入指针类型
	int *ptr1 = &i, *ptr2 = &j;                  //ptr1指向i,ptr2指向j
	exchange(ptr1, ptr2);                        //调用交换函数，传入指针类型
	cout << "i= " << i << " j= " << j << endl;   //输出 i= 42, j= 0
	
	//c中常常使用指针类型的形参访问函数外部的相对
	//c++建议用引用类型的形参(int &i),
	//这里的引用类型指的是形参，而不是实参。分清楚引用和指针的区别！！


	system("pause");
	return 0;
}