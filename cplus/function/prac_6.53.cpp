#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//�ڶ���������ʲôӰ�죬ָ����Щ���Ϸ���
int calc(int&, int&);
int calc(const int&, const int&);

int calc1(char*, char*);
int calc1(const char*, const char*);

int calc2(char*, char*);
int calc2(char* const, char* const);

