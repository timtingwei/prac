#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_324()
{
	//��������� ��1�������1���ĺͣ���2������2���ĺͣ�����
	vector<int> ivec{ 1,2,3,4,5 };
	for (auto it = ivec.begin(); it != ivec.end(); it++) {
		cout << *it + *(ivec.end()-1-(it-ivec.begin())) << " ";     //���һ��������ָ���� .end()-1
	
		//cout << *(ivec.end() - 1 - (it - ivec.begin())) << endl;
	} 
	cout << endl;

	system("pause");
	return 0;
}