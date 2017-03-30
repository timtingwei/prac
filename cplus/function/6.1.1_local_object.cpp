#include <iostream>
using std::cin; using std::cout; using std::endl;
//名字有作用域，对象有生命周期(lifetime)
//名字作用域是程序文本的一部分，名字在其中可见
//对象的生命周期是程序执行过程中该对象存在的一段时间

//函数体是一个语句块。块构成一个新的作用域，可以在其中定义变量
//局部变量(local variable)：形参和函数体内部定义的变量 
//仅在函数作用域内可见，局部变量还会隐藏(hide)在外层作用域中同名的其他所有声明中 

//自动对象
//只存在于块执行期间的对象
int f(int i)     //形参是一种自动对象，函数开始时为形参申请存储空间，因为形参定义在函数体作用域之内，一旦函数停止，形参被销毁
{  
	int li1 = 0; //li1本身含有初始值，就用这个初始值进行初始化
	int li2;     //li2执行默认初始化，意味着内置类型的未初始化局部变量将产生未定义的值

	return 0;
}


//局部静态变量
size_t count_calls()
{
	//size_t ctr = 0;  //非局部静态变量  输出10次1
	//控制流第一次经过ctr的定义之前，ctr被创建并初始化为0
	static size_t ctr = 0;  //局部静态变量 输出1到10的数字  //变量ctr之后的每次调用都已经存在并且等于上一次退出时候的值
	//每次调用ctr+1后返回
	return ++ctr;     //返回后+1
}

int uninitialized() 
{
	static int zero;     //局部静态变量没有显式初始值，将执行初始化。该内置类型初始化为0
	return zero;
}

char uninitialieze_char()
{
	static char a;
	return a;  //初始化为空字符
}
int local_object_611()
{
	for (size_t i = 0; i != 10; ++i)
		cout << count_calls() << endl;   //函数调用不忘记括号
	cout << uninitialized() << endl;
	 
	cout << uninitialieze_char() << endl;
	system("pause");
	return 0;
}
