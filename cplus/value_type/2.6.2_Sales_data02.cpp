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
	//����data1��data2�Ĵ���
	double price = 0;//��ĵ���,���ڼ�����������
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	//������������
	data1.revenue = data1.units_sold * price; 
	//�����2�ʽ���
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//���data1��data2��ISBN�Ƿ���ͬ
	if (data1.bookNo == data2.bookNo){
		unsigned totalCnt = data1.units_sold + data2.units_sold; 
		double totalRevenue = data1.revenue + data2.revenue;
		//����������������������۶ƽ���۸�
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0){
			std::cout << totalRevenue / totalCnt << std::endl;
		}
		else
			std::cout << " (no sales) " << std::endl;
		system("pause");
		return 0;   //��־�ɹ�
	}
	else{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		system("pause");
		return -1;   //��־ʧ��
	}

	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00
	
	//�����ͬ����data1��data2���ܺ�

}