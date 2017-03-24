#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int switch_532()
{
	//统计文本中aeiou的个数
	/*int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch)&&(ch!='`')) {
		switch (char i =ch) {   //紧跟在switch后面的可以是一个初始化的变量声明，表达式的值转换成整数类型 和 每个case标签的值进行比较
			case 'a': //如果表达式和这个标签匹配成功，从这个case后面的第一句开始，直到swtich结果，或者遇到一条break为止
				++aCnt;
				break; //break的作用是中断控制流，将控制权移动到while语句的右花括号处
			case 'e':  //case标签必须是一个整型常量表达式 ‘’constexpr
				++eCnt;
				break;
			case 'i':  //任意两个case不能相同。default也是一种特殊的case标签
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
		}
	}*/
	/*//统计文本中aeiou的个数
	int vowelCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (char i = ch) {   //紧跟在switch后面的可以是一个初始化的变量声明，表达式的值转换成整数类型 和 每个case标签的值进行比较
			case 'a': //如果表达式和这个标签匹配成功，从这个case后面的第一句开始，直到swtich结果，或者遇到一条break为止
			case 'e':  //case标签必须是一个整型常量表达式 ‘’constexpr
			case 'i':  //任意两个case不能相同。default也是一种特殊的case标签
			case 'o':
			case 'u':
				++vowelCnt;
				break;
		}
	}*/

	/*//统计文本中aeiou的个数 强调范围的写法
	int vowelCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   //紧跟在switch后面的可以是一个初始化的变量声明，表达式的值转换成整数类型 和 每个case标签的值进行比较
			case 'a':case 'e':case 'i':case'o':case 'u':  //强调范围的写法
			++vowelCnt;
			break;       //一般不会省略最后的break语句
		}
	}*/
	
	/*//漏写break引发的缺陷
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   
		case 'a':
			++aCnt;
		case 'e':  //假设ch:e,执行++eCnt后越界执行++iCnt,++oCnt,++uCnt
			++eCnt;
		case 'i':
			++iCnt;
		case 'o':
			++oCnt;
		case 'u':  
			++uCnt;   
		}
	}

	
	cout << "Number of vowel a :\t" << aCnt << '\n'
		<< "Number of vowel e :\t" << eCnt << '\n'
		<< "Number of vowel i :\t" << iCnt << '\n'
		<< "Number of vowel o :\t" << oCnt << '\n'
		<< "Number of vowel u :\t" << uCnt << endl;*/

	/*//default标签
	//统计文本中aeiou的个数 强调范围的写法
	int vowelCnt = 0, otherCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   //紧跟在switch后面的可以是一个初始化的变量声明，表达式的值转换成整数类型 和 每个case标签的值进行比较
		case 'a':case 'e':case 'i':case'o':case 'u':  //强调范围的写法
			++vowelCnt;
			break;       //一般不会省略最后的break语句
		default:  //非元音    //定义一个default标签总是有用的，说明已经考虑到了默认的情况，只是现在什么都没做
			++otherCnt;
			break;
		}
	}
	cout << "Number of vowel  :\t" << vowelCnt << "\n"
		<< "Number of noe-vowel  :\t" << otherCnt << endl;*/

	//switch内部的变量定义
    //swtich执行过程中，略过的代码中含有变量的定义 该怎么办
	//如果在某处一个带有初值的变量位于作用域之外，在另一处被变量位于作用域之内，则从前一处跳转到后一处的行为是非法的
	bool b = false;
	switch (b) {
	case true:
		//程序的执行流，可能绕开下面的初始化语句，所以该switch语句不合法
		//string file_name;      //错误:控制流绕过一个隐式初始化的变量
		//int ival = 0;            //错误:绕过一个显示初始化的变量
		int jval;                   //正确:jval没有初始化
		break;
	case false:
		//正确:jval虽然在作用域内，但是它没有被初始化
		jval = 5;                         //正确：给jval赋一个值
		//if (file_name.empty()) //file_name在作用域内，但是没有被初始化
			//;
	}






	system("pause");
	return 0;

}


