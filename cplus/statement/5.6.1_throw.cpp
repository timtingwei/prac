#include <iostream>
#include <vector>
#include <string>
//#include "Sales_item.h"
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

int throw_561()
{
	//����ʹ��throw���ʽ����һ���쳣,throw���ʽ�����ؼ���throw�ͽ�������һ�����ʽ��
	//���б��ʽ�����;����׳��쳣�����͡�throw���ʽ��ͨ������һ���ֺţ��Ӷ�����һ�����ʽ���
	/*Sales_item item1, item2;
	cin >> item1 >> item2;
	//���ȼ��item1��item2�Ƿ���ͬһ���鼮
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2 << endl;
		return 0;   //��ʾ�ɹ�
	}
	else {
		std::cerr << "Data must refer to same ISBN " << endl;
		return -1;  //��ʾʧ��
	}*/


	/*//��ʵ�ĳ����У�Ӧ�ðѶ�����ӵĴ�����û������Ĵ�����뿪
	//��д����ʹ�ü����ɺ���ֱ�����һ����Ϣ�������׳�һ���쳣
	Sales_item item1, item2;
	cin >> item1 >> item2;
	//���ȼ��item1��item2�Ƿ���ͬһ���鼮
	if (item1.isbn() != item2.isbn())
		throw runtime_error("Data mush refer to same ISBN");
	//�������ִ�е������ʾ����ISBN����ͬ��
	cout << item1 + item2 << endl;

	//�쳣������runtime_error���׳��쳣����ֹ��ǰ�ĺ��������ѿ���Ȩת�Ƹ��ܴ�����쳣�Ĵ��롣*/



	system("pause");
	return 0;
}