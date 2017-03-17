#include <iostream>
using std::cin; using std::cout; using std::endl;

int prac_412()
{
	//假设i,j和k是三个整数，说明表达式 i!=j < k 的含义
	int i = 1, j = 2, k = 3;
	i != j < k;
	//整数i和j作为运算对象比较相等性，得到运算结果为布尔值。
	//布尔值作为运算符<左侧的运算对象，与k比较的是上个布尔值，若k大于1或0，则为真。
	//这里是布尔值转换为整数与k比较，还是k转换成布尔值与 != 的运算结果比较呢？

	system("pause");
	return 0;
}
