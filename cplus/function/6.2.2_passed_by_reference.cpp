#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

//�����õĲ�����ʵ���������������������õĶ�����

void reset_r(int &i)    //���ܵĲ������������Ͷ���ָ��  void reset_p(int *i)
{
	i = 0;              //�ı�i�����ö����ֵ
	//i������j����һ�����֣���reset�ڲ���i��ʹ�� ���Ƕ�j��ʹ��
}


int main_basic()
{
	int n = 0, i = 42;
	int &r = n;        //r����n(r��n�ı���)
	r = 42;            //����n��ֵ��42
	r = i;             //����n��ֵ��i��ͬ
	i = r;             //i��ֵ��n��ͬ
	int j = 7;
	//reset_r(&j);               //����:�ǳ������õĳ�ʼֵ��������ֵ   
	reset_r(j);                  //ָ�� int *j = &i; ����int &j = i
	cout << "j= " << j << endl;  //��� j= 0

	system("pause");
	return 0;

}

//�Ƚ�����string����ĳ���
bool isShorter(const string &s1, const string &s2) //�����������޸����ò�����ֵʱ�����ʹ�ó�������
{
	return s1.size() < s2.size();       //����s1�����Ƿ�С��s2�Ĳ���ֵ
}

int main_refer()
{
	//ʹ�����ñ��⿽��
	//������������Ͷ��������������Ƚϵ�Ч  
	//ĳ�����Ͳ�֧�ֿ�������ʱ������ֻ��ͨ�������βη��ʸ����͵Ķ���

	bool call_b = isShorter("my", "tim");    //����isShorter�������Ƚ������ַ���������ֵ��ֵ��call_b
	cout << call_b << endl;                  //��� 1

	system("pause");
	return 0;
}

string::size_type find_char(const string &s, char c,
	string::size_type &occurs)
{
	auto ret = s.size();              //��һ�γ��ֵ�λ��(����еĻ�)
	for (decltype(s.size()) ix = 0; ix != s.size(); ++ix) {
		if (s[ix] == c) {             //������ǰ������ַ�c�߼����
			if (ret == s.size())      //ȷ����һ�γ���
				ret = ix;             //�ı��һ�γ��ֵ�λ��
			++occurs;                 //���ִ�������1
		}
	}
	return ret;                       //��ʽ���ص�һ�γ��ֵ�λ�ã�ͨ�������β���ʽ���س��ִ���
}

int main_find_char()
{
	//ʹ�������βη��ض�����Ϣ
	//һ������ֻ�ܷ���һ��ֵ��Ȼ����ʱ������Ҫͬʱ���ض��ֵ�������β�Ϊ����һ�η��ض������ṩ����Ч;��

	//�ȷ���λ���ַ��ظú������ֵ��ܴ���
	//����һ������һ���µ��������ͣ���������λ�ú�����������Ա
	//������������������һ�����������ʵ�Σ����䱣���ַ����ֵĴ���
	string s = "mynameistim";
	char c = 'm';
	string::size_type occurs = 0;
	string::size_type ret = find_char(s, c, occurs);      //����find_char����,���س��ִ���������ʵ�θı�occurs��ֵ
	cout << "ret: "   << ret 
		<< " occurs: " << occurs << endl;                 //��� ret:0 occurs: 3

	occurs = 0;                                  //���ִ�������Ϊ0
	auto index = find_char(s, 'u', occurs);      //�ٴε��ò����ַ�'u'
	cout << "ret: " << index                     //���û���ַ�������λ��Ϊ�ַ�������   
		<< " occurs: " << occurs << endl;

	system("pause");
	return 0;
}