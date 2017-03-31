#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

//对引用的操作，实际上是作用在引用所引用的对象上

void reset_r(int &i)    //接受的参数是引用类型而非指针  void reset_p(int *i)
{
	i = 0;              //改变i所引用对象的值
	//i仅仅是j的另一个名字，在reset内部对i的使用 即是对j的使用
}


int main_basic()
{
	int n = 0, i = 42;
	int &r = n;        //r绑定了n(r是n的别名)
	r = 42;            //现在n的值是42
	r = i;             //现在n的值和i相同
	i = r;             //i的值和n相同
	int j = 7;
	//reset_r(&j);               //错误:非常量引用的初始值必须是左值   
	reset_r(j);                  //指针 int *j = &i; 引用int &j = i
	cout << "j= " << j << endl;  //输出 j= 0

	system("pause");
	return 0;

}

//比较两个string对象的长度
bool isShorter(const string &s1, const string &s2) //当函数无须修改引用参数的值时，最后使用常量引用
{
	return s1.size() < s2.size();       //返回s1长度是否小于s2的布尔值
}

int main_refer()
{
	//使用引用避免拷贝
	//拷贝大的类类型对象或者容器对象比较低效  
	//某种类型不支持拷贝操作时，函数只能通过引用形参访问该类型的对象

	bool call_b = isShorter("my", "tim");    //调用isShorter函数，比较两个字符串，返回值赋值给call_b
	cout << call_b << endl;                  //输出 1

	system("pause");
	return 0;
}

string::size_type find_char(const string &s, char c,
	string::size_type &occurs)
{
	auto ret = s.size();              //第一次出现的位置(如果有的话)
	for (decltype(s.size()) ix = 0; ix != s.size(); ++ix) {
		if (s[ix] == c) {             //索引当前对象和字符c逻辑相等
			if (ret == s.size())      //确保第一次出现
				ret = ix;             //改变第一次出现的位置
			++occurs;                 //出现次数增加1
		}
	}
	return ret;                       //显式返回第一次出现的位置，通过引用形参隐式返回出现次数
}

int main_find_char()
{
	//使用引用形参返回额外信息
	//一个函数只能返回一个值，然而有时函数需要同时返回多个值，引用形参为我们一次返回多个结果提供了有效途径

	//既返回位置又返回该函数出现的总次数
	//方法一：定义一个新的数据类型，让它包含位置和数量两个成员
	//方法二：给函数传入一个额外的引用实参，令其保存字符出现的次数
	string s = "mynameistim";
	char c = 'm';
	string::size_type occurs = 0;
	string::size_type ret = find_char(s, c, occurs);      //调用find_char函数,返回出现次数，传入实参改变occurs的值
	cout << "ret: "   << ret 
		<< " occurs: " << occurs << endl;                 //输出 ret:0 occurs: 3

	occurs = 0;                                  //出现次数重置为0
	auto index = find_char(s, 'u', occurs);      //再次调用查找字符'u'
	cout << "ret: " << index                     //如果没有字符，出现位置为字符串长度   
		<< " occurs: " << occurs << endl;

	system("pause");
	return 0;
}