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
	//�����һ�ʽ���
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	//����ڶ��Ƚ���
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//std::cin >> data1.bookNo >> data2.bookNo; 
	//���data1��data2��ʾ��ͬ���飬
	if (data1.bookNo == data2.bookNo){
		std::cout << data1.bookNo << " " << data1.units_sold + data2.units_sold << " "
			<< data1.revenue + data2.revenue << " " << std::endl;
		system("pause");
		return 0;  //��ʾ�ɹ�
	}
	else{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		system("pause");
		return -1;  //��ʾʧ��
	}

}