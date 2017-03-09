#include <iostream>
#include <string>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int prac_241_1()
{
	Sales_data data1, data2;
	//读入第一笔交易
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	//读入第二比交易
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//std::cin >> data1.bookNo >> data2.bookNo; 
	//检查data1和data2表示相同的书，
	if (data1.bookNo == data2.bookNo){
		std::cout << data1.bookNo << " " << data1.units_sold + data2.units_sold << " "
			<< data1.revenue + data2.revenue << " " << std::endl;
		system("pause");
		return 0;  //表示成功
	}
	else{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		system("pause");
		return -1;  //表示失败
	}

}