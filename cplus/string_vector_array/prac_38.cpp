#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_38()
{
	//whileºÍfor±È½Ï
	string s;
	cin >> s;
	string::size_type index = 0;
	if (!s.empty()){
		while (index < s.size()){
			s[index] = 'X';
			++index;
		}
		cout << s << endl;
	}
	else
		cout << "No data?!" << endl;

	system("pause");
	return 0;
	
}