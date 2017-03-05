#include <iostream>

int compound_type()
{
	int ival = 1024;
	int &refVal = ival;
	//int &refVal2;            //错误:必须初始化引用 
	//一旦初始化完成，引用将和他的初始值一直绑定在一起
	//定义一个引用后，对其进行的操作都是在与之绑定的对象上进行的
	refVal = 2; //2赋给refVal，就是把2赋值给了ival
	std::cout << ival << std::endl;
	int ii = refVal;  //ii = ival 执行结果一致
	std::cout << ii << std::endl;

	int &refVal3 = refVal;   //实际上是绑定了ival
	int i = refVal;  //正确 i被初始化为ival的值  而不会跟ival绑定
	std::cout << i << std::endl;
	i += 1;
	std::cout << i << std::endl;
	std::cout << ival << std::endl;   


	//错误情况
	//int &refVal4 = 10;  //错误:引用的值必须是一个对象
	double dval = 3.14;
	//int &reVal5 = dval;  //此处引用的类型必须是int类型
	system("pause");
	return 0;
}
