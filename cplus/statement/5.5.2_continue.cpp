#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int continue_552()
{
	//continue��� ��ֹ�����ѭ���еĵ�ǰ����������ʼ��һ�ε�����
	//contiune���ֻ�ܳ�����for,while��do whileѭ���ڲ�������Ƕ���ڴ���ѭ������������ڲ���
	//��break��ͬ��continueҲ�������������������ѭ��
	//��break��ͬ,ֻ�е�switch���Ƕ���ڵ�������ڲ�ʱ��������switch��ʹ��continue

	char ch;
	/*switch (ch) {
	case 'a':
		cout << "ch is 'a' " << endl;
		continue;        //continue���ֻ����ѭ�������ʹ��
	}*/
	/*int wCnt = 0;
	while (cin >> ch) {
		wCnt += 1;   //whileѭ������+1
		cout << "the "<< wCnt << " times while begining.." << endl;
		switch (ch) {
		case 'a':
			cout << "ch is 'a' " << endl;
			continue;     //��ֹ��ǰ������������ʼ��һ�ε��� //switchǶ����ѭ�������ʱ�򣬲�����switch��continue����ֹ��ǰѭ��
		case 'b':
			cout << "ch is 'b' " << endl;
			break;
		}
	}*/

	//continue������ǰ��������Ȼִ��ѭ��
	//��while����do while��˵�������ж�������ֵ���Դ�ͳ��for��˵������ִ��for���ͷ��expression;���ڷ�Χfor��˵�����������е���һ��Ԫ�س�ʼ��ѭ�����Ʊ���

	//��׼�������һ�����ʣ�ѭ��ֻ����Щ�»��߿�ͷ�ĵ��ʸ���Ȥ
	string buf;
	while (cin >> buf && !buf.empty()) {
		if (buf[0] != '_')
			continue;      //���Ŷ�����һ������
		//ִ�е��⣬˵���������»��߿�ͷ�ģ����Ŵ���
	}

	system("pause");
	return 0;
}