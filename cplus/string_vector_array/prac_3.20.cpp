#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_320()
{
	//����һ�������������Ǵ���vector�������1���͵�����1���ĺͣ���2���͵����ڶ����ĺ�
	vector<int> ivec;
	int ival;
	while (cin >> ival)
		ivec.push_back(ival);

	for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix)
		cout << ivec[ix] + ivec[ivec.size() - 1 - ix] << endl;

	system("pause");
	return 0;

}