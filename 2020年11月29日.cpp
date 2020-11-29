#include<iostream>
#include<string>
using namespace std;

// 继承

class BasePage {
public:
	void header() {
		cout << "首页、公开课、登录" << endl;
	}
	void footer() {
		cout << "帮助中心，交流合作" << endl;
	}
	void left() {
		cout << "Java C++ Python" << endl;
	}
};

// java
class Java : public BasePage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};



// python
class Python : public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};

void call_jicheng() {
	Java ja;
	ja.header();
	ja.left();
	ja.content();
	Python py;
	py.header();
	py.left();
	py.content();
}

// 继承的语法
/*
* class 子类 ： public 基类
* 继承有三种：
* 公有继承，保护继承，私有继承
*/

class Base1 {
public:
	int m_A;
	void fun2() {
		cout << "父类中的函数！" << endl;
	}
protected:
	int m_B;
private:
	int m_C;

};

// 公有继承
class Son1 :public  Base1 {
public:
	void func() {
		m_A; // 可以访问
		m_B; // 可以访问
		// 公用继承的话，是可以访问公用和保护权限下的属性的
		// m_C;是不可以访问的
	}
	
};

// 保护继承
class Son2 : public Base1 {
public:
	void func() {
		m_A; // 可以访问
		m_B; // 可以访问
		// 保护继承的话，可以访问公用属性和保护属性

	}
	void fun2() {
		cout << "子类中的函数！" << endl;
	}
};

class Son3 : private Base1 {
public :
	void func() {
	}
};

void call_same_name() {
	Son2 s2;
	s2.fun2();
	s2.Base1::fun2();
}


/*
* 继承中 先继承父类的构造函数，再调用子类的构造函数
* 析构顺序相反
*/

//通过子类对象访问父类中和子类相同函数的需要加作用域
// C++中也是支持多继承的，一个子类可以继承多个父类
// 实际开发中，不建议使用多继承


// 多态
class Animal {
public:
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};
// 我们希望传入什么对象，就调用什么对象的函数
void DoSpeak(Animal& animal) {
	animal.speak();
}

void call_animal() {
	Cat cat;
	DoSpeak(cat);

	Dog dog;
	DoSpeak(dog);
}

/*
* 有继承关系
* 子类重写父类中的虚函数
* 多态使用的条件：
*  ！！！！父类指针或者引用指向子类的对象！！！！
* 感觉上面这句话很难理解
* 
*/

class Calculator {
public:
	int m_Num1, m_Num2;
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
	}
};

void call_calculator()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;
	cout << c.getResult("+") << endl;
}

//  多态实现
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

class AddCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};



void call_Abs_calculator() {
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->getResult() << endl;
}




int main() {
	call_Abs_calculator();
	//call_calculator();
	//call_animal();
	//call_same_name();
	//call_jicheng();
	return 0;
}