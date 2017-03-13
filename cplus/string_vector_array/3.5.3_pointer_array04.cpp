#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array04_353()
{
	//指针运算 

	//统计数组中空字符串的个数
	string sarr[] = { "","a","b","","","lss","","ss","" };  //4个空字符串
	int result = 0;
	for (auto *pbeg = begin(sarr); pbeg != end(sarr); ++pbeg) {
		if (pbeg->empty())    //解引用迭代器并获取该元素名为empty的成员 等价(*pbeg).empty()
			++result;
	}
	cout << result << endl;

	//指针的退后和前进
	constexpr size_t sz = 5;
	int arr[sz] = { 0,1,2,3,4 };
	int *ip = arr;          // int *p = &arr[0]
	int *ip2 = ip + 4;
	cout << *ip2 << endl;

	//指针也可以指向数组的尾元素的下一位置
	int *ip3 = arr + sz;   //不能再使用解引用了   使用arr的时候 就代表了&arr[0]
	cout << *ip3 << endl;   //-858993460
	int *ip4 = arr + 10;    //1899592  超出arr的元素个数，ip4指向的值未定义
	cout << *ip4 << endl;

	//两个指针相减跟迭代器运算一样是距离，必须指向同一数组中的元素
	auto n = end(arr) - begin(arr);  //n的值是5，也就是arr中的元素数量
	//相减的结果是 ptrdiff_t的标准库类型，和size_t一样，定义在cstddef头文件中。差值可能是负，带符号
	int *b = arr, *c = end(arr);    //*c = arr + sz
	while (b < c) {
		cout << *b << endl;
		++b;
	}

	/*//如果指向不相关对象，不能比较
	int i = 0, sz = 42;
	int *p = &i, *e = &sz;
	//未定义的：p和e无关，因此比较毫无意义
	while (p<e)*/



	system("pause");
	return 0;
		

}