#include <iostream>
int literal()
{
	//�ֶ�����д���ַ�������ֵ
	std::cout << "a really, really long string literal"
		" that spans two lines " << std::endl; 
	
	//ת������
	std::cout << '\n';
	std::cout << "\t\tHi!\n";
	std::cout << "\tHi!\115O\x4d!\n";     //���   Hi!MOM
	std::cout << "Hi \x4dO\115!\n";
	std::cout << '\115' << '\n';
	system("pause");
	return 0;
}