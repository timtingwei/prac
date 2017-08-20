#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//编写四个函数，分别对两个int加减乘除，在vector中保存这些函数的指针
int addition(int& i1, int& i2) { return i1+i2; };
int reduce(int& i1, int& i2) { return i1-i2; };
int multiply(int& i1, int& i2) { return i1*i2; };
int divide(int& i1, int& i2) { return i1/i2; };

int main()
{
	using PF = int(*)(int&, int&);
	PF fa = addition, fr = reduce, fm = multiply, fd = divide;
	vector<PF> pivec = { fa,fr,fm,fd };

	int a = 5, b = 4;
	cout << " a + b = " << pivec[0](a, b) << endl
		<< " a - b = " << pivec[1](a, b) << endl
		<< " a * b = " << pivec[2](a, b) << endl
		<< " a / b = " << pivec[3](a, b) << endl;

	system("pause");
	return 0;

}