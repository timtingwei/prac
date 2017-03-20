#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_428()
{
	//输出每一种内置类型所占的空间大小
	//内置类型 char,int,long,float,double,long long, //string不是
	//其余 bool,wchar_t,char16_t,char32_t,short,long double
	char c1 = 's';     //char的大小总为1
	cout << sizeof c1 << endl;

	int i1 = 522222;   //int类型所占空间大小为4
	cout << sizeof i1 << endl;

	long l1 = 223222;  //long类型所占的空间大小为4
	cout << sizeof l1 << endl;

	float f1 = 22.3321;  //flaot类型所占空间大小为4
	cout << sizeof f1 << endl;

	double d1 = 22.111111;  //double类型所占的空间大小为8
	cout << sizeof d1 << endl;

	long long l2 = 11123111;  //long long 类型所占空间为8
	cout << sizeof l2 << endl;

	/*string s1 = "helloworld";   //string应该不是内置类型
	cout << sizeof s1 << endl;  //固定值28*/
	//其余 bool,wchar_t,char16_t,char32_t,short,long double
	bool b1 = true;   //bool类型所占空间为1
	cout << sizeof b1 << endl;

	wchar_t wct = 'b';  //wchar_t所占空间大小为2
	cout << sizeof wct << endl;

	char16_t c16 = 'a'; //char16_t所占空间2
	cout << sizeof c16 << endl;

	char32_t c32 = 'a';  //char32_t所占空间4
	cout << sizeof c32 << endl;

	short sh1 = 11;   //short 所占空间大小2
	cout << sizeof sh1 << endl;

	long double ld = 1;  //long double 所占空间为8
	cout << sizeof ld << endl;


	system("pause");
	return 0;
}