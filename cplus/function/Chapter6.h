#pragma once
#include <iostream>
#include <vector>


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