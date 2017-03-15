#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int prac_344()
{
	//输出数组ia中的元素
	//version1：范围for语句管理迭代过程
	//version2：普通for，下标运算符
	//version3：指针
	//直接写出数据类型，不能使用类型别名、auto关键字或者decltype关键字
	//使用类型别名来代替循环控制变量的类型

	//ia是二维数组
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };

	//声明类型别名
	using int_array = int[4];       //Q：类型别名为什么这样声明  sloved
	//typedef int int_array[4]      
	using array_t = size_t;

	//version1:for范围管理迭代
	//row是含有4个整数的数组
	for (int_array (&row) : ia) {     //Q：row是一个数组，对ia中数组的引用，里面存放着整型？？ 只要是声明一个数组，就一定要写容量
								  //i是数组中中的整数
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:下标运算符
	//i是数组的下标，下标的类型是size_t  容易跟size_t弄混淆的是什么类型 ？？
	for (array_t i = 0; i != 3; ++i) {  //++i  or i++ ??
									   //对arr[i]中的元素下标进行循环
		for (array_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:指针
	//初始化让指针pi指向ia的首个数组，pi必须要有容量
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (int_array (*pi) = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
														 //*pj是该数组, pj指向该数组的首个元素
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi是指向ia首个数组（指针）的指针，需要容量的是pi所指向的数组（指针）*pi，*pi的容量是4；*pi又是一个指针（数组），指向首个元素
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;
}
/*//ia是二维数组
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
using int_array = int[4];
typedef int int_array[4];     //为什么不是 typedef int[4] int_array？？
//输出ia中每个元素的值，每个内层数组各占一行
for (int_array *p = ia; p != ia + 3; ++p) {  //为什么能用用int_array *p = ia 代替了 int (*p)[4] = ia 
	for (int *q = *p; q != *p + 4; ++q)
		cout << *q << " ";
	cout << endl;
}

//ia是二维数组
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
//for (int *pi = ia; pi != ia + 3; ++pi) {
for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] 三者的区别??
	//*pj是该数组, pj指向该数组的首个元素
	for (int *pj = *pi; pj != *pi + 4; ++pj)         
		cout << *pj << " ";
	cout << endl;
}*/

/*typedef double wages;     //wages是double的同义词  左原
typedef wages base, *p;   //base是double/wages的同义词，p是double* 的同义词

using db = double;  //db是double的同义词  右原

typedef char *pstring;   //原来复合类型是char*   pstring是指向char的指针，这一个特性在后面是不会变的
const pstring cstr = 0;  //cstr是指向char的常量指针
const pstring *ps;       //ps是指针，他的对象是指向char的常量指针   新问题：为什么不是ps是常量指针，它指向的是指向char的指针？？

int errNumb = 0;
int *const curErr = &errNumb;   //curErr是一个常量，它又是一个指针，说明一直指向errNum,该int类型对象。
const double pi = 3.14159;
const double *const pip = &pi;  //pip是一个常量，又是一个指针，说明一直指向pip（pip是pi的地址，地址不变）。它又指向常量对象。因此是指向常量对象的常量指针。
*/

string line("hello,world");
auto len = line.size();     //len是string::size_type类型

string s1 = "hello";
string tmp = s1 + ", ";
string s2 = tmp + "world";  //字面值类型可以和string类型相加，但是不同类型