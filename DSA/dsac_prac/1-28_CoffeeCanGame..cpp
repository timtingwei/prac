#include <iostream>

using std::swap;
using std::cin; using std::cout; using std::endl;

void coffeeCanGame(int A[], int n) {//coffeeCanGameA1�㷨 �������Ҫ�Ľ�
	//���ӵ��Ķ������ŵ�����β�� & --n
	//n�źڣ�m�Ű�  0->�� 1->��
	bool sorted = false;
	while (!sorted && n!=1) {
		sorted = true;   //�������
		for (int i = 1; i < n; ++i) {
			//ÿ���鶹���бȽϣ�11->01 00->01 01->00 10->00
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
	//��������еĿ��ȶ���ɫ 0->�� 1->��
	int A[7] = { 1,1,0,1,1,0,0 };   //7����
	int n = 7;
	coffeeCanGame(A, n);
	for (auto i : A)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}