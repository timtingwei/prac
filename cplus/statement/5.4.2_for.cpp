#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int for_542()
{
	//for (initializer;condition;expression)
	//expression负责init-statement初始化的变量,这个变量正好就是condition检查的对象，修改发生在循环迭代之后

	//重复处理s的中字符转换成大写，直至我们处理完全部字符或者遇到一个表示空白的字符
	/*string s = "aabbsd aoiwew";
	for (decltype(s.size()) ix = 0;
	ix != s.size() && !isspace(s[ix]); ++ix)
		s[ix] = toupper(s[ix]);*/
	
	/*//cout << ix << endl;    for语句头定义的对象只在ix中可见，结束后ix不可用
	string s = "aabbsd aoiwew";
	decltype(s.size()) ix = 0;
	for (ix;
	ix != s.size() && !isspace(s[ix]); ++ix)
		s[ix] = toupper(s[ix]);
	cout << ix << endl;    //6 因为此时ix不是在for语句头内被定义


	for (auto i : s)
		cout << i << " ";
	cout << endl;*/

	/*//for语句头中的多重定义
	//init-statement定义多个对象，但只能有一条声明语句,所有变量的基础类型相同
	vector<int> vec = { 0,1,2,3,4 };
	//用for循环将vector拷贝一份到后面
	for (decltype(vec.size())ix = 0, sz = vec.size(); ix != sz; ++ix)   //一条声明语句定义多个对象
		vec.push_back(vec[ix]);
	
	for (auto i : vec)
		cout << i << " ";
	cout << endl;*/

	//省略for语句头的某些部分
	vector<int> v = { 0,1,2,3,4 };
	//auto beg = v.begin();
	//for (/*...*/; beg != v.end(); ++beg)   //省略for语句的初始化部分
		//cout << *beg << " ";
	//cout << endl;
	
	//for (auto beg = v.begin();/*...*/; ++beg)  //省略for语句条件部分 该部分判别为true，循环会一直进行
		//条件为空时，循环内部需要负责终止迭代过程
	//cout << endl;

	//将读入整数的while循环改写成for循环
	for (int i; cin >> i;/*表达式为空*/)
		v.push_back(i);
	

	system("pause");
	return 0;

}