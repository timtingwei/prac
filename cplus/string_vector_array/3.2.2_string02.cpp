#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int string02_322()
{
	/*
	//读写string对象上的操作
	string s;
	cin >> s;             //"         Hello World     "  字符串以空格分割
	cout << s << endl;    // Hello
	*/

	/*
	//读取未知数量的string对象
	string word;
	while (cin >> word)
		cout << word << endl;    //输出每个单词，每个单词后紧跟一个换行  
	*/
	//  <<  >>运算符不会保留空字符串

	/*
	//使用getline读取一整行操作
	string line;
	//每次读入一整行，直到到达文件末尾
	while (getline(cin, line))
		cout << line << endl;   //line中不包含换行符号，手动换行
		//cout << line;   //getline得到的line不包含换行符，所以还是需要手动换行   
	//触发getline函数的换行符实际上是被丢弃了，得到的string对象中不包含换行符号
	*/

	/*
	//string的empty和size操作
	//访问成员函数的方法是，通过点操作指名是哪个对象执行了empty函数就可以
	string line;
	while (getline(cin, line)){
		if (!line.empty())      //如果line是非空行，执行下面的操作  
			cout << line << endl;
	}
	

	string line;
	//每次读入一行，输出其中超过80个字符的行
	while (getline(cin, line)){
		if (line.size() > 80)
			cout << line << endl;
	}
	*/

	/*
	//string::size type类型
	//size函数返回的是string::size_type类型的值，他是一个无符号类型的值
	string line = "abcdeddddd";
	auto len = line.size(); //如果一条表达式中已经有了 size函数 就不要再用 int了
	*/

	/*
	//string对象长度比较
	//规则一，对应位置相同，长度不同，长度小的较小
	//规则二，对应位置不一致，比较第一对相异字符比较的结果
	string str = "Hello";
	string phrase = "Hello Wolrd";
	string alang = "Hiya";
	if (str < phrase)
		cout << str << endl;
	else
		cout << phrase << endl;


	//str < phrase < alang
	//为string对象赋值
	string st1(10, 'c'), st2;  
	st1 = st2;   //st1变为空值
	cout << st1 << endl;
	*/

	/*
	//两个string对象相加
	string s1 = "Hello, ", s2 = "World\n";
	string s3 = s1 + s2;         //s3的内容是hello,world\n
	cout << s3 << endl;
	cout << (s1 += s2) << endl;     //s1+=s2  等价于 s1 = s1 + s2
	*/


	//字面值和string对象相加
	//要注意的是c++语言中的字符串字面值并不是标准库类型string对象。切记，字符串字面值于string不是同类型
	string s1 = "Hello", s2 = "World";    //在s1和s2中都没有标点符号 
	string s3 = s1 + ", " + s2 + "\n";
	cout << s3 << endl;

	//当string对象和字符串字面值混在一起使用时，一定要确保每个加法运算符(+)的两侧的运算对象至少是一个string 
	string s4 = s1 + ",";  //正确:string对象和一个字符串字面值相加
	//string s5 = "Hello," + "World!";        //错误：两侧的运算对象没有一个是string对象

	string s6 = s1 + ", " + "world";  //每个+号两侧都是string对象
	//涉及到的底层工作原理
	//string s6 = (s1 + ", ") + "world";  左边相加成为string对象，再和右面的字符串字面值相加
	//更进一步
	string tmp = s1 + ", ";
	string s7 = tmp + "world";       

	//string s7 = "hello" + ", " + s2;   //错误：左边都是字符串字面值 无法相加

	system("pause");
	return 0;
}