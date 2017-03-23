#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int simply_statement_51()
{
	//大多数语句都以分号结束
	//表达式语句(expression statement)
	//作用是执行表示式并丢弃结果
	int ival = 0;
	ival + 5;           //实际没什么用处
	cout << ival;       //有用

	//空语句 null statement 只含一个单独的分号
	;   //空语句
	//重复读入数据，直至到达文件末尾或输入值等于 "thought"
	string s, thought = "thought";
	while (cin >> s&&s != thought)
		;//空语句
	//空语句应该加上注释

	//看似非法的;号，往往只不过是一条空语句
	int v1 = 1, v2 = 2;
	ival = v1 + v2;;   //第二个分号表示一个多余的空语句
	//无休止的循环
	//while (iter != svec.end());   //while循环体是那条空语句
		//++iter;                   //递增运算不属于循环一部分

	//复合语句（块）
	//是指花括号括起来的（可能为空的）语句和声明的序列，复合语句也被称做"块"（Block）
	//一个块就是一个作用域，块中引入的名字只能在块中的子块里访问
	//如果在程序的某个地方，语法上需要一条语句，但是逻辑上需要多条语句，则应该使用复合语句
	int val = 0, sum = 0;
	while (val <= 10) {
		sum += val;
		++val;
	}
	cout << sum << endl;  //55

	system("pause");
	return 0;
}