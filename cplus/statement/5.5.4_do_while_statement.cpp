#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int do_while_statement_554()
{
	//do while��whileʮ�����ƣ�Ψһ��������do while ��ִ��ѭ�����������������������ζ�����ִ��һ��ѭ��
	/*
	do 
	    statement
	while (condition);  
	*/
	//�����Ű���������ִ�������� ; ����
	//conditionʹ�õı��� ���붨����ѭ������

	//do while ѭ�������ϣ�ִ�мӷ�����
	//������ʾ�û�����һ������Ȼ�������
	string rsp;   //��Ϊѭ�����������ܶ�����do�ڲ�
	do {
		cout << "please enter two values: ";
		int val1 = 0, val2 = 0;
		cin >> val1 >> val2;
		cout << "The sum of " << val1 << " and " << val2
			<< " = " << val1 + val2 << "\n\n"
			<< "More?Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');          //�ǵ�condition���; ���rspΪ�ջ�����ĸΪn,ֹͣѭ��

	system("pause");
	return 0;

}