#include <iostream>


//试错
//struct Foo {/*...*/ }    //注意没有分号
struct Foo {/*...*/ };
int prac_239()
{
	return 0;
}
/*
1>e:\tim\prac\cplus\value_type\prac_2.39.cpp(7): error C2628: “Foo”后面接“int”是非法的(是否忘记了“;”?)
1>e:\tim\prac\cplus\value_type\prac_2.39.cpp(8): error C3874: “main”的返回类型应为“int”而非“Foo”
1>e:\tim\prac\cplus\value_type\prac_2.39.cpp(9): error C2440: “return”: 无法从“int”转换为“Foo”
1>          无构造函数可以接受源类型，或构造函数重载决策不明确
*/