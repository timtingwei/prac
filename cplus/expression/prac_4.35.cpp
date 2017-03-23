#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_435()
{
	//是否发生隐式转换
	char cval;   int ival;    unsigned int ui;
	float fval;   double dval;

	cval = 'a' + 3;
	cout << cval << endl;

	/*//ival转换成double与1.0相乘，unsigned int与double之间的转换看机器
	//fval = ui - ival * 1.0;
	//cout << fval << endl;
	dval = ui * fval;
	cval = ival + fval + dval;*/
	

	system("pause");
	return 0;

}