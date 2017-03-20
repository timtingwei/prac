#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_419()
{
	int ival=0, i;
	int *ptr = &i;
	vector<int> vec = { 0,1,2,3 };
	//下列表达式 什么含义，是否正确，如何修改
	cout << (ptr != 0 && *ptr++) << endl;  
	//cout << (bool (*ptr)) << endl;
	// && 先运算左侧对象，得到bool值 true,再运算右侧对象的bool值，若*ptr的值不为0，则为true，否则false

	//cout << (ival++ && ival) << endl;
	cout << ival++ << ival << endl;    // 0 1
	//先左后右，ival++返回值是原对象的副本，右值，为0,后一个结果为true


	ival = 0; //初始化
	//vec[ival++] <= vec[ival];    //等价于vec[ival] <= vec[ival + 1];  回返 true
	cout << vec[ival++] << vec[ival] << endl;
	
	

	system("pause");
	return 0;



}