#include <iostream>
#include "Sales_data.h"

int prac_2421()
{
	Sales_data data1, data2;
	double price;
	//读入第一条数据
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	//读入第二条数据
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	if (data1.bookNo == data2.bookNo){ 
		//totalCnt = data1.units_sold + data2.units_sold;
		std::cout << data1.bookNo <<" " << data1.units_sold + data2.units_sold <<" "<< data1.revenue + data2.revenue << " " << std::endl;
		system("pause");
		return 0;  //成功
	}
	else{
		std::cout << "No data?!" << std::endl;
		system("pause");
		return -1;  //失败
	}
}