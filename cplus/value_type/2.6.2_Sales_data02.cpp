#include <iostream>
#include <string>

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int sales_data02()
{
	Sales_data data1, data2;
	//读入data1和data2的代码
	double price = 0;//书的单价,用于计算销售收入
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	//计算销售收入
	data1.revenue = data1.units_sold * price; 
	//读入第2笔交易
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//检查data1和data2的ISBN是否相同
	if (data1.bookNo == data2.bookNo){
		unsigned totalCnt = data1.units_sold + data2.units_sold; 
		double totalRevenue = data1.revenue + data2.revenue;
		//输出：计算总销售量，销售额，平均价格
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0){
			std::cout << totalRevenue / totalCnt << std::endl;
		}
		else
			std::cout << " (no sales) " << std::endl;
		system("pause");
		return 0;   //标志成功
	}
	else{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		system("pause");
		return -1;   //标志失败
	}

	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00
	
	//如果相同，求data1和data2的总和

}