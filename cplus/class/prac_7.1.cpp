#include <iostream>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
//using namespace std;
/*
int prac_71()
{
	cout << "please write down isbn, numbers and price: " << endl;
	
	Sales_data total;                          //�����һ������total
	if (cin >> total.isbn) {
		Sales_data trans;                      //����ڶ�������
		while (cin >> trans.isbn) {                 //����ڶ������ݴ���
			if (trans.isbn == total.isbn) {
				total.price += trans.price;
				total.count += trans.count;    //count��price���
			}
			else {
				cout << "last books information is " << total.isbn << " "<< total.count << " " << total.price << endl;
				total = trans;                 //������һ�������Ϣ
			}
		}
		cout << total.isbn << total.count << total.price << endl;                 //��ӡ���һ����Ľ��
	}
	else {
		cout << "there is no book, please write down your information." << endl;
		return -1;                             //����ʧ��
	}
	//�����һ���������isbn�Ƿ����
	//��ͬ�����
	

	system("pause");
	return 0;
}
*/