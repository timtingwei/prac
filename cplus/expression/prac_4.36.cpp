#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_436()
{
	int i = 1;
	double d = 2.2;
	//i*=d使其执行整数类型乘法 而不是浮点 
	//i *= d;  //浮点乘法,但是返回的依旧是 int类型
	i *= static_cast<int>(d);

	cout << i << endl;

	system("pause");
	return 0;


}