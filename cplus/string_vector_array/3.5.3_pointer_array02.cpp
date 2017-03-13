#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pointer_array02_353()
{
	//指针也是迭代器
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *p = arr;     //指针p指向arr数组的第一个item
	cout << *p << endl;
	++p;             //指针位置前移一位
	cout << *p << endl;

	//利用指针遍历数组中的元素
	//第一个元素指针和指向数组尾部元素的下一位
	//int *begin = arr;
	int *end = &arr[10];    //指向arr尾元素的下一位置的指针,数组只能索引到9
	for (int *b = arr; b != end; ++b)
		cout << *b << endl;

	system("pause");
	return 0;
}