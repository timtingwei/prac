#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_57()
{
	int ival1 = 1, ival2 = 2;
	//改正下列代码段中的错误
	if (ival1 != ival2)
		ival1 = ival2;     //别忘记语句后的;
	else  ival1 = ival2 = 0; 
	cout << ival1 << ival2 << endl;

	int  ival = 0, minval = -1, occurs = 5;
	if (ival < minval) {
		minval = ival;
		occurs = 1;
	}

	int ival3 = 2;
	if (ival3 == 2)
		cout << "ival3 = " << ival3 << endl;
	if (!ival3)
		cout << "ival3 = 0\n";

	if (ival == 0)
		ival = 5;
		


	system("pause");
	return 0;
}