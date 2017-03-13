#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::swap;


void bubblesort1A(int A[], int n) {  //气泡排序算法(版本1A) 0 <= n
	bool sorted = false;
	while (!sorted) {
		sorted = true;   //排序完成
		for (int i = 1; i < n; ++i) {
			if (A[i - 1] > A[i]) {         //前值比后值大，交换两者位置
				swap(A[i - 1], A[i]);
				sorted = false;            //仍然需要再排序
			}
		}
		--n;              //最后一位排好，下一次排序的长度-1
	}

	//return A;
}

int main()
{
	int A[] = { 5, 2, 7, 4, 6, 3, 1 };
	int n(7);
	bubblesort1A(A, 7);
	for (auto i : A)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}