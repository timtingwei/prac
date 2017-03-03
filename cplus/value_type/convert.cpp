#include <iostream>

int convert()
{
	/*bool b = 42;      // b = 1
	int i = b;        // i = 1
	std::cout << "int i" << i << std::endl;
	i = 3.14;         // i = 3
	double pi = i;    //pi = 3.0
	unsigned char c = -1;   //假设char占8比特,c的值为255
	signed char c2 = 256;   //假设char占8比特，c2的值是未定义的
	
	std::cout << "bool b = " << b << std::endl;

	std::cout << "i" << i << std::endl;
	std::cout << "double pi" << pi << std::endl;
	std::cout << "unsigned char c" << c << std::endl;
	std::cout << "signed char c2" << c2 << std::endl;
    */
	//含有无符号类型的表达式

	unsigned u = 10;
	int i = -42;
	std::cout << i + i << std::endl;  //输出 -84
	std::cout << u + i << std::endl;  //输出4294967264首先把-42转换成无符号数。类似于直接过无符号数赋一个负值，结果等于这个负数加上无符号数的模
	
	for (int j = 10; j >= 0; --j)
		std::cout << j << std::endl;

	//错误:变量u永远也不会小于0，循环条件一直成立
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
