#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int main()
{
	//++�����
	int s[3] = { 0,1,2 };
	for (auto &i : s) {
		i++;    //i++��++iЧ��������һ�����Ǿ�����++i;
		cout << i << " ";
	}
	cout << endl;

	//|| �߼��������
	int a = 1, b = 2;
	if ((a == 1) && (b == 2))   //��һ��false����false ��
		cout << "entering if" << endl;
	if ((a == 1) || (b != 2))   //��һ��true����true   ��
		cout << "entering if" << endl;

	system("pause");
	return 0;
}