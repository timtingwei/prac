#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int array02_36()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int a2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  //与之前的初始化语句是等价的

	//显示初始化每行的首元素
	int a3[3][4] = { {1},{5},{9} };
	//显示初始化第一行
	int a4[3][4] = { 1,2,3,4 }; 

	int ia[3][4];
	int arr[10][20][30] = {0};
	//arr的首元素-> / 用ia最后一行的最后一个元素
	ia[3][4] = arr[0][0][0];   //ia[3][4] = ***arr;  是否可行  可行
	//ia[3][4] = ***arr;    //正确
	cout << ia[3][4] << endl;

	/*                                       //test bind pointer
	int ival = 5;
	//int b = &ival;  错误
	int &b = ival;        //ival和b绑定
	b = 1;                //1 -> ival
	cout << ival << endl;   
	int *p = &ival;       //p是指向ival的指针
	cout << *p << endl;*/

	//把row bind到ia的第二个4元素数组上;
	int(&row)[4] = ia[1];   //第二个四元素 下标是1  //记得row也是数组，也需要容量

	//两层嵌套的for循环来处理多维数组的元素
	constexpr size_t rowCnt = 3, colCnt = 4;   //三行四列的容量
	int iarr[rowCnt][colCnt];
	for (size_t j = 0; j != rowCnt; ++j) {
		for (size_t k = 0; k != colCnt; ++k) {
			iarr[j][k] = j*colCnt + k;       //j,k的类型都为size_t,colCnt类型同
		}
	}
	
	//使用范围for语句处理数组
	//for (auto row : iarr) {
		//for (auto item : *row) {
			//cout << item << " ";
		//}
		//cout << endl;
	//}

	//下标标 准输出二维数组
	for (size_t i = 0; i != rowCnt; ++i) {
		for (size_t j = 0; j != colCnt; ++j)
			cout << iarr[i][j] << " ";
		cout << endl;
	}

	//使用范围for语句处理数组
	size_t cnt = 0;
	for (auto &row : iarr) {
		for (auto &i : row) {
			i = cnt;
			++cnt;
		}
	}
	
	//正确的范围for语句
	for (auto &row : iarr) {    //i和row都是引用类型 
		for (auto &i : row)
			cout << i << " ";
	}
	cout << endl;

	/*//数组和指针的关系
	//数组作为auto语句变量初始值
	int ia_test[] = { 0,1,2,3,4,5,6,7 };
	auto ia2_test(ia_test);       //ia2是一个指针，指向ia的第一个元素
	//ia2_test = 42;              //错误：不能将int赋值给int*
	//auto ia2_test(ia_test[0]);    //实际上编译器所执行的是
	//当使用decltype时，不会发生上述转换
	int ival_t = 5;
	int *p_t = &ival_t;
	decltype(ia_test) ia3_test = { 0,1,2,3,4,5 };
	//ia3_test = p_t;     //错误： 不能把整型指针赋值给数组
	ia3_test[4] = 1;    //正确：ia3_test是一个数组类型*/
	


	system("pause");
	return 0;
}

