#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int switch_532()
{
	//ͳ���ı���aeiou�ĸ���
	/*int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch)&&(ch!='`')) {
		switch (char i =ch) {   //������switch����Ŀ�����һ����ʼ���ı������������ʽ��ֵת������������ �� ÿ��case��ǩ��ֵ���бȽ�
			case 'a': //������ʽ�������ǩƥ��ɹ��������case����ĵ�һ�俪ʼ��ֱ��swtich�������������һ��breakΪֹ
				++aCnt;
				break; //break���������жϿ�������������Ȩ�ƶ���while�����һ����Ŵ�
			case 'e':  //case��ǩ������һ�����ͳ������ʽ ����constexpr
				++eCnt;
				break;
			case 'i':  //��������case������ͬ��defaultҲ��һ�������case��ǩ
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
		}
	}*/
	/*//ͳ���ı���aeiou�ĸ���
	int vowelCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (char i = ch) {   //������switch����Ŀ�����һ����ʼ���ı������������ʽ��ֵת������������ �� ÿ��case��ǩ��ֵ���бȽ�
			case 'a': //������ʽ�������ǩƥ��ɹ��������case����ĵ�һ�俪ʼ��ֱ��swtich�������������һ��breakΪֹ
			case 'e':  //case��ǩ������һ�����ͳ������ʽ ����constexpr
			case 'i':  //��������case������ͬ��defaultҲ��һ�������case��ǩ
			case 'o':
			case 'u':
				++vowelCnt;
				break;
		}
	}*/

	/*//ͳ���ı���aeiou�ĸ��� ǿ����Χ��д��
	int vowelCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   //������switch����Ŀ�����һ����ʼ���ı������������ʽ��ֵת������������ �� ÿ��case��ǩ��ֵ���бȽ�
			case 'a':case 'e':case 'i':case'o':case 'u':  //ǿ����Χ��д��
			++vowelCnt;
			break;       //һ�㲻��ʡ������break���
		}
	}*/
	
	/*//©дbreak������ȱ��
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   
		case 'a':
			++aCnt;
		case 'e':  //����ch:e,ִ��++eCnt��Խ��ִ��++iCnt,++oCnt,++uCnt
			++eCnt;
		case 'i':
			++iCnt;
		case 'o':
			++oCnt;
		case 'u':  
			++uCnt;   
		}
	}

	
	cout << "Number of vowel a :\t" << aCnt << '\n'
		<< "Number of vowel e :\t" << eCnt << '\n'
		<< "Number of vowel i :\t" << iCnt << '\n'
		<< "Number of vowel o :\t" << oCnt << '\n'
		<< "Number of vowel u :\t" << uCnt << endl;*/

	/*//default��ǩ
	//ͳ���ı���aeiou�ĸ��� ǿ����Χ��д��
	int vowelCnt = 0, otherCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {
		switch (ch) {   //������switch����Ŀ�����һ����ʼ���ı������������ʽ��ֵת������������ �� ÿ��case��ǩ��ֵ���бȽ�
		case 'a':case 'e':case 'i':case'o':case 'u':  //ǿ����Χ��д��
			++vowelCnt;
			break;       //һ�㲻��ʡ������break���
		default:  //��Ԫ��    //����һ��default��ǩ�������õģ�˵���Ѿ����ǵ���Ĭ�ϵ������ֻ������ʲô��û��
			++otherCnt;
			break;
		}
	}
	cout << "Number of vowel  :\t" << vowelCnt << "\n"
		<< "Number of noe-vowel  :\t" << otherCnt << endl;*/

	//switch�ڲ��ı�������
    //swtichִ�й����У��Թ��Ĵ����к��б����Ķ��� ����ô��
	//�����ĳ��һ�����г�ֵ�ı���λ��������֮�⣬����һ��������λ��������֮�ڣ����ǰһ����ת����һ������Ϊ�ǷǷ���
	bool b = false;
	switch (b) {
	case true:
		//�����ִ�����������ƿ�����ĳ�ʼ����䣬���Ը�switch��䲻�Ϸ�
		//string file_name;      //����:�������ƹ�һ����ʽ��ʼ���ı���
		//int ival = 0;            //����:�ƹ�һ����ʾ��ʼ���ı���
		int jval;                   //��ȷ:jvalû�г�ʼ��
		break;
	case false:
		//��ȷ:jval��Ȼ���������ڣ�������û�б���ʼ��
		jval = 5;                         //��ȷ����jval��һ��ֵ
		//if (file_name.empty()) //file_name���������ڣ�����û�б���ʼ��
			//;
	}






	system("pause");
	return 0;

}


