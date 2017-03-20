#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pp_operator_45()
{
	//递增和递减运算符 
	//很多迭代器不支持算术运算，用递增和递减运算符除了书写简洁外还是必须的
	//前置 后置 递增 
	//前置 ++i： 求值对象+1，改变后的结果作为求值结果  
	//后置 i++： 求值对象+1，求值结果是 运算对象改变前的副本
	int i = 0, j;
	j = ++i;    //i=1,j=1
	cout <<i << " "<<j << endl;
	i = 0; j = 0;
	j = i++;    //i=1,j=0    //j的赋值对象是 i改变前的副本
	cout << i << " " << j << endl;
	//两种运算符必须作用于左值对象。
	//前置版本将对象 本身作为左值返回
	//后置版本将对象 原始值的副本作为右值返回

	//解引用和递增运算符 
	//后置版本可以将变量+1 又能用原来的值
	vector<int> ivec = { 0,2,3,-4,2,3 };
	auto pbeg = ivec.begin();
	while (pbeg != ivec.end() && *pbeg >= 0)
		cout << *pbeg++ << endl;
	// *pbeg++ 的用法 普遍
	// 错误：* 和 ++ 的优先级是并列的,右结合律 ++分为后置和前置
	//正确： * 和 后置++的优先级，++更高
	//pbeg++  使得指针前移动，但是返回是确实原来的指针
	//* 解引用的运算对象是原来的指针
	//总体的结果 就是 解引用原来的指针，指针前移一位

	/*cout << *iter << endl;
	++iter;*/

	/*cout << *iter++ << endl;*/    //写法简洁，不易出错

	//对象的求值顺序
	string s = "hello world";
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it); 

	//for (auto i : s)
		//cout << i;
	//cout << endl;
	
	/*//下面循环是未定义的
	auto it = s.begin();
	while (it!=s.end() && !isspace(*it))
		*it = toupper(*it++);
	//赋值运算符左右两边都用到了it，但右侧运算对象改变了it的值，所以赋值语句是未定义的
	*it = toupper(*it);         //如果先求左侧的值
	*(it + 1) = toupper(*it);    //先求右侧的值
	//具体采用哪种做法还是不确定的*/

	for (auto i : s)
		cout << i;
	cout << endl;


	system("pause");
	return 0;
}