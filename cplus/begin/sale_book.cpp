#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;                   //保存下一条交易记录的变量
	//读入下一条交易信息，并确保有可以处理的数据
	if (std::cin >> total){             
		Sales_item trans;               //保存和的变量
		while (std::cin >> trans){                             //::运算符 作用之一是访问命名空间std中的名字cout
			//如果仍在处理相同书号的书
			if (total.isbn() == trans.isbn())
				total += trans;        //更新销售总量
			else{
				//打印前一本书的结果
				std::cout << total << std::endl;
				total = trans;          //total现在表示下一本书的销售总量
			}
		}
		std::cout << total << std::endl;//打印出最后一本书的销售总量
	}
	else{
		std::cout << "No data" << std::endl;
		return -1; //表示失败
	}
	system("pause");
	return 0;              // std::cin >> i >> j 先读取一个数存入i，再读取一个数存入j
}