#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	// ���캯���в�Ҫ���Ǹ���ֵ
	Person(int a=100) : m_a(a) {}

public:
	int m_a;
};

class Son: public Person{
public:
	int m_a = 20;
};

class StaticPerson {
	// ��̬��Ա�����ǣ����ڶ��壬�����ʼ��
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