#include <iostream>

using std::cin; using std::cout; using std::endl;


int ackermann(int m, int n) {
	//对任意非负整数 m,n
	if (m == 0)
		return (n + 1);
	if (0 < m && n == 0)
		ackermann(m - 1, 1);
	if (0 < m && n > 0)	
		ackermann(m - 1, ackermann(m, n - 1));
	cout << "running..." << endl;
}

int ackermann_test()
{
	int m = 1, n = 2;     //stackoverflow
	cout << ackermann(m, n) << endl;   
	system("pause");
	return 0;
}