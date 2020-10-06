#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	// 构造函数中不要忘记赋初值
	Person(int a=100) : m_a(a) {}

public:
	int m_a;
};

class Son: public Person{
public:
	int m_a = 20;
};

class StaticPerson {
	// 静态成员变量是，类内定义，类外初始化
public:
	static int mm_a;
};
int StaticPerson::mm_a = 10;

int main1() {
	Son s;
	cout << s.m_a << endl;
	cout << s.Person::m_a << endl;
	StaticPerson sp;
	cout << sp.mm_a << endl;
	return 0;
}