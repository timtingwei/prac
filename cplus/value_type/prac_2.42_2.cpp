#include <iostream>
#include "Sales_data.h"

int main()
{
	Sales_data total;     //total���ڼ�¼���۵�����
	//�����һ�����ݣ�ȷ�������ݿ��Դ���
	if (std::cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;    //tran�������浱ǰ���������
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
		//��ӡ���һ����Ľ��
		std::cout << total.bookNo << total.units_sold << total.revenue << std::endl;
	}
	else{
		//û�����룬����
		std::cout << "No data?!" << std::endl;
		system("pause");
		return -1;    //ʧ��
	}
	system("pause");
	return 0;
}