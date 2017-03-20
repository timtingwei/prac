#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int sizeof_operator_49()
{
	//sizeof运算符返回一条表达式或一个类型名字所占的字节数。
	//满足右结合律，所得的值是一个size_t类型的常量表达式
	//两种形式 
	// sizeof (type)
	// sizeof (expr)    计算表达式结果的类型大小，但sizeof并不实际计算其运算对象的值，即不算expr的值

	//补充：常量表达式的概念（const expression）
	//是指值不会改变并且在编译过程就能得到计算结果的表达式
	//是不是常量表达式由 数据类型 和 初始值共同决定 （初始值的具体值若在运行时才能获取到）
	const int max_files = 20;          //是
	const int limit = max_files + 1;   //是
	int staff_size = 27;               //不是,尽管staff_size的初始值是一个字面值常量，但是数据类型是一个普通int，而不是const int
	//const int sz = get_size();         //不是，sz虽然是 整型常量，但是它的值需要在运行时候才能获得

	//constexpr变量
	//实际使用过程中，常常发现初始值并非常量表达式的情况
	//对象的定义和使用根本就是两回事情
	constexpr int mf = 20;           //20是常量表达式
	constexpr int limit1 = mf + 1;    //mf+1是常量表达式
	//constexpr int sz = size();       //只有当size()一个constexpr函数时才是一条正确语句

	Sales_data data, *p=0;
	sizeof(Sales_data);     //储存Sales_data类型的对象所占空间的大小
	sizeof data;            //data类型的大小，即sizeof(Sales_data)
	sizeof p;
	sizeof *p;                 //指针所占空间的大小
	sizeof data.revenue;       //Sales_data的revenue成员对应类型的大小
	sizeof(Sales_data::bookNo);//获取bookNo成员对应类型的大小
	//值得关注的是sizeof *p
	//sizeof 和 *优先级相同，满足右结合律，因此等价于 sizeof(*p)
	//另外，sizeof 不会实际求表达式的值，因此解引用一个空指针并不会发生问题，实际指针没有被真正使用.
	//sizeof不需要真的解引用指针也能知道它所指对象的类型

	//c++新标准允许我们 不通过类的对象访问类成员的大小。sizeof运算符无须我们提供一个具体的对象
	//想知道类的成员的大小无须真的获取该成员。

	//sizeof 运算符，结果部分地依赖于其作用类型大小
	//对char或者类型为char的表达式执行sizeof运算，结果得1
	char ic = 'a';  
	cout << sizeof ic << endl;  //输出1 

	//对引用类型执行sizeof运算得到被引用对象所占空间的大小
	const int &iref = mf;
	cout << sizeof iref << endl;  //输出4

	//对指针执行sizeof运算得到指针本身所占空间的大小
	cout << sizeof p << endl;  //输出4

	//对解引用指针执行sizeof运算得到指针指向的对象所占的空间大小，指针不需要有效
	cout << sizeof *p << endl;  //40

	//对数组执行sizeof运算得到整个数组所占空间的大小，等价于对数组中的所有元素执行一次sizeof对象并将所得结果求和
	//sizeof 不会把数组名当作指针来处理
	int iarr[5] = { 0,1,2,3,4 };
	cout << sizeof iarr << endl; //20 = 4*5
	//单个元素类型所占空间大小
	cout << sizeof (iarr[0]) << endl;  //4
	//利用sizeof能够运算所占空间大小的特性，来得到数组的个数
	int count = sizeof iarr / sizeof(iarr[0]);
	cout << count << endl;   //5个元素

	//对string对象或vector对象执行sizeof运算，只返回该类型固定部分的大小，不会计算对象中的元素占用多少空间
	string is = "h";
	cout << sizeof is << endl; //28 不会随之字符串size_t增大而增大
	vector<int> ivec = { 0,1,3 };
	cout << sizeof ivec << endl; //16 不会随着size增大而增大

	//返回数组中元素数量
	int ia[8] = { 0,1,2,3,4,5,6,7 };
	//sizeof ia / sizeof *ia;  //返回ia的元素数量
	constexpr size_t sz = sizeof ia / sizeof(*ia);     //*ia数组首元素
	int arr2[sz];
	//因为sizeof 返回的是一个常量表达式，所以我们可以用sizeof的结果声明数组的维度

	for (auto &i : arr2)
		cout << i << " ";
	cout << endl;      //输出的全是空值

	int i = 1, *pi=0;
	cout << (sizeof(pi)) << endl; //int指针所占的空间大小为4

	system("pause");
	return 0;
}