#include<iostream>
#include<string>
using namespace std;

class Buliding {
	
public:
	// 构造函数必须写在public的作用域下
	Buliding() {
		m_Sitting_room = "客厅";
		m_bed_room = "卧室";
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