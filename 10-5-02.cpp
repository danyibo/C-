#include<iostream>
#include<string>
using namespace std;

// ��̬
/*
	��̬�����ڸ��ຯ��֮�����virtul�ø���ĺ�������麯��
	����������д�����е��麯��

	ʹ�ý׶Σ������ָ���������ָ������Ķ���


*/


class Animal {
public:
	virtual void speak(){
		cout << "������˵��" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "è��˵����" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "����˵����" << endl;
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