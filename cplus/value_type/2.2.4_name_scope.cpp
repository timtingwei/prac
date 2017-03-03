#include <iostream>

int name_scope() //main在函数体之外 拥有 全局作用域(global scope)
{
	int sum = 0;  //sum出了main函数就不能访问  块作用域(block scope)
	for (int val = 1; val <= 10; ++val)
		sum += val;
	std::cout << "Sum of 1 to 10 inclusive is" << sum << std::endl;
	system("pause");
	return 0;
}
//变量的定义与他第一次被使用的地方接近时，我们也会赋予他一个比较合理的初始值，还方便找