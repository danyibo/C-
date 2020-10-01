#include<iostream>
#include<string>
using namespace std;

/*
	C++中的构造函数和python中的__init__方法是很相似的
	都有初始化类的作用

*/



// 检查析构函数和构造函数的顺序
class People {
public:
	People(string name, string p) : people_name(name), people_phone(p)
	{} //利用参数列表来初始化类

	string people_name;
	Phone people_phone;

};

class Phone {
public:
	Phone(string name):phone_name(name) {}
	string phone_name;

};
int main() {

	Phone pp("小米");
	//People p("张三", "小米");
	//cout << p.people_name << "拿着" << p.people_phone.phone_name << endl;
	return 0;
}