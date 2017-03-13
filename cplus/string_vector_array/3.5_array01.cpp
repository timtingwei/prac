#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int array01_35()
{
	/*//数组是一种复合类型 a[d]
	//a是数组名字，d是数组维度。维度说明数组中元素个数，必须大于0，且是一个常量表达式
	unsigned cnt = 42;            //不是常量表达式
	constexpr unsigned sz = 42;   //常量表达式
	int arr[10];                  //含有10个整数的数组
	int *parr[sz];                 //含有42个整数指针的数组
	//string bad[cnt];              //错误：cnt不是常量表达式
	//string strs[get_size()];       //get_size()是constexpr时正确*/

	/*//显示初始化数组元素
	//声明没有指明维度，根据初始值数量计算；如果有维度，初始值不能大于维度，若初始值小于维度，剩下的元素被初始化成默认值 
	const unsigned sz = 3; 
	int ia1[sz] = { 0, 1, 2 };   //3个元素的数组
	int a2[] = { 0, 1, 2 };      //维度是3的数组 
	int a3[5] = { 0, 1, 2 };     //{0,1,2,0,0}
	string a4[3] = { "hi", "bye" };  //{"hi","bye",""}
	//int a5[2] = { 0, 1, 2 };     //错误：初始值个数不能大于维度

	//字符数组的特殊性
	char a1[] = { 'C','+','+' };    //列表初始化，没有空字符
	char a2[] = { 'C','+','+','\0' };  //含有显示的空字符
	char a3[] = "C++";                  //自动添加表示字符串结束的空字符
	const char a4[6] = "Daniel";        //空字符加上有7个维度 > 6 ;*/

	//不允许拷贝和赋值
	int a[] = { 0,1,2 };
	//int a2[] = a;         //错误：不允许使用一个数组去初始化另外一个数组
	//a2 = a;                 //错误：不能把一个数组直接赋值给另外一个数组

	//理解复杂的数组声明
	//int arr = 1;
	//int *ptrs[10];              //10个整型指针的数组
	//int &refs[10] = /* ?*/;   //错误：不存在引用的数组
	//int (*Parray)[10] = &arr;    //
	//int(&arrRef)[10] = arr;

	return 0;

}
