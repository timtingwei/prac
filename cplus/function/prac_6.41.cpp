#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//下面哪个调用非法？哪个调用虽然合法，但是与程序初衷不符合？
char *init(int ht, int wd = 80, char bckgrnd = ' ');

int main_prac641()
{
	//init();                //错误：缺少实参
	//init(24, 16);          //正确
	//init(14, '*');         //正确：但char转化为int类型，与初衷不符合

	system("pause");
	return 0;
}