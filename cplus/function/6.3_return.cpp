#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;
using std::initializer_list;
using std::vector;

void swap(int v1, int v2)
{
	//�β����������ͣ���ֱ�Ӹı�ʵ��ֵ�������Ǵ����ֲ�����Ϊ�����������к����١�
	//�������ֵ����ȵģ�����Ҫ������ֱ���˳�
	if (v1 == v2)
		return;     //������÷� �൱�� break
	//���ִ�е����� ˵������Ҫ�������ĳЩ���� 
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	//�˴�������ʽ��return���
	//void���� Ҳ���Է���һ�� void����
}


//ֻҪ����void����������һ��Ҫ�з���ֵ������ֵ�ͺ���������ͬ��
//������ȷ���������з���ֵ�ĺ���ֻ��ͨ��һ����Ч��return����˳� 

//��Ϊ���в���ȷ�ķ���ֵ�������޷�ͨ������ 
bool str_subrange(const string &str1, const string &str2)
{
	//��С��ͬ����ʱ����ͨ��������жϽ����Ϊ����ֵ
	if (str1.size() == str2.size())
		return str1 == str2;             //��ȷ�� ==���������bool
	//�õ��϶�string����Ĵ�С
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	
	//�������string�����Ӧ���ַ��Ƿ���ȣ��Խ϶̵��ַ�������Ϊ��
	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i])
			return false;             //ԭ�ȴ���1:û�з���ֵ
	}
	return true;
	//ԭ�ȴ���2:������������δ�����κ�ֵ�ͽ����˺�����ִ�� 
	//����return����ѭ�����涼Ҫ��һ��return��䣬û�еĻ�������Ǵ���ģ��������п����޷����֡�
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	//��������ֵctr�����ctr>1,���ص��ʸ�����ʽ�����򣬷��ص���
	return (ctr > 1) ? word + ending : word;
	//string֮�����ֱ��������ͨ��+��ӵõ��ַ����ĺ�
}

const string &shorterString(const string &s1, const string &s2)
{
	//�����������ã�������ý��������������һ��������
	return s1.size() <= s2.size() ? s1 : s2;
	//�βΣ��������Ͷ���const string���ã����ܵ��û��Ƿ��ض�������������string����
}

/*//���ش������������ͼ���ؾֲ����������
const string &manip()
{
	string ret;
	//��ĳ�ַ�ʽ�ı�һ��ret
	if (!ret.empty())
		return ret;        //���󣺷��ؾֲ����������
	else
		return "Empty";    //����"empty"��һ���ֲ���ʱ��
}*/

/*//�޸�manip����
const string &manip_revise(string ret, const string emp)
{
	//ret = "";
	if (!ret.empty())
		return ret;
	else
		return emp;
}*/

char &get_val(string &str, string::size_type ix)
{
	return str[ix];       //get_val�ٶ�������Ч
}

vector<string> process(int i)
{
	//..
	//expected��actual����string����

	if (i == 0)
		return{};
	if (i == 1)
		return{ "functionX","okay" };
	else
		return{ "functionX","wrong" };
}


int main_not()
{
	//�޷���ֵ�ĺ���
	int v1 = 4, v2 = 10;
	swap(v1, v2);
	cout << v1 << " " << v2 << endl;

	//�з���ֵ�ĺ���
	bool bresult = str_subrange("timcooper", "ti1m");
	cout << bresult << endl;
	

	//ֵ����α����ص�
	cout << make_plural(2, "apple", "s") << endl;
	string s1 = "tim", s2 = "cooper", s3 = s1 + s2;   //�ַ����ĺ�
	cout << s3 << endl;   

	//������������
	string sresult = shorterString("tim", "cooper");
	//sresult = "timcooper";
	cout << sresult << endl;

	//��Ҫ���ؾֲ���������û���ָ��
	//������ɺ������õĴ洢�ռ�Ҳ��֮���ͷŵ�����ˣ�������ֹ��ζ�žֲ����������ý�ָ������Ч���ڴ�����
	//ȷ����������ֵ��ȫ�������ڷ���ֵ֮ǰ���ʣ��������������ں���֮ǰ�Ѿ����ڵ��ĸ�����
	
	//string sresult1 = manip_revise(s1, "empty");
	//cout << sresult1 << endl;
	//ͬ�����ؾֲ������ָ�룬�뷵������һ���Ǵ���ġ�

	//�������͵ĺ����͵�������� 
	//��. -> ���ȼ���ͬ
	auto sz = shorterString(s1, s2).size();
	cout << sz << endl;
	//���������ɣ�shorterString����������.����������������󣬵���������Եõ�string�����size��Ա��size���ǵڶ��������������������

	//���÷�����ֵ 
	//����һ�����ú����õ���ֵ���������ͷ�����ֵ
	//�ر���ǣ��ܹ�Ϊ �ǳ������ú����Ľ����ֵ
	string s("a value");
	cout << s << endl;      //���a value
	get_val(s, 0) = 'A';    //��s[0]��ΪA
	cout << s << endl;      //���A value
	//����ֵ�ǳ�������
	//shorterString("hi", "bye") = "X";

	//�б��ʼ������ֵ
	//����б�Ϊ�գ���ʱ��ִ��ֵ��ʼ�������򣬷��ص�ֵ�ɺ����ķ������;���



	system("pause");
	return 0;
}

int mai_exit()
{
	bool some_failure = true;
	if (some_failure)
		return EXIT_FAILURE;
	else
		return EXIT_SUCCESS;

	system("pause");
	return 0;
}

int factorial(int i)
{
	if (i > 1)
		return factorial(i - 1) * i;
	return 1;    //�ݹ����ֹ������i=1
}

int main_factorial()
{
	int result = factorial(5);
	cout << result << endl;
	
	system("pause");
	return 0;
}