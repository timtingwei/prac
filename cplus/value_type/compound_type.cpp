#include <iostream>

int compound_type()
{
	int ival = 1024;
	int &refVal = ival;
	//int &refVal2;            //����:�����ʼ������ 
	//һ����ʼ����ɣ����ý������ĳ�ʼֵһֱ����һ��
	//����һ�����ú󣬶�����еĲ�����������֮�󶨵Ķ����Ͻ��е�
	refVal = 2; //2����refVal�����ǰ�2��ֵ����ival
	std::cout << ival << std::endl;
	int ii = refVal;  //ii = ival ִ�н��һ��
	std::cout << ii << std::endl;

	int &refVal3 = refVal;   //ʵ�����ǰ���ival
	int i = refVal;  //��ȷ i����ʼ��Ϊival��ֵ  �������ival��
	std::cout << i << std::endl;
	i += 1;
	std::cout << i << std::endl;
	std::cout << ival << std::endl;   


	//�������
	//int &refVal4 = 10;  //����:���õ�ֵ������һ������
	double dval = 3.14;
	//int &reVal5 = dval;  //�˴����õ����ͱ�����int����
	system("pause");
	return 0;
}
