#include <iostream>
int main()
{
	std::cout << "please write two number as domain to print  : " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int val0 = 0, val1 = 0;
	if (v1 < v2){
		val0 = v1;
		val1 = v2;
	}
	else{
		val1 = v1;
		val0 = v2;
	}
	while (val0 <= val1){
		std::cout << val0 << std::endl;
		val0 ++;		
	}
	system("pause");
	return 0;
}