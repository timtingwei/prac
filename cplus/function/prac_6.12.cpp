#include <iostream>
using std::cin; using std::cout; using std::endl;

void exchange_r(int &i, int &j)
{
	//使用引用形参交换两个整数的值，比较和指针形参的易用性
	int tmp = i;       //定义tmp值为i，用于储存
	i = j, j = tmp;    //交换i和j的值,作用于引用对象实参
}
//易用性：指针作为形参需要创建一个指向对象的指针，而引用形参的别名生命周期只在函数体中
//仅仅是交换值的话，不需要用到地址。


int main_exchange_t()
{
	int mi = 1, mj = 42;
	exchange_r(mi,mj);                 //调用exchange_r函数，传入mi,mj实参作为引用对象
	cout << mi << " " << mj << endl;   //输出 42 1


	system("pause");
	return 0;
}