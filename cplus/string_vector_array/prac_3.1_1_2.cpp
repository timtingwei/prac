#include <iostream>
using std::cout; using std::endl;

int prac_3112()
{
	//按递减顺序打印出10到0之间的整数
	
	/*int i;
	for (i = 10; i >= 0; --i) {   //注意：for语句中是;号
		cout << i << endl;
	}*/

	int i = 10;
	while (i >= 0){
		cout << i << endl;
		--i;
	}
	
	system("pause");
	return 0;


}