#include <iostream>

int valueType()
{
	/*int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	r2 = r1;  //r2��һ��int  ����������
	std::cout << r2 << std::endl;
	i = r2;
	r1 = d;*/
	int i, &ri = i;   //ri��i�󶨣����ñ����ʼ��
	i = 5; ri = 10;
	std::cout << i << " " <<ri << std::endl;   //ri��i�󶨺�ri = 10����ʵ������ i = 10 
	system("pause");
	return 0;
}