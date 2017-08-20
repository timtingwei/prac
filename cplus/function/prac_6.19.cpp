#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//判断哪个调用合法，哪个不合法。对于不合法的调用，说明原因
double calc(double d) { return 0; }
int count(const string & csr, char c) { return 0; }
int sum(vector<int>::iterator iter1, vector<int>::iterator iter2, int i) { return 0; }

int main_prac_619()
{
	//调用函数 
	//calc(23.4, 55.1);					//错误：函数调用传入的参数过多
	count("abcda", 'a');				//正确：常量引用接受字符串字面值
	calc(66);							//正确：实参初始化形参时，发生隐式转换
	
	vector<int> vec = { 0,1,2,3,4 };
	sum(vec.begin(), vec.end(), 3.8);   //正确：实参初始化形参时，发生隐式转换



	system("pause");
	return 0;
}