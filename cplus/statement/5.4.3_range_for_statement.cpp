#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int range_for_statement_543()
{
	//范围for语句 
	/*
	for (declaration:expression)
	    statement
	*/
	//expression必须是一个序列:花括号初始值列表，数组，vector,string等类型对象，共同特点都是能返回迭代器的begin和end成员
	//用对象的类型 替换 auto 
	for (int i : { 0,1,2,3,4,5 })
		cout << i << " ";
	cout << endl;
	
	int iarr[6] = { 0,1,2,3,4,5 };
	for (int i : iarr)   //iarr是否是指向第一个元素的指针  没有 这条语句是正确的
		cout << i << " ";
	cout << endl;

	vector<int> ivec = { 0,1,2,3 };
	for (int i : ivec)
		cout << i << " ";
	cout << endl;

	string s = "abccd";
	for (char i : s)
		cout << i << " ";
	cout << endl;
	//for循环的实质
	for (auto beg = ivec.begin(), end = ivec.end(); beg != end; ++beg)
		cout << *beg << " ";
	cout << endl;

	//把vector对象中的元素都翻倍
	vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto &r : v)  //对v中的每一个元素
		r *= 2;        //将v中的每个元素都翻倍
	//与范围for等价的传统for
	for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
		auto &r = beg;     //引用指针还是引用指针指向的元素，都是可以的
		(*r) *= 2;         //对beg所指向的元素翻倍
	}
	for (auto i : v)
		cout << i << " ";
	cout << endl;
		
	//不能通过范围for语句增加vector对象的元素。在范围for语句中，预存了end()的值，一旦元素数量改变，end函数的值就可能变得无效




	system("pause");
	return 0;


}