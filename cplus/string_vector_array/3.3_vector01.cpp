#include <vector>
#include <string>
using std::vector;
using std::string;

int vector01_33()
{

	/*//提供额外的信息是vector内所存放对象的类型
	vector<int> ivec;                  //ivec存放int类型的对象
	vector<Sales_item> Sales_vec;      //保存Sales_item类型的对象
	vector<vector<string> >;           //该向量的元素是vector对象
	
	vector<string> svec;  //默认初始化，svec不含任何元素
	//最常见的方式是 定义一个空vector，然后再运行时逐一添加
	*/


	/*//vector类型相同时，可以拷贝，新的vector对象的元素就是原vector对象对应元素的副本
	vector<int> ivec;   //初始状态为空
	vector<int> ivec2(ivec);    //把ivec的元素拷贝给ivec2
	vector<int> ivec3 = ivec;   //把ivec的元素拷贝给ivec3
	//vector<string> svec = ivec; //错误：svec的元素是string对象

	//列表初始化vector对象
	vector<string> articles = { "a", "an", "the" };

	//一：使用拷贝初始化时（=），只能提供一个初始值
	//二：类内初始值，只能使用拷贝初始化和花括号初始化
	//三：初始元素值列表：只能把初始值放在花括号里进行列表初始化,不是括号

	vector<string> v1{ "a", "an", "the" }; 
	//vector<string> v2("a", "an", "the");  //错误
	*/


	/*//指定数量的元素
	vector<int> ivec(10, -1);
	vector<string> svec(10, "Tim");
	*/

	/*
	//值初始化
	vector<int> ivec(10);
	vector<string> svec(10);

	//列表初始值还是元素数量
	//圆括号 构造(construct)  花括号  列表初始化(list initialize)
	vector<int> v1(10);    //10个0
	vector<int> v2{ 10 };  //一个10
	
	vector<int> v3(10, 1); //10个1
	vector<int> v4{ 10, 1 }; //10和1两个元素构成列表

	vector<string> v5{ "hi" };    //列表初始化,"hi"元素一个
	//vector<string> v6("hi");      //错误:不同使用字符串字面值构建vector对象
	vector<string> v7{ 10 };         //v7有10个默认初始化对象
	vector<string> v8{ 10, "hi" };   //v8有10个"hi"

	// v7,v8提供值不能列表初始化，编译器就会自动选择construct
	*/
	return 0;


}