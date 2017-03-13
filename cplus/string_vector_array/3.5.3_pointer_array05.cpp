#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array05_353()
{
	//解引用和指针运算的互逆
	int ia[] = { 0,2,4,6,8 };
	int last = *(ia + 4);  //ia指针指向0，ia+4指向8，解引用ia+4得到8 相当于ia[0+4]
	cout << last << endl;
	//引用运算符和点运算符在有必要的地方加上圆括号
	last = *ia + 4;      //解引用ia得到0，0+4得到4 相当于ia[0] + 4

	system("pause");
	return 0;
}