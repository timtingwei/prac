#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array03_353()
{
	//标准库函数的begin和end
	//数组毕竟不是类类型，begin和end函数就不会是成员函数
	//成员函数的调用方法是  .begin()  非成员函数的调用 begin() 数组作为参数
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *beg = begin(ia);      //beg指向数组的first item
	int *last = end(ia);     //last就相当于指向数组尾元素的下一位置
	cout << *beg << "   " << *(last-1) << endl;
	

	//用begin和end找到arr中的第一个负数
	int arr[] = { 5,0,2,9,-9,3,-2,4,0 };
	int *pbeg = begin(arr), *pend = end(arr);
	//检测完全 或 item <0结束循环
	while (pbeg != pend && *pbeg >= 0)  //尾后指针不能执行解引用和递增操作
		++pbeg;
	cout << *pbeg << endl;


	system("pause");
	return 0;
}