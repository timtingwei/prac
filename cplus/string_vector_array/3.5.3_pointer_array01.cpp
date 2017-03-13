#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pointer_array01_353()
{
	//c++中，使用数组的时候，编译器会把他转换成指针
	//取地址符号，可以取任何对象，数组元素也是对象
	string nums[] = { "one","two","three" };
	string *p = &nums[0];     //指针p指向num的第一个元素

	//编译器特性：在很多用到数组名字的地方，编译器都会自动地将其替换为一个指向数组首元素的指针
	string *p2 = nums;   //等价 string *p = &nums[0]

	//在大多数表达式中，使用数组对象，其实是使用一个指向该数组首元素的指针

	//当使用数组作为一个auto变量的初始值时，推断得到的是指针而非数组
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);          //auto ia2(&ia[0])实际编译器执行
	//ia2 = 42;    //ia2是一个指针
	*ia2 = 42;
	for (auto i : ia)
		cout << i << " ";
	cout << endl;

	//decltype关键词时候，不会发生 auto ia2(ia)  --> auto ia2(&ia[0])这样的转换
	int i = 9;
	decltype(ia) ia3 = { 0,1,2,3,4,5,6,7,8,9 };
	//ia3 = p;   //错误:ia3是一个数组,不能赋值指针
	ia3[4] = i;


	system("pause");
	return 0;
}