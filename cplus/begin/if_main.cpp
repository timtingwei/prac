#include <iostream>
int if_main()
{
	// currVal������ͳ�Ƶ���;���������ֵ����val
	int currVal = 0, val = 0;
	// ��ȡ��һ����,��ȷ��ȷʵ�����ݿ��Դ���
	if (std::cin >> currVal){
		int cnt = 1;                    //�������ڴ���ĵ�ǰֵ�ĸ���
		while (std::cin >> val){        //��ȡʣ�����
			if (val == currVal)         //���ֵ��ͬ
				++cnt;
			else{
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;          //��ס��ֵ
				cnt = 1;                 //���ü�����
			}
		}//whileѭ�����������
		//��ס��ӡ�ļ������һ��ֵ�ĸ���
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}//������if������������
	system("pause");
	return 0;
}