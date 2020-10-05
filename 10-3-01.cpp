#include<iostream>
#include<string>

// 注释的快捷键 ctrl+k+c 
// 打开注释快捷键 ctrl+k+u

using namespace std;

class Person {
public:
	int a;
	int b;
//成员函数的运算符重载
	//person operator+(person &p){
	//	person temp;
	//	temp.a = this->a + p.a;
	//	temp.b = this->b + p.b;
	//	return temp;}
};

// 进行全局函数的运算符重载
Person operator+(Person p1, Person p2) {
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
// 运算符重载再发生函数重载

Person operator+(Person p1, int num) {
	Person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}
// 左移运算符不能用成员函数重载，必须用全局函数重载
 
ostream & operator<<(ostream& cout, Person& p) {
	cout << "a = " << p.a  << "\n"<< "b = " << p.b;
	return cout;
	// 链式编程的思想，但是为什么返回的是一个引用呢？？？
}


// 进行递增运算符重载

class Myint {
public:

	friend ostream& operator<<(ostream& cout, Myint m);
	Myint() {
		m_int = 0;
	}
	
	// 为什么要返回引用：
	//  这是因为我们对数据进行操作的时候是再数据的基础上进行的
	Myint& operator++() {
		++m_int;
		return *this;  // 返回this的原因是返回当前对象的指针
	}

private:
	int m_int;
};


ostream& operator<<(ostream &cout, Myint m) {
	cout << m.m_int;
	return cout;
}

// 继承

class Base {
public:
	void get(){
		cout << "基类" << endl;
	}
};


class Java : public Base
{
public:
	void jave_get() {
		cout << "子类的方法" << endl;
	}
};
int main() {
	/*Myint m1;
	cout << m1 << endl;
	cout << ++m1 << endl;*/

	Java j;
	j.get();
	j.jave_get();
	


	return 0;
}