#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_431()
{
	//Ϊʲô���������ǰ�ð汾�ĵ����ݼ���
	//A�����ð汾�������ǣ�cnt-1�󣬷���ԭcnt�ĸ���
	//��Ҫ�ú�����Ҫ��Щ�Ķ�����д����
	//�������������������for�����
	vector<int> ivec = { 0,1,2,5 };
	vector<int>::size_type cnt = ivec.size();
	//���Ѵ�size��1��ֵ����ivec��Ԫ��
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
		ivec[ix] = cnt;
		cout << ix << " " << cnt << endl;
	}
	for (auto i : ivec)
		cout << i << " ";  //4 3 2 1
	cout << endl;

	system("pause");
	return 0;
}
