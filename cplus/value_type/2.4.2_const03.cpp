#include <iostream>

int const03_242()
{
	//ָ������ָ��(pointer to const)�������ڸı�����ָ�����ֵ 
	//��Ҫ��ų�������ֻ����ָ������ָ��
	const double pi = 3.14;
	//double *ptr = &pi;      //��ų�������ֻ����ָ������ָ��
	const double *ptr = &pi;  //�ɹ�
	// *ptr = 24;                //����: �޷���������ֵ;
	//ָ��������ָ�벢����˵ָ��Ķ�����һ�����������ǲ���ͨ����ָ��ı�����ֵ

	//ָ���Ƕ�������ѱ���Ϊ����,һ����ʼ����ɣ�����ֵ����ŵĵ�ַ�����ٸı� 
	// ��*����const�ؼ���֮ǰ����˵��ָ����һ������
	int errNumb = 0;
	int *const curErr = &errNumb;   //curErr��һֱָ��errNumb,�����errNumb������һ����������
	const double pi1 = 3.1415926;
	const double *const pip1 = &pi1;  //pip��һ��ָ��������ĳ���ָ��

	//*pip1 = 2.72;   //����:pip��һ��ָ������ָ��
	//���curErr��ָ��Ķ����ֵ��Ϊ0
	if (*curErr){
		//errorHandle();
		*curErr = 0;   //��curErr��ָ�Ķ����ֵ����
	}
	
	return 0;
}