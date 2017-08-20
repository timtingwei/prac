#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//第二条语句产生什么影响，指出哪些不合法？
int calc(int&, int&);
int calc(const int&, const int&);

int calc1(char*, char*);
int calc1(const char*, const char*);

int calc2(char*, char*);
int calc2(char* const, char* const);

