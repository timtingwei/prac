#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_512()
{
	//ʹ����ͳ�ƣ��������������ַ����ַ����е�����,ff��fl��fi
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	vector<char> cvec;   //����һ�����ڴ洢�ַ���vector
	while ((cin >> ch) && (ch != '`')) {  //����ch������chΪ'`'����ѭ��
		cvec.push_back(ch);    //��ch����vector���
		auto sz = cvec.size();
		if ((sz > 1) && (cvec[sz - 2] == 'f')) {  //vector������������char�ſ���������������vector[-2]
			switch (cvec[sz - 1]) {   //��Ŀ�������ǵ�����2��char��Ϊ'f',��f��ͬ������£�switch������һ��ֵ
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		}
		//cout << cvec.size() << endl;  //���һ����������size-1
	}//whileѭ������
	
	cout << "The number of ffCnt: \t" << ffCnt << "\n"
		<< "The number of flCnt: \t" << flCnt << "\n"
		<< "The number of fiCnt: \t" << fiCnt << endl;

	system("pause");
	return 0;

}