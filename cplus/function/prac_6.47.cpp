#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//修改6.3.2节练习中，递归输出vector内容的程序,输出与执行过程相关的信息
int factorial_v(vector<int> &vec)
{
	static size_t num = vec.size();        //记录vec容量
	if (num != 0) {
		cout << vec[--num] << endl
			<< "File name: " << __FILE__
			<< " : in function " << __func__
			<< "   vector size: " << num << endl;
		factorial_v(vec);
	}
	return 0;
}

int main_prac647()
{
	//
	vector<int> iarr = { 0,1,2,3,4,5 };
	factorial_v(iarr);
	system("pause");
	return 0;
}