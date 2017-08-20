#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

/*struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};*/

/*//�Ľ����Sales_data
struct Sales_data {
	//�³�Ա: ����Sales_data����Ĳ���
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	//���ݳ�Ա��2.6.1�����û�иı�
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};


//Sales_data�ķǳ�Ա�����ӿ�
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);*/

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;                       //������
	double sellingprice = 0.0;                     //���ۼ�
	double sellprice = 0.0;                        //�ۼ�
	double discount = 0.0;                         //�ۿ�
	std::string isbn() const { return bookNo; }         //���ڲ�����isbn��Ա����
	Sales_data& combine(Sales_data &rhs) {         //���ڲ�����combine����

		units_sold = rhs.units_sold;
		sellingprice = (sellingprice + rhs.sellingprice) / (units_sold + rhs.units_sold);
		sellprice = (rhs.sellprice * rhs.units_sold + sellprice*units_sold)
			/ (rhs.units_sold + units_sold);
		if (sellingprice != 0)
			discount = sellprice / sellingprice;
		//discount = (discount + rhs.discount) / (units_sold + rhs.units_sold);

		return *this;                              //�����������
	}

};


#endif