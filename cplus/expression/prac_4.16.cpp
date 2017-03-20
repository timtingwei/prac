#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_416()
{
	//实际行为可能和预期不一样 为什么 怎么改 
	//if (p = getPtr() != 0 ){/*...*/}
	//!= 优先级高于 = ,!=运算符的运算对象是  getPtr() 和 0，得到布尔值作为 = 的右侧运算对象。该对象转换为p的类型，赋值给p
	//修改：if ((p = getPtr()) != 0)
	
	//if (i = 1024){/*...*/}
	// 1024转为成i类型，赋值给i，i=1024的运算结果作为if语句条件，转化成bool值，
	//修改：if (i == 1024)
	//== 得到bool值

	return 0;
}