#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;                   //������һ�����׼�¼�ı���
	//������һ��������Ϣ����ȷ���п��Դ��������
	if (std::cin >> total){             
		Sales_item trans;               //����͵ı���
		while (std::cin >> trans){                             //::����� ����֮һ�Ƿ��������ռ�std�е�����cout
			//������ڴ�����ͬ��ŵ���
			if (total.isbn() == trans.isbn())
				total += trans;        //������������
			else{
				//��ӡǰһ����Ľ��
				std::cout << total << std::endl;
				total = trans;          //total���ڱ�ʾ��һ�������������
			}
		}
		std::cout << total << std::endl;//��ӡ�����һ�������������
	}
	else{
		std::cout << "No data" << std::endl;
		return -1; //��ʾʧ��
	}
	system("pause");
	return 0;              // std::cin >> i >> j �ȶ�ȡһ��������i���ٶ�ȡһ��������j
}