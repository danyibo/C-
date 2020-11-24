#include<iostream>
#include<string>
using namespace std;

// 拷贝构造调用的时机

class Person {
public:
	Person() {
		cout << "无参构造" << endl;
		m_age = 0; // 初始化
	}
	Person(int age) {
		cout << "有参构造" << endl;
		m_age = age;
	}
	Person(const Person& p) {
		cout << "调用拷贝构造" << endl;
		m_age = p.m_age;
	}
	~Person() {
		cout << "析构函数调用！" << endl;
	}
public:
	int m_age;
};


void call_person() {
	Person man(10);
	Person newMan(man);

}
/*
	默认情况下编译器会提供三个函数
	（1）默认构造函数，无参数
	（2）默认析构函数，无参数
	（3）默认拷贝构造函数，对属性进行值拷贝

	如果：用户提供了有参构造函数，编译器就不提供默认构造函数
	如果：用户提供了拷贝构造函数，编译器就不提供拷贝构造函数

*/


/*
	浅拷贝和深拷贝：
	（1）浅拷贝：简单的赋值拷贝操作
	（2）深拷贝：在堆区重新申请空间，进行拷贝操作
	
	·

*/

class PersonCopy {
public:
	PersonCopy() {
		cout << "无参数" << endl;
	}
	PersonCopy(int age, int height) {
		cout << "有参数" << endl;
		m_age = age;
		m_height = new int(height);

	}
	// 拷贝构造函数
	PersonCopy(const PersonCopy& p) {
		cout << "拷贝函数" << endl;
		// 如果不利用深拷贝，就会导致浅拷贝带来的
		// 重复释放对去的问题
		m_age = p.m_age;
		m_height = new int(*p.m_height);

		// 因此new返回的是一个地址，需要用指针来接？


	}



public:
	int m_age;
	int* m_height;
};


void call_personCopy() {
	PersonCopy p1(18, 180);
	PersonCopy p2(p1);
	cout << " p1的年龄 " << p1.m_age
		<< " p1的身高 " << *p1.m_height << endl;
	cout << " p2的年龄 " << p2.m_age
		<< " p2的身高 " << *p2.m_height << endl;
}

// 初始化列表的方式进行构造函数的设置

// 语法 构造函数（）：属性1（值1）， 属性2（值2）... {}


class PersonPr {
public:
	PersonPr(int a, int b, int c) : m_a(a), m_b(b), m_c(c) 
	{}
	void PrintPersonPr() {
		cout << "ma = " << m_a << endl;
		cout << "mb = " << m_b << endl;
		cout << "mc = " << m_c << endl;
 	}
public:
	int m_a;
	int m_b;
	int m_c;
};

void call_person_pr() {
	PersonPr p(10, 20, 30);
	p.PrintPersonPr();
}

//类对象最为类的成员
class A {};
class B {
	A a;
};

class Phone {
public:
	Phone(string name) {
		m_phone_name = name;
		cout << "phone的构造函数" << endl;
	}
	~Phone() {
		cout << "phone的析构函数" << endl;
	}
public:
	string m_phone_name;
};

class PersonPhone {
public:
	PersonPhone(string name, string pName) : 
	m_name(name), m_phone(pName)
	{  
		cout << "person的构造函数" << endl;
	}
	~PersonPhone() {
		cout << "person的析构函数" << endl;
	}

	string m_name;
	string m_phone;
};

// 静态成员
class Sperson {
public:
	static int m_A;
	/*
	* 静态成员变量的特点
	* （1）在编译阶段分配内存
	* （2）类内声明，类外初始化
	* （3）对所有对象共享一份数据
	*/
private:
	static int m_B;

};

// 上面的代码是在类内声明了，现在进行初始化操作
int Sperson::m_A = 10;  // 这里只是初始化，后面还是可以赋值的
int Sperson::m_B = 20;

void call_s_person() {
	// 静态成员变量的访问方式
	// 通过对象访问
	Sperson sp;
	sp.m_A = 100;
	cout << "sp.m_a = " << sp.m_A << endl;

	Sperson sp2;
	sp2.m_A = 200;
	// 后面两行代码的输出是相同的
	// 说明公用同一份数据
	cout << "sp.m_a = " << sp.m_A << endl;
	cout << "sp2.m_a = " << sp2.m_A << endl;

	// 通过类名进行访问
	
	cout << "m_a = " << Sperson::m_A << endl;
}

// 这里很奇怪，为什么要有静态成员变量
// 这种变量的设置目的是什么，是为了保持数据的不变性？？？


// 静态成员函数
class PersonFunc {
	/*
	* 静态成员函数的特点：
	* 程序共享一个函数
	* 静态成员函数只能访问静态成员变量
	*/
public:
	static void func() {
		cout << "func 的调用 " << endl;
		m_A = 100;
		// m_B = 200;  报错无法访问
		cout << "m_A = " << m_A << endl;
		
	}
	static int m_A; // 静态成员
	int m_B;// 不是静态成员
};

int PersonFunc::m_A = 10; // 初始化
// int PersonFunc::m_B = 10  不是静态的


// 注意静态成员是：在类内进行声明，在类外进行初始化

void call_person_func() {
	// 一定要注意publicl 
	// 默认情况下是private
	PersonFunc p1;
	p1.func();

	cout << "通过类进行访问 " << endl;
	PersonFunc::func();
}




int main() {
	//call_person_func();
	//call_s_person();
	//call_person_pr();
	//call_person();
	//call_personCopy();
	return 0;
}

