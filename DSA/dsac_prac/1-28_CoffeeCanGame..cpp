#include <iostream>

using std::swap;
using std::cin; using std::cout; using std::endl;

void coffeeCanGame(int A[], int n) {//coffeeCanGameA1算法 输出端需要改进
	//把扔掉的豆放在排到数列尾部 & --n
	//n颗黑，m颗白  0->白 1->黑
	bool sorted = false;
	while (!sorted && n!=1) {
		sorted = true;   //排序完成
		for (int i = 1; i < n; ++i) {
			//每对组豆进行比较，11->01 00->01 01->00 10->00
			if (A[i] == A[i - 1]) { A[i] = 1; }
			else { A[i] = 0;}
			swap(A[i - 1], A[n]);
			sorted = false;
		}
		--n;
	}
}


int coffeeCanGame_128()
{
	//定义罐子中的咖啡豆颜色 0->白 1->黑
	int A[7] = { 1,1,0,1,1,0,0 };   //7个豆
	int n = 7;
	coffeeCanGame(A, n);
	for (auto i : A)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}