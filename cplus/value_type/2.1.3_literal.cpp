#include <iostream>
int literal()
{
	//分多行书写的字符串字面值
	std::cout << "a really, really long string literal"
		" that spans two lines " << std::endl; 
	
	//转义序列
	std::cout << '\n';
	std::cout << "\t\tHi!\n";
	std::cout << "\tHi!\115O\x4d!\n";     //输出   Hi!MOM
	std::cout << "Hi \x4dO\115!\n";
	std::cout << '\115' << '\n';
	system("pause");
	return 0;
}