#pragma once
#include <iostream>
#include <vector>
#include <string>


extern int iext = 5;

//void print(vector<int>::const_iterator beg,
	//vector<int>::const_iterator end);
//����Ѻ�����������ͷ�ļ��У�����ȷ��ͬһ������������������һ�¡�
//����һ��������ı亯���Ľӿڣ�ֻ��Ҫ�ı�һ����������

int head_call(int j)
{
	static int i = j;
	return j++;
}

int call_back();      //ͷ�ļ�����call_back����

int myFact();

void reset_p(int *p);                                         //�����β�Ϊָ�����͵�reset
void reset_r(int &r);                                         //�����β�Ϊ�������͵�reset
//std::string::size_type find_char(const std::string &s, char c,
	//std::string::size_type &occurs);                        //����find_char����

std::string::size_type find_char(const std::string &s, char c,      //����find_char�����β�������string &
	std::string::size_type &occurs);