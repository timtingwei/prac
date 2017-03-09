#include <iostream>

int prac_233()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//int a; 
	//const int b;
	//const int c;
	//int &d; ??
	//const int &e = i;??
	//const int g;
	a = 42;
	b = 42;
	c = 42;
	//d = 42;     //错误:无法从"int"转换为"int *"  d是一个整型指针，整数的地址就是指向整数的额地址
	//e = 42;       //错误:e是一个指向整数常量的指针
	//g = 42;         //g是一个整型常量引用，绑定到ci

	return 0;
}