#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

void more_return(int &i, int &j)
{
	++i, ++j;
}

void not_reference(vector<int>::iterator &i)
{
	++i;
}

int main_more_not()
{
	//一个形参应该是引用类型的例子，一个形参不能是引用类型的例子

	//应该是引用类型 -> 函数需要额外返回
	int i = 1, j = 7;
	more_return(i, j);             //调用more_return函数
	cout << i << " " << j << endl; //输出 2 8

	//不能是引用类型 -> 改变指针指向
	vector<int> ivec = { 0,1,2,3 };
	vector<int>::iterator beg = ivec.begin();                //iptr指向整数i
	cout << "*beg = " << *beg << endl;
	not_reference(beg);
	cout << "*beg = " << *beg << endl;


	system("pause");
	return 0;
}



