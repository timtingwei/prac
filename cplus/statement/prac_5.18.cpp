#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_518()
{
	//ѭ������͸�������
	do {//ԭ����:do��û��{}������д�������
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << "Sum is: " << v1 + v2 << endl;
	} while (cin);  //ѭ�����Ͻ���

	/*do {
		//...
	} while (int ival = get_response());*/    //ԭ����ival������ѭ���ڲ�������

	/*do {
		int ival = 4;       //ival����������doѭ�����ڲ�����condition�е�ivalδ������
	} while (ival);*/


	system("pause");
	return 0;
}