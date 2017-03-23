#include <iostream>
using std::cin; using std::cout; using std::endl;


int prac_438()
{
	//说明下面表达式的含义 

	int i = 2, j = 3;
	double slope = 2 / 3;
	//int相除得到0,赋值给slope转换成 double
	cout << slope << endl;   //0.0

	double slope1 = static_cast<double>(2 / 3);
	cout << slope1 << endl;   //0.0 

	//将int类型的2强制转换成double类型，与int相除时候，3转换成double类型得到double类型的结果
	double slope2 = static_cast<double>(2) / 3;
	cout << slope2 << endl;  //0.6666667
	


	system("pause");
	return 0;

}