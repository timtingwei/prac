#include <iostream>

int auto_252()
{
	//让编译器去分析表达式所属的类型
	double val1 = 3.142, val2 = 9.11;
	auto item = val1 + val2;
	//item = val1 + val2;   //item是未声明的标识符
	std::cout << item << std::endl;

	//auto也可以在同一行声明多个变量，因为一条声明语句只能由一个基本数据类型，所以所有初始的基本数据类型都一样
	auto i = 0, *p = &i;      //正确:i是整数、p是整数型指针
	//auto sz = 0, pi = 3.14;   //错误:sz和pi的类型不一致

	//复合类型，常量和auto
	int i1 = 0, &r = i1;     //r是i1的引用，r与i1绑定在一起
	auto a = r;              //a是一个整数（i1是一个整数）
	
	//auto一般会忽略掉顶层const,同时底层const不被保留下来，初始值是一个指向常量的指针时：
	const int ci = i, &cr = ci;
	auto b = ci;       //b是一个整数 （ci的顶层const被忽略）
	auto c = cr;       //c是一个整数(cr是ci的别名，ci本身是一个顶层const)
	auto d = &i;       //d是一个整数指针（整数的地址就是指向整数的指针）
	auto e = &ci;      //e是一个指针，指向整数常量(对整数常量取地址是一种底层const)

	//如果希望推出的auto类型是一个顶层const，则需要明确指出：
	const auto f = ci;    //ci的推演类型是int,f是const int
	//可以将引用的类型设为auto，原来的初始化规则仍然适用
	auto &g = ci;        //g是一个整型常量引用, 绑定到ci
	//auto &h = 42;        //错误:不能为非常量引用绑定字面值
	//int &h = 42;         //错误:初始化规则不允许为非常量引用绑定字面值
	const int &h = 42;     //正确:常量引用可以绑定字面值
	const auto &j = 42;   //正确:常量引用可以绑定字面值
	
	//一条语句定义多个变量时候，切记，*,&只从属于某个声明符，而非基本数据类型的一部分。
	//但是 int 和 const int是两个不同的类型
	auto k = ci, &l = i;      //k是一个整数，l是整数引用
	auto &m = ci, *q = &ci;   //m是一个整数常量引用，q是一个指向整数常量的指针
	//auto &n = i, *q2 = &ci;    //错误:n是一个整数引用,p2是一个指向整数常量的指针

	system("pause");
	return 0;
}