#include <iostream>

using std::cin; using std::cout; using std::endl;

int arithmetic_conversion_4111()
{
	//算术转换 把一种算术类型转化成另一种算术类型
	//运算符的运算对象转换成最宽的类型
	//一个运算对象类型是long double,另一个也被转换成long double
	//既有浮点 又有整型，int转换成浮点

	//整型提升(intergral promotion):负责把小整数类型转换成较大的整数类型
	//char,signed char,unsigned char,short,unsigned short,所有可能值在int里，就会提升成int类型，否则 unsigned int
	//较大的char类型(wchar_t,char16_t,char32_t)提升成int,unsigned int,long,unsigned long,long long 和 unsigned long long中最小的一种类型    

	/*//研究大量的例子
	bool      flag;       char             cval;
	short     sval;       unsigned short   usval;
	int       ival;       unsigned int     uival;
	long      lval;       unsigned long    ulval;
	float     fval;       double           dval;

	3.14159L + 'a';    //'a'提升成int,int值转换成double long 
	dval + ival;       //ival转换成double
	dval + fval;       //fval转换成double  
	ival = dval;       //dval转换成(切除小数部分后)int
	flag = dval;       //如果dval=0,flag=false;否则true
	cval + fval;       //cval提升成int,int转换成float
	sval + cval;       //char和short类型的值都提升成int类型
	cval + lval;       //cval转换成long 
	ival + ulval;      //ival转换成unsigned long 
	usval + ival;      //根据unsigned short和int所占空间大小进行提升
	uival + lval;      //根据unsigned int 和 long所占空间大小而提升
	*/
	system("pause");
	return 0;





}