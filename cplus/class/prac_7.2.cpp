#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
using std::string;

/*struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;                       //������
	double sellingprice = 0.0;                     //���ۼ�
	double sellprice = 0.0;                        //�ۼ�
	double discount = 0.0;                         //�ۿ�
	string isbn() const { return bookNo; }         //���ڲ�����isbn��Ա����
	Sales_data& combine(Sales_data &rhs) {         //���ڲ�����combine����

		units_sold = rhs.units_sold;
		sellingprice = (sellingprice + rhs.sellingprice) / (units_sold + rhs.units_sold);
		sellprice = (sellprice + rhs.sellprice) / (units_sold + rhs.units_sold);
		discount = (discount + rhs.discount) / (units_sold + rhs.units_sold);	

		return *this;                              //�����������
	}

};*/

/*int main()
{
	
	system("pause");
	return 0;
}*/