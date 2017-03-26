#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_522()
{
	//循环重写 goto语句跳回begin 不再使用goto 
	for (int sz = 3; sz <= 0;)
		sz = 6;

	int sz = 5;
	while (sz <= 0) {
		sz = -1;
		cout << sz << endl;
	}

	system("pause");
	return 0;
}