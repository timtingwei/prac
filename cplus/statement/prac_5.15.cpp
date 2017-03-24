#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_515()
{
	//说明下面循环的含义，并改正其中的错误
	
	//for (int i = 0; i != sz;++i){/*...*/}    //sz的类型是size_t而i的类型是int,没有太大的问题，size_t会转换成int进行比较
	//if (i!=sz)             //真正的问题在于 在for语句头中定义的i 在作用域的外部不能被使用
		//...

	//改正如下
	//vector<int> v = { 0,1,2,3,4,5 };
	//auto sz = v.size();
	//int i = 0;       //将i定义在循环的外部，扩大作用域 
	//for (i; i != sz; ++i) { cout << v[i] << endl; }
	//if (i != sz){/*...*/}


	//int ix;
	//for (ix != sz;/*循环的条件为空*/; ++ix) {/*...*/}
		

	//for (int ix = 0; ix != sz;++ix,++sz){/*...*/} //同时增加ix和sz，使得条件结果永远 true


	system("pause");
	return 0;
}