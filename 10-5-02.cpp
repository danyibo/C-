#include<iostream>
#include<string>
using namespace std;

// 多态
/*
	多态就是在父类函数之间加上virtul让父类的函数变成虚函数
	在子类中重写父类中的虚函数

	使用阶段：父类的指针或者引用指向子类的对象


*/


class Animal {
public:
	virtual void speak(){
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "猫在说话！" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "狗在说话！" << endl;
	}
};

void do_speak(Animal &a) {
	a.speak();
}

//

class Abstract {
public:
	virtual int get_result() {
		return 0;
	}
	int m_a;
	int m_b;
};


class Add : public Abstract {
public:
	int get_result() {
		return m_a + m_b;
	}
};

class Sub :public Abstract {
public:
	int get_result() {
		return m_a - m_b;
	}
};

class Mul :public Abstract {
public:
	int get_result() {
		return m_a * m_b;
	}
};


void test() {
	Abstract* abs = new Add;
	abs->m_a = 10; abs->m_b = 10;
	cout << "+" << abs->get_result() << endl;

}









int main() {
	test();
	return 0;
}