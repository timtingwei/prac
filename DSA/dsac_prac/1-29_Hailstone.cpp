#include <iostream>

using std::swap;
using std::cin; using std::cout; using std::endl;

template <typename T> struct Hailstone { //�������󣺰���Hailstone����ת��һ��T�����
	virtual void operator() (T &e) { //����T����ֱ������������
		int step = 0;   //ת�����貽��
		while (1 != e) { //���桢ż��ת����ֱ��Ϊ1
			(e % 2) ? e = 3 * e + 1 : e /= 2;
			step++;
		}
		e = step;
	} //��������֪����ô���У��Һò�

};
