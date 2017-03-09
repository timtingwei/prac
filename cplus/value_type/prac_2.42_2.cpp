#include <iostream>
#include "Sales_data.h"

int main()
{
	Sales_data total;     //total用于记录销售的总量
	//读入第一条数据，确保有数据可以处理
	if (std::cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;    //tran用来保存当前处理的数据
		while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
			if (total.bookNo == trans.bookNo){
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else{
				std::cout << total.bookNo << total.units_sold << total.revenue << std::endl;
				total = trans;
			}
		}
		//打印最后一本书的结果
		std::cout << total.bookNo << total.units_sold << total.revenue << std::endl;
	}
	else{
		//没有输入，警告
		std::cout << "No data?!" << std::endl;
		system("pause");
		return -1;    //失败
	}
	system("pause");
	return 0;
}