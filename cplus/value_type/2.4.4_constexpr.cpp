#include <iostream>


int constexpr_244()
{
	//�������ʽ��ֵָ����ı䲢���ٱ�����̾��ܵõ����н���ı��ʽ
	//���������ͺͳ�ʼֵ��ͬ����
	const int max_files = 20;           //max_files�ǳ������ʽ
	const int limit = max_files + 1;    //limit�ǳ������ʽ
	int staff_size = 27;                //staff_size���ǳ������ʽ ��������ֻ�Ǹ���ͨint����const int
	//const int sz = get_size();           //sz���ǳ������ʽ  ����ֵ�����й����в���ȡ��

	//c++11�±�׼ ������������Ϊconstexpr���ͣ��Ա��ɱ���������֤������ֵ�Ƿ���һ���������ʽ
	constexpr int mf = 20;   //Ϊʲô�Ҳ���...
	constexpr int limit = mf + 1;
	return 0;
}