#include<iostream>
#include<string>
using namespace std;

class Buliding {
	
public:
	// ���캯������д��public����������
	Buliding() {
		m_Sitting_room = "����";
		m_bed_room = "����";
	}

public:
	string m_Sitting_room;
private:
	string m_bed_room;
};

void test01() {
	Buliding b;
	cout << b.m_Sitting_room << endl;
}

int main() {
	test01();
	return 0;
}