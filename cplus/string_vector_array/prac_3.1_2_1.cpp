#include <iostream>
#include "Sales_item.h"
using std::cout; using std::cin; using std::endl;


int prac_3121()
{
	//��ȡ����ISBN��ͬ��Sales_items����������ǵĺ�
	Sales_item item1, item2;
	cout << "please write down two books messages" << endl;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()){
		cout << item1 + item2 << endl;
	}

	system("pause");
	return 0;

}