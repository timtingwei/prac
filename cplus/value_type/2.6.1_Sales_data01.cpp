#include <iostream>

int sales_data01()
{
	struct Sales_data {
		std::string bookNo;
		unsigned units_sold = { 0 };   //可以放在等号右边
		double revenue{ 0.0 };  //可以用花括号
		//int test(0);   //错误：局部成员函数没有函数体，在类内初始值不能用圆括号
	};
	//类体右侧的表示结束的花括号后面必须写一个分号，因为后面可以紧跟变量名已示对该类型对象的定义

	
	//struct Sales_data {/*...*/ } accum, trans, *salesptr;
	//与上一句等价，但可能更好一些
	//struct Sales_data {/*...*/ };
	//Sales_data accum, trans, *salesptr;

	//不要忘了再类定义的最后加上分号

	return 0;
}