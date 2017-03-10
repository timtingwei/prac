#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int string03_323()
{
	
	/*string str("some string");  
	for (auto c : str)       //对字符串str中的每个字符c
		cout << c << endl;

	//统计string对象中标点符号的个数
	string s("Hello World!!!!");
	decltype (s.size()) punct_cnt = 0; //用于记录标点符号的个数  类型是string::size_type
	//int punct_cnt = 0;
	//for (auto c = s:s)   为什么不是这样
	for (auto c : s){
		if (ispunct(c))
			punct_cnt += 1;
	}
	//cout << "number of punct in s is " << punct_cnt << endl;
	cout << punct_cnt << " punctuation characters in " << s << endl;
	*/
	
	/*//用for语句改变字符串中的字符
	//将整个string对象转化为大写
	string s("Hello World!!!");
	for (auto &c : s)
		//isupper(c);             //c是一个引用，因此赋值语句将改变s中字符的值
		c = toupper(c);           //正确：isupper返回bool类型，toupper返回大写字母
	cout << s << endl;
	*/

	/*//只处理一部分运算符
	//下标运算符 []
	string s("some string");
	//将首字母转化成大写
	if (!s.empty())             //首先检查s是否存在
		s[0] = toupper(s[0]);   //s[0]是第一个字符 s[s.size()-1]是最后一个字符
	cout << s << endl;          //成功:Some thing
	//[]接受的输入参数是string::size_type类型
	
	//访问空值string
	//string es;
	//es[1] = toupper(es[1]);   //out of range 会出现未知的错误
	//cout << es << endl;

	//使用下标执行迭代
	//把s的第一个词改成大写
	//依次处理s中的字符直至我们处理完全部字符或者遇到一个空白
	for (decltype (s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);  //将当前字符改成大写
	cout << s << endl;    //SOME thing

	//&& 逻辑与运算符，都True结果True，否则False；c++规定，当左侧为True时，才会继续检查右侧

	//下标的合法性：下标必须大于0而小于字符串size()的值。
	//方法：总是设下标的类型为 string::size_type，此类型是无符号数，此时代码只要保证下标小于 s.size()
	*/

	//使用下标随机访问
	//输入0-15之间的十进制转化为对应的16进制
	const string hexdigits("0123456789ABCDEF");   //可能的16进制数字
	string::size_type n;
	string result;
	cout << "Enter a series of numbers between 0 to 15" << endl;
	//cin >> n;
	//while (n <= 15){
		//result += hexdigits[n];
	//}
	while (cin >> n){
		if (n < hexdigits.size())     //忽略无效输入
			result += hexdigits[n];
	}
	cout << result << endl;

	system("pause");
	return 0;
}