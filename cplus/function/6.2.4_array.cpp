#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

//数组的性质：不允许拷贝数组，使用数组时会转换成指针
//不能按值传递，实际传递的是指向数组的指针

void print01(const int* ia) { /*...*/ }
//void print(const int ia[] );          //函数的意图是作用于一个数组
//void print(const int ia[10]);        //这里的维度表示我们期望数组含有多少元素，实际不一定


int main_print01()
{
	int i = 0, j[2] = { 0,1 };
	print01(&i);                   //正确：&i的类型是int*
	print01(j);                    //正确：j转换成int*并指向j[0]
	//传给print函数是一个数组，则实参作用形参的函数转换成指向数组首元素的指针
	//数组作用形参的函数，要确保使用数组时不会越界
	system("pause");
	return 0;
}

//数组是以指针的形式传递给函数的，调用者应该为此提供一些额外的信息。
//管理指针形参有三种常用的技术

//使用标记指定数组的长度
void print02_1(const char *cp)
{
	if (cp) {                  //若cp不是一个空指针
		while (*cp)            //只要指针所指的字符不是空字符
			cout << *cp++;     //输出当前字符串并将指针向前移动一个位置
	}
	cout << endl;
}

//使用标准库规范
void print02_2(const int *beg, const int *end)  //传入两个指针，一个指向输出的首元素，一个指向尾元素的下一位置  
{
	//输出beg到end之间（不含end）的所有元素
	while (beg != end)
		cout << *beg++ << endl;     //输出当前元素，指针向前移动一位

}

//显示传递一个表示数组大小的形参 
void print02_3(const int ia[], size_t size)
{
	//通过形参size的值确定输出多少元素
	for (size_t i = 0; i != size; ++i) {
		cout << ia[i] << endl;
	}
}

int main_print02()
{
	//数组是以指针的形式传递给函数的，调用者应该为此提供一些额外的信息。
	//管理指针形参有三种常用的技术
	print02_1("tangsangshuang");

	//string s = "TangSangshuang";
	//const auto beg = s.begin(), end = s.end();
	int ia[] = { 1,2,3,4,5 };
	print02_2(begin(ia),end(ia));

	cout << endl;
	print02_3(ia, end(ia) - begin(ia));         //调用print02_3函数，数组和size_t作为形参

	//当数组不需要进行写操作时，应该定义成指向const的指针。当函数确实要改变元素值的时候，才把形参定义成指向非常量的指针。

	system("pause");
	return 0;
}


//正确：形参是数组的引用，维度是类型的一部分
void print03_1(int(&arr)[10])
{
	for (auto elem : arr) {
		cout << elem << endl;
	}

	//f(int &arr[10])      //错误：将arr声明成引用的数组
	//f(int (&arr)[10])    //正确：将arr声明成数组的引用
}



int main_print03()
{
	//数组引用形参 
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	print03_1(arr);

	//引用数组形参可以放心的函数体内使用数组，但是无形中限制了print函数的可用性，只能作用于大小为10的数组
	int i = 0, j[2] = { 0,1 };
	int k[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//print03_1(&i);           //错误：实参不是含有10个整数的数组
	//print03_1(j);            //错误：实参不是含有10个整数的数组
	print03_1(k);              //正确：实参是含有10个整数的数组
	system("pause");
	return 0;
}

void print04_1(int (*matrix)[2], int rowSize)
{
	//matrix声明成指向含有2个整数的数组的指针
	//for (auto &row:matrix)
		//for (auto &i : row) {
			//cout << i << endl;
		//}
}

void print04_2(int matrix[][2], int rowSize)
{
	//等价定义
	cout << matrix[1][0] << endl;
	//看起来像个二维数组，实际上形参是指向含有10个整数的数组的指针
}



int main_print04()
{
	//传递多维数组 
	int arr[3][2] = { {1,2},{3,4},{5,6} };  //定义一个三行两列的多维数组 
	//真正传递的是指向数组首元素的指针。首元素本身是一个数组，指针就是一个指向数组的指针。数组的第二维的大小都是数组类型的一部分
	print04_1(arr, 3);
	print04_2(arr, 3);
	system("pause");
	return 0;
}

