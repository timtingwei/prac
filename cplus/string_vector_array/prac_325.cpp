#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int main()
{
	//实现分数段划分
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			auto it = scores.begin();
			*(it+(grade/10)) += 1;
		}		
	}
	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}