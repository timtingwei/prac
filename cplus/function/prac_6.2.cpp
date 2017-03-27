#include <string>
using std::string;


//指出下列错误，为什么？应该如何修改这些错误呢？

/*int f() {
	string s;
	//...
	return s;        //错误:函数应返回int类型,而s是string类型
}*/

//f2(int l){/*...*/}  //如果不是void函数，需要有个返回值;否则不需要

//int f2(int l) {/*...*/ } //错误：必须有返回值
void f2(int l) {/*...*/ }  //正确：void不返回任何值

//int calc(int v1, int v2) /*...*/}  //1 少了一个{  2必须要有一个返回值
int calc(int v1, int v2) { return 0; }  //正确

//函数体没有花括号？
//double square(double x)  return x*x;  //函数体没有花括号
double square(double x) { return x*x; }