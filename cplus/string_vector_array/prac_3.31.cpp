#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_331()
{
	//定义一个含10个int的数组，令每个元素的值都是其下标值
	int ia[10] = {};   //10个0的数组
	//for (size_t ix = 0; ix <= 9; ++ix)
	for (size_t ix = 0; ix != 10;++ix)      //数组是维度已知
		ia[ix] = ix;

	for (auto i : ia)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}