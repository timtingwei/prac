
int declaration_definition()
{
    //c++����֧�ַ���ʽ����(separate compilation)
	//����(declaration):һ���ļ������ʹ�ñ𴦶�������������������Ǹ����ֵ�����
	//����(definition):���𴴽������ֹ�����ʵ��
	extern int i;   //����i���Ƕ���i
	int j;          //����������j

    //������ʾ��ʼ���ļ�Ϊ����,��ʼ����ʱ������extern
	//extern double pi = 3.1416;    //�����ͼ��ʼ��һ����extern�ؼ��ʱ�ǵı��������������� 
	return 0;
}

extern double pi = 3.1416;    //����  