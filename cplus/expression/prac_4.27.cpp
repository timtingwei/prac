#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_427()
{
	//下列表达式的结果
	unsigned long ul1 = 3, ul2 = 7;
	//猜测：ul1是unicode16字符，类型是unsigned long 
	cout << ul1 << " " << ul2 << endl; //3 7
	cout << (ul1 & ul2) << endl;  //3
	cout << (ul1 | ul2) << endl;  //7
	cout << (ul1 && ul2) << endl; //1
	cout << (ul1 || ul2) << endl; //1

	//猜测：是否是这样
	// ul1=3      00000000 00000000 00000000 00000111
	// ul2=7      00000000 00000000 00000000 01111111
	//u1l & ul2 : 00000000 00000000 00000000 00000111
	//ul2 | ul2 : 00000000 00000000 00000000 01111111
	//ul1&& ul2 : 1 && 1  结果1
	//ul2|| ul2 : 1 || 1  结果1

	//试验
	unsigned int a1 = 3, a2 = 12;
	cout << a1 << " " << a2 << endl;  //3 12
	cout << (a1 & a2) << endl;  //0
	cout << (a1 | a2) << endl;  //15
	cout << (a1 && a2) << endl; //1
	cout << (a1 || a2) << endl; //1


	system("pause");
	return 0;


}
