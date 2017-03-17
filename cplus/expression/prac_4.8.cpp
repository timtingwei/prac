#include <iostream>
using std::cin; using std::cout; using std::endl;


int prac_48()
{
	//while从标准循环中读入整数，遇到42停止
	int i;
	while (cin >> i && i != 42)              //先要标准输出i,左边为真后，才能对右边进行判断
	//while (i!=42 && cin>>i)              //错误
		cout << endl;
	//分析优先级和结合律：>> && !=

	return 0;

}