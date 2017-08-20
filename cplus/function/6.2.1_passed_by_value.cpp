#include <iostream>
using std::cin; using std::cout; using std::endl;

//实参的值拷贝给形参时，形参和实参是两个互相独立的对象。
//实参被值传递(passed by value)，或者 函数 被 传值调用(called by value)

//引用形参是它对应的实参别名
//形参是引用类型时，对应的实参被引用传递(passed by reference)或者函数被 传引用调用(called by reference)

int call_reference(int &i)  //实参被引用传递
{
	i += 7;
	return 0;
}

int call_value(int vi)
{
	vi += 7;     //传值调用函数中，局部变量改变
	return 0;
}

int main_value()
{
	/*int i = 7, &j = i;    //j是i的引用(别名)
	call_reference(i);    //传引用调用函数
	cout << i << endl;    //打印i ->检查是否通过引用改变
	//输出:14*/
	
	//初始化一个非引用类型的变量，初始值拷贝给变量。此时，变量改动不会影响初始值
	int n = 0;           //int类型的初始变量
	int i = n;           //i是n的副本
	i = 42;              //i的值改变,n的值不改变
	cout << n << endl;

	//传值参数对形参的所有操作不会影响传入fact的实参
	call_value(n);
	cout << n << endl;


	system("pause");
	return 0;
}
void reset_p(int *p)
{
	//函数接受一个指针，将指针位置 置于0
	*p = 7;             //改变指针ip所指对象的值
	p = 0;             //只改变了ip的局部拷贝，实参未被改变
					   //return 0;         //错误:void类型函数不能返回值
}

int passed_by_value_621()
{
	//指针形参
	int n = 0, i = 42;
	int *p = &n, *q = &i;       //p指向i,q指向i
	*p = 42;                    //n通过指针p赋值42,指针p不变
	p = q;                      //p现在指向i，但是i和n的值不变


	reset_p(&i);                  //改变i的值而非i的地址
	cout << "i = " << i << endl;//输出
	
	
	//c++中 建议使用引用类型的形参代替指针
	system("pause");
	return 0;
}

