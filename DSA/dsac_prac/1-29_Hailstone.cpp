#include <iostream>

using std::swap;
using std::cin; using std::cout; using std::endl;

template <typename T> struct Hailstone { //函数对象：按照Hailstone规则转化一个T类对象
	virtual void operator() (T &e) { //假设T可以直接做算术运算
		int step = 0;   //转换所需步数
		while (1 != e) { //按奇、偶逐步转换，直至为1
			(e % 2) ? e = 3 * e + 1 : e /= 2;
			step++;
		}
		e = step;
	} //我甚至不知道怎么运行，我好菜

};
