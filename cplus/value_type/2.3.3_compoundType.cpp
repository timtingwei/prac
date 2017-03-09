#include <iostream>

int compoundType_233()
{
	//一条定义语句可以定义出不同类型的变量
	//i是一个int型数,p是一个int型指针,r是一个int型引用
	
	/*int i = 1024, *p = &i, &r = i;

	int* p1, p2;  //p1是指向int的指针,p2是int 

	//指向指针的指针
	int ival = 1024;
	int *pi = &ival;  //pi指向一个int型的数
	int **ppi = &pi;  //ppi指向一个int型的指针
	std::cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi << std::endl;
	*/
	//指向指针的引用
	int i = 42;
	int *p;          //p是一个int型指针
	int *&r = p;    //r是对指针p的引用
	r = &i;         //r和p绑定再一起，现在p指向i
	*r = 0;         //r指向的对象i 赋值为0
	std::cout << i << std::endl;
	system("pause");
	return 0;
}