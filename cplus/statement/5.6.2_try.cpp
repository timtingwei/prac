#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;
using std::overflow_error;
int try_562()
{
	/*
	try {
	    program-statements
	} catch (exception-declaration){
	    handler-statements
	} catch (exception-declaration){
	    hanlder-statements
	}//...
	*/
	//try��֮�����һ������catch�Ӿ䡣
    //catch�Ӿ���������֣��ؼ���catch,������һ����������(�쳣���� expection declaration),һ����
	//catchѡ��ĳ�쳣��ִ����֮��Ӧ�Ŀ顣catchһ����ɣ�������ת��try�������һ��catch�Ӿ�֮����������
	//try�����������ı����ڿ��ⲿ�޷����ʡ��ر�����catch�Ӿ���Ҳ�޷�����

	//��д�������
	Sales_item item1, item2;
	while (cin >> item1 >> item2) {
		//���ȼ��item1��item2�Ƿ���ͬһ���鼮
		try {
			cout << item1 + item2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()    //ÿ����׼���쳣�඼��������Ϊwhat�ĳ�Ա��������Щ����û�в���
				<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;  //����whileѭ��
		}
	}
	

	system("pause");
	return 0;  









}