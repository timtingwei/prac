#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;
using std::initializer_list;
using std::vector;

void swap(int v1, int v2)
{
	//形参是引用类型，会直接改变实参值，而不是创建局部变量为副本，在运行后销毁。
	//如果两个值是相等的，则不需要交换，直接退出
	if (v1 == v2)
		return;     //这里的用法 相当于 break
	//如果执行到这里 说明还需要继续完成某些功能 
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	//此处无须显式的return语句
	//void函数 也可以返回一个 void函数
}


//只要不是void函数，函数一定要有返回值，返回值和函数类型相同。
//编译器确保函数具有返回值的函数只能通过一条有效的return语句退出 

//因为含有不正确的返回值，代码无法通过编译 
bool str_subrange(const string &str1, const string &str2)
{
	//大小相同：此时用普通的相等性判断结果作为返回值
	if (str1.size() == str2.size())
		return str1 == str2;             //正确： ==运算符返回bool
	//得到较短string对象的大小
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	
	//检查两个string对象对应的字符是否相等，以较短的字符串长度为限
	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i])
			return false;             //原先错误1:没有返回值
	}
	return true;
	//原先错误2:控制流可能尚未返回任何值就结束了函数的执行 
	//含有return语句的循环后面都要有一条return语句，没有的话程序就是错误的，编译器有可能无法发现。
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	//给定计数值ctr，如果ctr>1,返回单词复数形式；否则，返回单数
	return (ctr > 1) ? word + ending : word;
	//string之间可以直接相连吗？通过+相加得到字符串的和
}

const string &shorterString(const string &s1, const string &s2)
{
	//函数返回引用，则该引用仅是它所引对象的一个别名。
	return s1.size() <= s2.size() ? s1 : s2;
	//形参，返回类型都是const string引用，不管调用还是返回都不会真正拷贝string对象。
}

/*//严重错误：这个函数试图返回局部对象的引用
const string &manip()
{
	string ret;
	//以某种方式改变一下ret
	if (!ret.empty())
		return ret;        //错误：返回局部对象的引用
	else
		return "Empty";    //错误："empty"是一个局部临时量
}*/

/*//修改manip函数
const string &manip_revise(string ret, const string emp)
{
	//ret = "";
	if (!ret.empty())
		return ret;
	else
		return emp;
}*/

char &get_val(string &str, string::size_type ix)
{
	return str[ix];       //get_val假定索引有效
}

vector<string> process(int i)
{
	//..
	//expected和actual都是string对象

	if (i == 0)
		return{};
	if (i == 1)
		return{ "functionX","okay" };
	else
		return{ "functionX","wrong" };
}


int main_not()
{
	//无返回值的函数
	int v1 = 4, v2 = 10;
	swap(v1, v2);
	cout << v1 << " " << v2 << endl;

	//有返回值的函数
	bool bresult = str_subrange("timcooper", "ti1m");
	cout << bresult << endl;
	

	//值是如何被返回的
	cout << make_plural(2, "apple", "s") << endl;
	string s1 = "tim", s2 = "cooper", s3 = s1 + s2;   //字符串的和
	cout << s3 << endl;   

	//函数返回引用
	string sresult = shorterString("tim", "cooper");
	//sresult = "timcooper";
	cout << sresult << endl;

	//不要返回局部对象的引用或者指针
	//函数完成后，所甄用的存储空间也随之被释放掉，因此，函数终止意味着局部变量的引用将指向不再有效的内存区域
	//确保函数返回值安全，不妨在返回值之前提问：引用所引的是在函数之前已经存在的哪个对象
	
	//string sresult1 = manip_revise(s1, "empty");
	//cout << sresult1 << endl;
	//同理，返回局部对象的指针，与返回引用一样是错误的。

	//返回类型的函数和调用运算符 
	//与. -> 优先级相同
	auto sz = shorterString(s1, s2).size();
	cout << sz << endl;
	//满足左结合律，shorterString的运算结果是.运算符的左侧运算对象，点运算符可以得到string对象的size成员，size又是第二个调用运算符的左侧对象

	//引用返回左值 
	//调用一个引用函数得到左值，其他类型返回右值
	//特别的是，能够为 非常量引用函数的结果赋值
	string s("a value");
	cout << s << endl;      //输出a value
	get_val(s, 0) = 'A';    //将s[0]改为A
	cout << s << endl;      //输出A value
	//返回值是常量引用
	//shorterString("hi", "bye") = "X";

	//列表初始化返回值
	//如果列表为空，临时量执行值初始化；否则，返回的值由函数的返回类型决定



	system("pause");
	return 0;
}

int mai_exit()
{
	bool some_failure = true;
	if (some_failure)
		return EXIT_FAILURE;
	else
		return EXIT_SUCCESS;

	system("pause");
	return 0;
}

int factorial(int i)
{
	if (i > 1)
		return factorial(i - 1) * i;
	return 1;    //递归的终止条件是i=1
}

int main_factorial()
{
	int result = factorial(5);
	cout << result << endl;
	
	system("pause");
	return 0;
}