#include <iostream>


int constexpr_244()
{
	//常量表达式是指值不会改变并且再编译过程就能得到运行结果的表达式
	//由数据类型和初始值共同决定
	const int max_files = 20;           //max_files是常量表达式
	const int limit = max_files + 1;    //limit是常量表达式
	int staff_size = 27;                //staff_size不是常量表达式 数据类型只是个普通int而非const int
	//const int sz = get_size();           //sz不是常量表达式  具体值再运行过程中才能取到

	//c++11新标准 允许将变量声明为constexpr类型，以便由编译器来验证变量的值是否是一个常量表达式
	constexpr int mf = 20;   //为什么我不行...
	constexpr int limit = mf + 1;
	return 0;
}