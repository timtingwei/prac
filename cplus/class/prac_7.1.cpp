#include <iostream>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
//using namespace std;
/*
int prac_71()
{
	cout << "please write down isbn, numbers and price: " << endl;
	
	Sales_data total;                          //储存第一条对象total
	if (cin >> total.isbn) {
		Sales_data trans;                      //储存第二条数据
		while (cin >> trans.isbn) {                 //如果第二条数据存在
			if (trans.isbn == total.isbn) {
				total.price += trans.price;
				total.count += trans.count;    //count和price相加
			}
			else {
				cout << "last books information is " << total.isbn << " "<< total.count << " " << total.price << endl;
				total = trans;                 //处理下一本书的信息
			}
		}
		cout << total.isbn << total.count << total.price << endl;                 //打印最后一本书的结果
	}
	else {
		cout << "there is no book, please write down your information." << endl;
		return -1;                             //返回失败
	}
	//检查下一个对象和他isbn是否相等
	//相同便相加
	

	system("pause");
	return 0;
}
*/