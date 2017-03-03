#include <iostream>

int error()
{
	//int input_value;          //改正
	//std::cin >> input_value;  //未声明的标识符
	//int i = { 3.14 };           //初始化 从double转换刀int，可能数据丢失
	int i = (3.14);               //改正
	std::cout << i << std::endl;  // i的值为3
	//double salary = wage = 9999.99;  //wage 缺少声明标识符
	double salary = 9999.99;     //改正
	//int i = 3.14;   //从double到int数据会丢失
	int k = (3.14);


	system("pause");
	return 0;
}