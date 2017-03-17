#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int logic_operator_43()
{
	//关系运算符作用于算术类型或指针类型；逻辑运算符作用于任意能转换成布尔值的类型
	//逻辑运算符和关系运算符的返回值都是0.
	//值为0的运算对象（算术类型或指针类型）表示假，否则表示真。
	//对于两类运算符来说，运算对象和求值结果都是右值。
	int i1 = 0, i2 = 1;
	int *p1 = &i1;    //p是i1的指针
	
	//int *p2;     //p2是一个空指针       //p2没有被初始化,c++中应要初始化每一个指针
	//初始化空指针的方法 nullptr 0 NULL
	int *p2 = nullptr;  //等价于int *pt2 = 0;
	int *p3 = 0;        //直接将p3初始化为字面常量0
	int *p4 = NULL;     //等价于int *p4 = 0;
	//值为0的指针表示假
	cout << (p2 ? " not nullptr " : "nullptr") << endl;
	//值为0的算术类型
	cout << (i2 ? " true " : "false") << endl;

	//&& 和 || 都是明确规定了运算对象的求值顺序:先求左值再求右值
	//短路求值(short-circuit evaluation):当且仅当左侧运算对象无法确定表达式的结果时才会计算右侧运算对象的值
	//&&：左真求右
	//||：左假求右

	//重写P85循环，体会左值对右侧安全性的影响
	string s = "hello world";
	for (decltype(s.size()) ix = 0;
	ix != s.size() && !isspace(s[ix]);   //左侧先求为了确保ix再合理范围内求值
		++ix
		)
		s[ix] = toupper(s[ix]);         //当前字符改为大写形式

	for (auto i : s)
		cout << i;
	cout << endl;   //输出 HELLO world

	//要求输出string对象的内容并且再遇到空字符串或者以句号结束的字符串时候进行换行，否则用空格隔开
	//string text("my name is tim,i like c++");
	vector<string> text{ "my", "name", "is", "Tim", ".", "i", "", "like", "c++" };
	for (const auto s : text) {
		cout << s;            //先输出处理的字符串s
		(s.empty() || s[s.size() - 1] == '.') ? cout << endl : cout << " "; //遇到空字符串隔开，否则用空格隔开
	}
	cout << endl;
	//运用了短路求值的特性，只有当s非空时，才需要求第二个运算对象的值
	//在循环中，text对象是string对象，可能会非常大，将变量声明成引用类型可以避免拷贝。
	//声明成常量是因为不需要对string进行写操作

	//逻辑非运算符 
	//vec是一个整数类型的vector对象，用！运算符检查vec是否含有函数;
	vector<int> vec{};
	cout <<( !vec.empty() ? "have" : "there is no item in vec" )<< endl;

	//关系运算符
	//满足左结合律：从左往右计算
	int i(0), j(1), k(2);
	//条件拿i<j的布尔值和k进行比较！不是原意
	//if (i < j < k) {/*...*/ };   
	//正确：当i<j为真，计算j<k
	if (i < j && j < k) {/*...*/ };

	//相等性测试与布尔字面值
	//真值测试
	int ival = 1;
	if (ival) {/*...*/ };            //如果ival是任意非0值，条件为真
	if (!ival) {/*...*/ };           //如果ival是0，条件为真

	//真值测试的另外一种写法
	//if (ival == true) {/*...*/ };   //只有当ival为1时，条件才为真
	//这样写没什么必要。
	//1.较长而且不太直接 2.更重要的一点是，如果val的类型不是bool值，比较就失去意义

	//改写如下
	if (ival == 1) {/*...*/ };
	//真想知道就直接和1比，不要与true比较 

	//如果想测试一个算术对象或指针对象的真值，最直接的方法就是将其作为if语句条件，真值测试

	//进行比较运算时除非比较bool值否则不要使用布尔字面值true和false作为运算对象




	system("pause");
	return 0;
}