#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

/*struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};*/

/*//改进后的Sales_data
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
std::istream &read(std::istream&, Sales_data&);*/

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;                       //销售量
	double sellingprice = 0.0;                     //零售价
	double sellprice = 0.0;                        //售价
	double discount = 0.0;                         //折扣
	std::string isbn() const { return bookNo; }         //类内部定义isbn成员函数
	Sales_data& combine(Sales_data &rhs) {         //类内部定义combine函数

		units_sold = rhs.units_sold;
		sellingprice = (sellingprice + rhs.sellingprice) / (units_sold + rhs.units_sold);
		sellprice = (rhs.sellprice * rhs.units_sold + sellprice*units_sold)
			/ (rhs.units_sold + units_sold);
		if (sellingprice != 0)
			discount = sellprice / sellingprice;
		//discount = (discount + rhs.discount) / (units_sold + rhs.units_sold);

		return *this;                              //返回类对象本身
	}

};


#endif