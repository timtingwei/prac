#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int string02_322()
{
	/*
	//��дstring�����ϵĲ���
	string s;
	cin >> s;             //"         Hello World     "  �ַ����Կո�ָ�
	cout << s << endl;    // Hello
	*/

	/*
	//��ȡδ֪������string����
	string word;
	while (cin >> word)
		cout << word << endl;    //���ÿ�����ʣ�ÿ�����ʺ����һ������  
	*/
	//  <<  >>��������ᱣ�����ַ���

	/*
	//ʹ��getline��ȡһ���в���
	string line;
	//ÿ�ζ���һ���У�ֱ�������ļ�ĩβ
	while (getline(cin, line))
		cout << line << endl;   //line�в��������з��ţ��ֶ�����
		//cout << line;   //getline�õ���line���������з������Ի�����Ҫ�ֶ�����   
	//����getline�����Ļ��з�ʵ�����Ǳ������ˣ��õ���string�����в��������з���
	*/

	/*
	//string��empty��size����
	//���ʳ�Ա�����ķ����ǣ�ͨ�������ָ�����ĸ�����ִ����empty�����Ϳ���
	string line;
	while (getline(cin, line)){
		if (!line.empty())      //���line�Ƿǿ��У�ִ������Ĳ���  
			cout << line << endl;
	}
	

	string line;
	//ÿ�ζ���һ�У�������г���80���ַ�����
	while (getline(cin, line)){
		if (line.size() > 80)
			cout << line << endl;
	}
	*/

	/*
	//string::size type����
	//size�������ص���string::size_type���͵�ֵ������һ���޷������͵�ֵ
	string line = "abcdeddddd";
	auto len = line.size(); //���һ�����ʽ���Ѿ����� size���� �Ͳ�Ҫ���� int��
	*/

	/*
	//string���󳤶ȱȽ�
	//����һ����Ӧλ����ͬ�����Ȳ�ͬ������С�Ľ�С
	//���������Ӧλ�ò�һ�£��Ƚϵ�һ�������ַ��ȽϵĽ��
	string str = "Hello";
	string phrase = "Hello Wolrd";
	string alang = "Hiya";
	if (str < phrase)
		cout << str << endl;
	else
		cout << phrase << endl;


	//str < phrase < alang
	//Ϊstring����ֵ
	string st1(10, 'c'), st2;  
	st1 = st2;   //st1��Ϊ��ֵ
	cout << st1 << endl;
	*/

	/*
	//����string�������
	string s1 = "Hello, ", s2 = "World\n";
	string s3 = s1 + s2;         //s3��������hello,world\n
	cout << s3 << endl;
	cout << (s1 += s2) << endl;     //s1+=s2  �ȼ��� s1 = s1 + s2
	*/


	//����ֵ��string�������
	//Ҫע�����c++�����е��ַ�������ֵ�����Ǳ�׼������string�����мǣ��ַ�������ֵ��string����ͬ����
	string s1 = "Hello", s2 = "World";    //��s1��s2�ж�û�б����� 
	string s3 = s1 + ", " + s2 + "\n";
	cout << s3 << endl;

	//��string������ַ�������ֵ����һ��ʹ��ʱ��һ��Ҫȷ��ÿ���ӷ������(+)��������������������һ��string 
	string s4 = s1 + ",";  //��ȷ:string�����һ���ַ�������ֵ���
	//string s5 = "Hello," + "World!";        //����������������û��һ����string����

	string s6 = s1 + ", " + "world";  //ÿ��+�����඼��string����
	//�漰���ĵײ㹤��ԭ��
	//string s6 = (s1 + ", ") + "world";  �����ӳ�Ϊstring�����ٺ�������ַ�������ֵ���
	//����һ��
	string tmp = s1 + ", ";
	string s7 = tmp + "world";       

	//string s7 = "hello" + ", " + s2;   //������߶����ַ�������ֵ �޷����

	system("pause");
	return 0;
}