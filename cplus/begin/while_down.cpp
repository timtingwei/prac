#include <iostream>
int while_down()
{
	//print integer in 10 to 0 with --
	int val = 10;                        // you should be careful the type of integer..
	while (val >= 0){
		std::cout << val << std::endl;
		--val;
	}
	system("pause");
	return 0;
}