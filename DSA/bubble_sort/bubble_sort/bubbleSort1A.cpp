#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::swap;


void bubblesort1A(int A[], int n) {  //���������㷨(�汾1A) 0 <= n
	bool sorted = false;
	while (!sorted) {
		sorted = true;   //�������
		for (int i = 1; i < n; ++i) {
			if (A[i - 1] > A[i]) {         //ǰֵ�Ⱥ�ֵ�󣬽�������λ��
				swap(A[i - 1], A[i]);
				sorted = false;            //��Ȼ��Ҫ������
			}
		}
		--n;              //���һλ�źã���һ������ĳ���-1
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