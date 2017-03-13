#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array06_353()
{
	//下标和指针
	//对数组的下标操作在编译器内部有个转换

	int ia[] = { 0,2,4,6,8 };
	int i = ia[2];   //ia转换成指向首元素的指针
	                 //ia[2]得到 (ia + 2)所指的元素  *(ia + 2)
	int *p = ia;
	i = *(p + 2);    // 等价于 i = ia[2]

	//只要指针指向数组中的元素，都可以执行下标运算
	//int *p = &ia[2];   //p指向ia的第2个元素
	int *ip = ia + 2;
	int j = ip[1];      //p[1]等价于 *(p + 1),就是 ia[3]表示的那个元素
	int k = ip[-2];      //p[-2]等价  *(p - 2),就是 ia[0]指向的元素
	cout << j << "   " << k << endl;

	//上述例子可以得到，内置的下标类型可以处理负值，这个和vector和string不同
	
	
	system("pause");
	return 0;

}