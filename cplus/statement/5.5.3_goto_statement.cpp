#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int goto_553()
{
	//不使用goto语句
	//goto 语句的语法形式是

	// goto label;
	//label是用于标识一条语句的标识符。带标签语句(label statement)是一种特殊的语句，在它之前有有一个标示符和：
//end: return; //带标签语句，可以作为goto目标
	//goto语句跳转需要在同一函数内
	//goto语句和switch一样，不能将控制权 从变量的作用域之外 转移到作用域之内
	
	/*//...
	goto end;
	int ix = 10;  //错误：goto语句跳过了一个带初始化的变量定义
end:
	//错误：此处的代码需要使用ix，但是goto语句绕过了他的声明
	ix = 42;*/

	//向后跳过已经执行的定义是合法的，意味着系统将销毁变量，然后重新创建
begin:
	int sz = 5;
	if (sz < 0) {
		goto begin;
	}
	//goto语句执行后，销毁sz.跳回到begin语句后跨过了sz的定义语句，sz将重新定义并初始化

	return 0;
}