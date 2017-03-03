#include <iostream>

//程序用于说明：函数内部不宜定义与全局变量同名的新变量

int reused = 42;  //reused拥有全局作用域
int in_scope()
{
	int unique = 0; //unique拥有块作用域
	//输出#1:使用全局变量resued
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;   //局部变量覆盖全局变量
	//输出#2:使用局部变量reused
	std::cout << reused << " " << unique << std::endl;  //reused 正在作用域内(in scope)
	//输出#3:显示访问全局变量reused
	std::cout << ::reused << " " << unique << std::endl;
	system("pause");
	return 0;
}