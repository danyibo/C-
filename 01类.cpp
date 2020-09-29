#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14;

class Cricle {
public:
	int R;
	
	double get_ZC() {
		return 2 * PI * R;
	}
};

class Student {
public:
	string s_name; //学生的姓名
	int s_ID; //学生的编号

	void setName(string name) {
		s_name = name;
	}
	void setID(int id) {
		s_ID = id;
	}
	int getID() {
		return s_ID;
	}
	string getName(){
		return s_name;
	}
};

/*
	对于类的属性问题：
		公有权限是类内，类外，都可以访问
		保护权限是类内可以访问，类外不可以访问
		私有权限是类内可以访问，类外不可以访问
		
		保护权限和私有权限的区别是：在继承的时候，子类是可以访问保护权限的，但是私有权限是不可以的


	对于类和结构体的区别是：
		默认权限下，结构体的权限是公有的
		默认权限下，类的权限是私有的


	一般情况下，将类的成员属性全部设置为私有属性
	再写个对外的公开接口函数来访问和设置这些属性
	而且还可以对输入的数据经一个检查，保证数据是合理的

*/
 
class Test {
public:
	string my_name;
protected:
	string my_car;
private:
	string my_password;
};
 

int main1() {
	Cricle circle_01;
	circle_01.R = 2;
	cout << "这个圆的周长是：" << circle_01.get_ZC() << endl;


	Student s1;
	s1.setName("张三");
	s1.setID(1);
	cout << "学生的姓名: " << s1.getName() << "学生的编号: " << s1.getID() << endl;
	return 0;
}