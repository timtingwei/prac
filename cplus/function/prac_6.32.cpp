#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;
using std::vector;

//�Ƿ�Ϸ�
int &get(int arry[], int index) { return arry[index]; }
//int &arry;  int arry[10];  int arrt[];  ���ֶ�������ķ���   

int main_get()
{
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;

	for (auto i : ia) {
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}