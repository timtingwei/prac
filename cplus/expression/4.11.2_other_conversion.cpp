#include <iostream>
using std::cin; using std::cout; using std::endl;

int other_conversion_4112()
{
	//数组转换成指针
	int ia[4] = { 1,2,3,4 };
	int *p = ia;          //p为指向ia首元素的指针
	cout << (*p) << endl;
	int(*ip)[4] = &ia;    //ip是指向ia数组的指针，作为取地址符不会发生上述转换
	for (auto i : (*ip))
		cout << i << endl;

	int(&ra)[4] = ia;    //用引用来初始化数组 不会发生上述的转换
	for (auto i : ra)
		cout << i << endl;


	system("pause");
	return 0;
}