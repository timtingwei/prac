#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_425()
{
	//int占32位，char占8位，用的是Latin-1字符集，其中字符 'q'的二进制形式是01110001
	//~'q' << 6; 的值是什么
	//被提升成int类型，右侧插入6个二进制位0
	//00000000 00000000 00011100 01000000
	return 0;
}