#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_332()
{
	//����һ����10��int�����飬��ÿ��Ԫ�ص�ֵ�������±�ֵ
	int ia[10] = {};   //10��0������
	//for (size_t ix = 0; ix <= 9; ++ix)
	for (size_t ix = 0; ix != 10; ++ix)      //������ά����֪
		ia[ix] = ix;

	//vector<int> ivec(10,0);   //ivec[i]ֻ�����ڷ����Ѿ����ڵ�Ԫ�أ��������������Ԫ��
	vector<int> ivec;    // push_back֮ǰ��ivec������
	//iterator������
	//for (auto it = ivec.begin(); it != ivec.end(); ++it)   //ʹ�õ�������������
		//*it = 1;                    //���ʺ��õ�����������ʹ���±�
	//vector�е�for
    for (size_t i = 0; i != 10; ++i)
		//ivec[i] = ia[i];    // vector�е��±����� �� ia�е��±����Ͳ�ͬ
		ivec.push_back(ia[i]);   //push_back������

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;


	system("pause");
	return 0;

}