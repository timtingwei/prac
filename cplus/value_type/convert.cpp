#include <iostream>

int convert()
{
	/*bool b = 42;      // b = 1
	int i = b;        // i = 1
	std::cout << "int i" << i << std::endl;
	i = 3.14;         // i = 3
	double pi = i;    //pi = 3.0
	unsigned char c = -1;   //����charռ8����,c��ֵΪ255
	signed char c2 = 256;   //����charռ8���أ�c2��ֵ��δ�����
	
	std::cout << "bool b = " << b << std::endl;

	std::cout << "i" << i << std::endl;
	std::cout << "double pi" << pi << std::endl;
	std::cout << "unsigned char c" << c << std::endl;
	std::cout << "signed char c2" << c2 << std::endl;
    */
	//�����޷������͵ı��ʽ

	unsigned u = 10;
	int i = -42;
	std::cout << i + i << std::endl;  //��� -84
	std::cout << u + i << std::endl;  //���4294967264���Ȱ�-42ת�����޷�������������ֱ�ӹ��޷�������һ����ֵ���������������������޷�������ģ
	
	for (int j = 10; j >= 0; --j)
		std::cout << j << std::endl;

	//����:����u��ԶҲ����С��0��ѭ������һֱ����
	//for (unsigned u = 10; u >= 0; --u)
		//std::cout << u << std::endl;

	unsigned w = 11;
	while (w > 0){
		--w;
		std::cout << w << std::endl;
	}


	system("pause");
	return 0;
}
