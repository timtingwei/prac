#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_59()
{
	//编写一段程序，使用if语句统计从cin读入的文本有多少元音
	int vowelCnt = 0, otherCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		//if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
			//++vowelCnt;
		//else
			//++otherCnt;
		if (ch == 'a')
			++vowelCnt;
		else if (ch == 'e')
			++vowelCnt;
		else if (ch == 'i')
			++vowelCnt;
		else if (ch == 'o')
			++vowelCnt;
		else if (ch == 'u')
			++vowelCnt;
		else
			++otherCnt;

	}

	cout << "Number of vowel :\t" << vowelCnt << "\n"
		<< "Number of non-vowel :\t" << otherCnt << endl;

	system("pause");
	return 0;
}