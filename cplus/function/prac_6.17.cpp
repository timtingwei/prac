#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

bool has_upper(const string &s)
{
	//�ж�string�������Ƿ��д�д��ĸ
	bool ret = false;         //��ʼ״̬û�д�д��ĸ
	for (auto beg = s.begin(), end = s.end(); beg != end;++beg)
		if (isupper(*beg)) { ret = true; }
	return ret;
}

string to_lower(const string &s)                      //�����ɳ������ã������ַ�������ֵ
{
	string local_s = s;                               //local_s��s�ĸ���
	for (auto beg = local_s.begin(), end = local_s.end(); beg != end;++beg)
		if (isupper(*beg)) { *beg = tolower(*beg); }  //����д�ַ�ת���Сд
	return local_s;                                   //�����޸ĺ��string
}


int main_has_to_lower()
{
	has_upper("isMe");
	char c = 's';
	//c.isupper();       //����isupper����char��ĳ�Ա����
	isupper(c);
	cout << has_upper("mynameistim") << endl;

	cout << to_lower("myNameiStIm") << endl;

	system("pause");
	return 0;
}
