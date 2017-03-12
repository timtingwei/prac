#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int iterator01_34()
{
	//利用迭代器代替用下标运算把string对象的第一个字母改为大写
	string s("some string!");
	if (s.begin() != s.end()) {   //begin == end时候，代表空，!=代表非空
		//s.begin() = toupper(s.begin());   //s.begin()是一个迭代器，并非元素
		auto it = s.begin();      //it表示s的第一个字符
		*it = toupper(*it);       //*iter 才能返回迭代器iter所指向的元素
	}
	for (auto i : s)
		cout << i;
	cout << endl;

	//将string类型对象的第一个单词改为大写 ++iter方法
	//if ((s.begin()) != s.end()) {
		//for (decltype(s.begin()) it1 = s.begin(); (*it1 != " "); ++it1)
			//*it1 = toupper(*it1);
	//}
	//上述为我的做法

	for (auto it = s.begin(); (it != s.end() && !isspace(*it)); ++it)  //it指示着s中的一个字符
		*it = toupper(*it);
	for (auto i : s)
		cout << i;
	cout << endl;
	//泛型编程：
	//for循环中使用 ！= 而不用 <的原因，因为所有标准的迭代器都定义了的 ==和 ！=，但是它们中大多数没有定义<运算符
	/*for (decltype(s.begin()) it = s.begin(); (it != s.end() && !isspace(*it)); ++it)
		*it = toupper(*it);
	for (auto i : s)
		cout << i;
	cout << endl; */
	
	/*//迭代器类型
	vector<int>::iterator it1;       //it1能读写vector<int>的元素
	string::iterator it2;            //it2能读写string对象中的字符

	vector<int>::const_iterator it3;   //只读不写
	string::const_iterator it4;*/

	//如果对象是常量 只能用const_iterator

	/*
	//begin和end运算符
	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin();        //it1的类型是vector<int>::iterator
	auto it2 = cv.begin();       //it2的类型是vector<int>::const_iterator
	*it1 = 2;   //it1可修改
	//*it2 = 2;   //无法给常量赋值*/

	//如果对象只需读操作，而不是写操作的话用 const_iterator
	vector<int> ivec(10, 0);

	/*for (vector<int>::const_iterator it3 = ivec.begin(); it3 != ivec.end(); ++it3) {
		//*it3 *= *it3;    //如果类型为const_iterator时，不能写只能读
		cout << *it3;
	}
	for (auto i : ivec)
		cout << i;
	cout << endl;*/

	// c++11新标准引入cbegin和cend，为了方便专门得到const_iterator;
	//auto it3 = v.cbegin();
	for (auto cit = ivec.cbegin(); cit != ivec.cend(); ++cit)
		cout << *cit;
		//*cit *= *cit;   //cit的类型为 vector<int>::const_iterator 只读不写
	for (auto i : ivec)
		cout << i;
	cout << endl;

	//箭头运算符 ：结合解引用和访问运算符操作
	vector<string> v1{ "a","b","c" };
	auto it = v1.begin();
	(*it).empty();   //正确：it此时指向第一个元素，*it解引用，检测第一个元素是否为空
	//*it.empty();  //错误：it是一个迭代器，没有empty成员，无法使用.empty()
	vector<string> istr{ "timtingwei" };
	auto it2 = istr.begin();
	it2->empty();   //it2->empty() 等价于(*it2).empty()把解引用和访问结合在一起
	vector<string> text{ "word1","word2","word3","","word4" };
	for (auto it = text.cbegin();
	it != text.cend() && !it->empty(); ++it)
		cout << *it;
	cout << endl;

	//使用了迭代器的循环体，不能再向容器中添加元素了
	vector<int> tvec(10, 3);
	for (auto it = tvec.cbegin(); it != tvec.end(); ++it)
		//tvec.push_back(7);  //不能再添加改变容器的容量了
	for (auto i : tvec)
		cout << i;
	cout << endl;



	system("pause");
	return 0;
}