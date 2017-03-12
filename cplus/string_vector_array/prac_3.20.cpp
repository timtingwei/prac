#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_320()
{
	//读入一组整数，把它们存入vector，输出第1个和倒数第1个的和，第2个和倒数第二个的和
	vector<int> ivec;
	int ival;
	while (cin >> ival)
		ivec.push_back(ival);

	for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix)
		cout << ivec[ix] + ivec[ivec.size() - 1 - ix] << endl;

	system("pause");
	return 0;

}