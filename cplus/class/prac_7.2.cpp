#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
using std::string;

/*struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;                       //销售量
	double sellingprice = 0.0;                     //零售价
	double sellprice = 0.0;                        //售价
	double discount = 0.0;                         //折扣
	string isbn() const { return bookNo; }         //类内部定义isbn成员函数
	Sales_data& combine(Sales_data &rhs) {         //类内部定义combine函数

		units_sold = rhs.units_sold;
		sellingprice = (sellingprice + rhs.sellingprice) / (units_sold + rhs.units_sold);
		sellprice = (sellprice + rhs.sellprice) / (units_sold + rhs.units_sold);
		discount = (discount + rhs.discount) / (units_sold + rhs.units_sold);	

		return *this;                              //返回类对象本身
	}

};*/

/*int main()
{
	
	system("pause");
	return 0;
}*/