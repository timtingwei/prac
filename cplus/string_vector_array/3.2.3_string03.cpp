#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int string03_323()
{
	
	/*string str("some string");  
	for (auto c : str)       //���ַ���str�е�ÿ���ַ�c
		cout << c << endl;

	//ͳ��string�����б����ŵĸ���
	string s("Hello World!!!!");
	decltype (s.size()) punct_cnt = 0; //���ڼ�¼�����ŵĸ���  ������string::size_type
	//int punct_cnt = 0;
	//for (auto c = s:s)   Ϊʲô��������
	for (auto c : s){
		if (ispunct(c))
			punct_cnt += 1;
	}
	//cout << "number of punct in s is " << punct_cnt << endl;
	cout << punct_cnt << " punctuation characters in " << s << endl;
	*/
	
	/*//��for���ı��ַ����е��ַ�
	//������string����ת��Ϊ��д
	string s("Hello World!!!");
	for (auto &c : s)
		//isupper(c);             //c��һ�����ã���˸�ֵ��佫�ı�s���ַ���ֵ
		c = toupper(c);           //��ȷ��isupper����bool���ͣ�toupper���ش�д��ĸ
	cout << s << endl;
	*/

	/*//ֻ����һ���������
	//�±������ []
	string s("some string");
	//������ĸת���ɴ�д
	if (!s.empty())             //���ȼ��s�Ƿ����
		s[0] = toupper(s[0]);   //s[0]�ǵ�һ���ַ� s[s.size()-1]�����һ���ַ�
	cout << s << endl;          //�ɹ�:Some thing
	//[]���ܵ����������string::size_type����
	
	//���ʿ�ֵstring
	//string es;
	//es[1] = toupper(es[1]);   //out of range �����δ֪�Ĵ���
	//cout << es << endl;

	//ʹ���±�ִ�е���
	//��s�ĵ�һ���ʸĳɴ�д
	//���δ���s�е��ַ�ֱ�����Ǵ�����ȫ���ַ���������һ���հ�
	for (decltype (s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);  //����ǰ�ַ��ĳɴ�д
	cout << s << endl;    //SOME thing

	//&& �߼������������True���True������False��c++�涨�������ΪTrueʱ���Ż��������Ҳ�

	//�±�ĺϷ��ԣ��±�������0��С���ַ���size()��ֵ��
	//�������������±������Ϊ string::size_type�����������޷���������ʱ����ֻҪ��֤�±�С�� s.size()
	*/

	//ʹ���±��������
	//����0-15֮���ʮ����ת��Ϊ��Ӧ��16����
	const string hexdigits("0123456789ABCDEF");   //���ܵ�16��������
	string::size_type n;
	string result;
	cout << "Enter a series of numbers between 0 to 15" << endl;
	//cin >> n;
	//while (n <= 15){
		//result += hexdigits[n];
	//}
	while (cin >> n){
		if (n < hexdigits.size())     //������Ч����
			result += hexdigits[n];
	}
	cout << result << endl;

	system("pause");
	return 0;
}