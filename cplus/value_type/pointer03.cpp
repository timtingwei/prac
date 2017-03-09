#include <iostream>
int pointer03()
{
	//其他的指针操作
	int ival = 1024;
	int *pi = 0;
	int *pi2 = &ival;
	if (pi)
		std::cout <<"pi" <<pi << "\n" << std::endl;
	if (*pi2)
		std::cout << "*pi2" << *pi2 << "\n" << std::endl;
	if (pi2)
		std::cout <<"pi2  " <<pi2 << std::endl;
	

	// void指针
	//void*可以用于存放任意对象地址.该地址中到底是一个什么类型的对象并不了解
	double obj = 3.14, *pd = &obj;

	void *pv = &obj;
	pv = pd;
	//没办法访问内存空间所存的对象

	system("pause");
	return 0;
}