#include <iostream>
using std::cin; using std::cout; using std::endl;

//定义和声明成员函数的方式与普通函数差不多。
//成员函数的声明必须在类的内部，定义可外可内。
//作为接口组成部分的非成员函数, add, read, print等, 定义和声明都在类的外部。


/*
//改进后的Sales_data
struct Sales_data {
//新成员: 关于Sales_data对象的操作
std::string isbn() const { return bookNo; }
Sales_data& combine(const Sales_data&);
double avg_price() const;
//数据成员和2.6.1节相比没有改变
std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0;

};


//Sales_data的非成员函数接口
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::isream &read(std::istream&, Sales_data&);*/


//引入this

//在调用total.isbn()函数时候，返回的是bookNo数据成员，但是怎么在函数声明中并没有指出是 哪个对象的成员.
//实际上隐式存在一个this  
//函数调用过程实际上执行 
//Sales_data::isbn(&total)
//因为this的目的总是指向 “这个”，对象，所以this是一个常量指针，不允许改变this中保存的地址。
//{return this -> bookNo}


//引入const成员函数 
/*
isbn 另外一关键之处
*/






