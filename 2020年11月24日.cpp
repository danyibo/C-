#include<iostream>
#include<string>

using namespace std;
// 2020年11月24日代码

// C++中类的成员变量和成员函数是分开存储的

class Person {
public:
	Person() {
		mA = 0;
	}
	// 不是静态的成员，占用对象空间
	int mA;

	// 静态成员是不占对象空间的，注意这里是对象空间

	static int mB;

	// 静态成员函数也是不占有对象空间的

	static void func() {

	}

};


void call_Person() {
	cout << sizeof(Person) << endl;

	// 大小是4 说明只有一个整形的字节
	// 这是说明，只非静态成员才是占有对象空间的

}

// this 指针
// 感觉很像是pythn中的self


/*
* this 指针指向被调用对象的成员函数所属的对象
* this 是隐含每一个非静态成员函数的指针
* this 不需要定义，可以直接使用
* 在类的非静态成员函数中需要返回对象本身的时候，可以使用return *this
* 
*/

class PersonThis {
public:
	PersonThis(int age) {
		// 当形参和成员变量的名字相同的时候，可以使用this 指针进行区分
		this->age = age;
		// 这里很像python的感觉啊
	}
	

	PersonThis& PersonAddPerson(PersonThis p) {
		// 在类的非静态成员函数中返回对象本身
		// 这里的对象本身就是this是age
		 
		this->age += p.age;
		return *this;

	}

	int age;
};

void call_Person_this()
{
	PersonThis p1(10);
	cout << "P.age = " << p1.age << endl;

	PersonThis p2(20);
	p2.PersonAddPerson(p1);
	cout << "p2.age = " << p2.age << endl;
	
}

// 空指针访问成员函数
class PersonVoid {
public:
	void ShowClassName() {
		cout << "我是person类" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {
			return;
		}
		cout << m_Age << endl;
	}
public:
	int m_Age = 100;
};

void call_Person_Void() {
	// 定义各一个空指针
	PersonVoid* p = NULL;
	p->ShowClassName(); // 这个指针是空的，但是还是可以访问成员函数的
	// p->m_Age(); 无法访问成员属性，但是可以访问函数
	p->ShowPerson();
	// 注意是不能访问类的属性的，不然会引起异常
	// 但是这里面的具体东西还不是很清楚

}


// 友元：就是让一个函数或者类，访问另一个类中的私有成员
// 注意是私有成员

class Building {
	// 告诉编译器goodGay是一个Buinding类的好朋友，是可以访问私有属性的
	friend void goodGay(Building* buinding);

	// 上面这个只是函数声明，函数是没有进行定义的
	// 这是函数作为友元的情况

public:
	Building() {
		this->m_BedRoom = "卧室";
		this->m_SittingRoom = "客厅";
	}
public:
	string m_SittingRoom; // 客厅是公开的属性
private:
	string m_BedRoom; //  是私有属性
};

void goodGay(Building* building) {
	cout << "好基友正在访问客厅：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问卧室：" << building->m_BedRoom << endl;
}


void call_friend() {
	Building b;
	goodGay(&b);
}


// 运算符重载
class PersonAdd {
public:
	PersonAdd() {};
	PersonAdd(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	}

	// 成员函数实现 + 运算符重载
	PersonAdd operator+(const PersonAdd& p) {
		PersonAdd temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
public:
	int m_a;
	int m_b;

};

void call_Person_add() {
	PersonAdd p1(10, 10);
	PersonAdd p2(20, 20);
	PersonAdd p3 = p1 + p2;
	cout << p3.m_a << p3.m_b << endl;
}


int main() {
	call_Person_add();
	//call_friend();
	//call_Person_Void();
	//call_Person_this();

	//call_Person();

	return 0;
}