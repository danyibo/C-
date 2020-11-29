#include<iostream>
#include<string>
using namespace std;

// �̳�

class BasePage {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼" << endl;
	}
	void footer() {
		cout << "�������ģ���������" << endl;
	}
	void left() {
		cout << "Java C++ Python" << endl;
	}
};

// java
class Java : public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};



// python
class Python : public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
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

// �̳е��﷨
/*
* class ���� �� public ����
* �̳������֣�
* ���м̳У������̳У�˽�м̳�
*/

class Base1 {
public:
	int m_A;
	void fun2() {
		cout << "�����еĺ�����" << endl;
	}
protected:
	int m_B;
private:
	int m_C;

};

// ���м̳�
class Son1 :public  Base1 {
public:
	void func() {
		m_A; // ���Է���
		m_B; // ���Է���
		// ���ü̳еĻ����ǿ��Է��ʹ��úͱ���Ȩ���µ����Ե�
		// m_C;�ǲ����Է��ʵ�
	}
	
};

// �����̳�
class Son2 : public Base1 {
public:
	void func() {
		m_A; // ���Է���
		m_B; // ���Է���
		// �����̳еĻ������Է��ʹ������Ժͱ�������

	}
	void fun2() {
		cout << "�����еĺ�����" << endl;
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
* �̳��� �ȼ̳и���Ĺ��캯�����ٵ�������Ĺ��캯��
* ����˳���෴
*/

//ͨ�����������ʸ����к�������ͬ��������Ҫ��������
// C++��Ҳ��֧�ֶ�̳еģ�һ��������Լ̳ж������
// ʵ�ʿ����У�������ʹ�ö�̳�


// ��̬
class Animal {
public:
	virtual void speak() {
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "С����˵��" << endl;
	}
};
// ����ϣ������ʲô���󣬾͵���ʲô����ĺ���
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
* �м̳й�ϵ
* ������д�����е��麯��
* ��̬ʹ�õ�������
*  ������������ָ���������ָ������Ķ��󣡣�����
* �о�������仰�������
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

//  ��̬ʵ��
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