#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//函数指针
//函数指针指向某种特定类型。函数的类型由它的返回类型和形参类型共同决定，与函数名无关。
//函数和指针的关系


//重载函数的指针
void ff(int*);
void ff(unsigned int);

//函数指针形参
//虽然不能定义函数类型的形参，但是可以是指向函数的指针
//第三个形参是函数类型，它会自动转换成指向函数的指针
void useBigger(const string &s1, const string &s2, bool pf(const string&, const string&));
//等价，显示声明成指向函数的指针
void useBigger(const string &s1, const string &s2, bool(*pf)(const string&, const string&));




/*int main_funcPtr67()
{

	//比较两个string对象长度
	bool lengthCompare(const string &, const string&) { return 0; };
	//函数的类型是bool(const string&, const string&)
	//用指针替换函数名
	bool(*pf)(const string&, const string&);   //未初始化
	//pf是一个指向函数的指针，参数是两个const string引用，返回值是bool类型

	//不加括号的形式
	//bool *pf(const string&, const string&); pf是一个返回值为bool指针的函数
	//使用函数指针 
	pf = lengthCompare;       //pf指向名为lengthCompare的函数
	pf = &lengthCompare;      //取地址符可以忽略

	//指向函数的指针调用函数，无须解引用
	bool b1 = pf("Hello", "World");
	bool b2 = (*pf)("Hello", "goodbye");
	bool b3 = lengthCompare("Hello", "goodbye");

	//指向不同函数类型的指针之间不存在转换规则。
	//但是可以为指针赋一个nullptr或者值0的整型常量表达式，表示没有指向任一函数
	string::size_type sumLength(const string&, const string&);
	bool cstringCompare(const char&, const char&);
	pf = 0;                          //pf不指向任何函数
	//pf = sumLength;                //错误：函数指针在赋值时，返回类型不匹配
	//pf = cstringCompare;           //错误：返回类型匹配，参数列表不匹配
	pf = lengthCompare;              //正确：函数和指针的类型完全匹配。
	//pf = 0;
	//bool b4 = pf("Hello", "World");     //调用不指向任何函数的指针
	
	//重载函数的指针
	//void(*pf1)(unsigned int);         //pf1指向ff，未定义
	//pf1 = ff;                         //pf1和void ff(unsigned int);精准匹配 
	void(*pf1)(unsigned int) = ff;      //pf1指向ff(unsinged int)重载版本，精准匹配
	//指针类型必须与重载函数中的某一个精准匹配
	//void(*pf2)(int) = ff;             //错误：形参列表不匹配
	//double(*pf3)(int*) = ff;          //错误：ff和pf3的返回类型不匹配
	
	//自动将lengthCompare转换成指向该函数的指针
	useBigger("a", "b", lengthCompare);
	//使用typdef和decltype简化指向函数的代码
	//Func和Func2是函数类型
	
	typedef bool Func(const string&, const string&);
	typedef decltype(lengthCompare) Func2;           //等价的类型
	//FuncP和FuncP2是指向函数的指针
	typedef bool(*FuncP)(const string&, const string&);
	typedef decltype(lengthCompare) (*FuncP2);

	void useBigger(const string&, const string&, Func);    //自动将func表示的函数，转换成指针
	void useBigger(const string&, const string&, FuncP2);

	using F = int(int*, int);           //F是函数类型，不是指针
	using PF = int(*)(int*, int);       //PF是指针类型

	PF f1(int);                         //正确：PF是指向函数的指针，f1返回函数的指针
	//F f2(int);                        //错误：F是函数类型，f1不能返回一个函数
	F* f2(int);                         //正确：显示指定返回类型
	
	//直接声明f1
	int(*f1(int))(int*, int);
	//f1有形参列表，所以f1是一个函数；f1前面有*，所以f1返回一个指针；
	//进一步发现，指针类型本身也有形参列表，因此指针指向函数，该函数的返回类型是int
	//尾置类型返回
	auto f2(int) -> int(*)(int*, int);

	//将auto和decltype用于函数指针类型
	string::size_type sumLength(const string&, const string&);
	string::size_type largerLength(const string&, const string&);
	//根据其形参的取值,getFcn函数返回指向sumLength的指针
	decltype (largerLength) *getFcn(const string&);

	//当decltype指向某个函数时，它返回函数类型而非指针类型
	//需要显示*来使得函数返回指向函数的指针
	system("pause");
	return 0;
}*/