#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void exchange_iptr(int (*i), int (*j))
{
	//交换两个int指针
	int *temp = nullptr;
	temp = i, i = j, j = temp;
}

int main_exchange_iptr()
{
	int i = 5, j = 8;    //定义i,j两个整数
	int *iptr = &i, *jptr = &j;
	exchange_iptr(iptr, jptr);
	cout << *iptr << " " << *jptr << endl;
	//疑问：怎么通过函数交换两个实参

	system("pause");
	return 0;
}