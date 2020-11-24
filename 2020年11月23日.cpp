#include<iostream>
#include<string>
using namespace std;

// ����������õ�ʱ��

class Person {
public:
	Person() {
		cout << "�޲ι���" << endl;
		m_age = 0; // ��ʼ��
	}
	Person(int age) {
		cout << "�вι���" << endl;
		m_age = age;
	}
	Person(const Person& p) {
		cout << "���ÿ�������" << endl;
		m_age = p.m_age;
	}
	~Person() {
		cout << "�����������ã�" << endl;
	}
public:
	int m_age;
};


void call_person() {
	Person man(10);
	Person newMan(man);

}
/*
	Ĭ������±��������ṩ��������
	��1��Ĭ�Ϲ��캯�����޲���
	��2��Ĭ�������������޲���
	��3��Ĭ�Ͽ������캯���������Խ���ֵ����

	������û��ṩ���вι��캯�����������Ͳ��ṩĬ�Ϲ��캯��
	������û��ṩ�˿������캯�����������Ͳ��ṩ�������캯��

*/


/*
	ǳ�����������
	��1��ǳ�������򵥵ĸ�ֵ��������
	��2��������ڶ�����������ռ䣬���п�������
	
	��

*/

class PersonCopy {
public:
	PersonCopy() {
		cout << "�޲���" << endl;
	}
	PersonCopy(int age, int height) {
		cout << "�в���" << endl;
		m_age = age;
		m_height = new int(height);

	}
	// �������캯��
	PersonCopy(const PersonCopy& p) {
		cout << "��������" << endl;
		// ���������������ͻᵼ��ǳ����������
		// �ظ��ͷŶ�ȥ������
		m_age = p.m_age;
		m_height = new int(*p.m_height);

		// ���new���ص���һ����ַ����Ҫ��ָ�����ӣ�


	}



public:
	int m_age;
	int* m_height;
};


void call_personCopy() {
	PersonCopy p1(18, 180);
	PersonCopy p2(p1);
	cout << " p1������ " << p1.m_age
		<< " p1����� " << *p1.m_height << endl;
	cout << " p2������ " << p2.m_age
		<< " p2����� " << *p2.m_height << endl;
}

// ��ʼ���б�ķ�ʽ���й��캯��������

// �﷨ ���캯������������1��ֵ1���� ����2��ֵ2��... {}


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

//�������Ϊ��ĳ�Ա
class A {};
class B {
	A a;
};

class Phone {
public:
	Phone(string name) {
		m_phone_name = name;
		cout << "phone�Ĺ��캯��" << endl;
	}
	~Phone() {
		cout << "phone����������" << endl;
	}
public:
	string m_phone_name;
};

class PersonPhone {
public:
	PersonPhone(string name, string pName) : 
	m_name(name), m_phone(pName)
	{  
		cout << "person�Ĺ��캯��" << endl;
	}
	~PersonPhone() {
		cout << "person����������" << endl;
	}

	string m_name;
	string m_phone;
};

// ��̬��Ա
class Sperson {
public:
	static int m_A;
	/*
	* ��̬��Ա�������ص�
	* ��1���ڱ���׶η����ڴ�
	* ��2�����������������ʼ��
	* ��3�������ж�����һ������
	*/
private:
	static int m_B;

};

// ����Ĵ����������������ˣ����ڽ��г�ʼ������
int Sperson::m_A = 10;  // ����ֻ�ǳ�ʼ�������滹�ǿ��Ը�ֵ��
int Sperson::m_B = 20;

void call_s_person() {
	// ��̬��Ա�����ķ��ʷ�ʽ
	// ͨ���������
	Sperson sp;
	sp.m_A = 100;
	cout << "sp.m_a = " << sp.m_A << endl;

	Sperson sp2;
	sp2.m_A = 200;
	// �������д�����������ͬ��
	// ˵������ͬһ������
	cout << "sp.m_a = " << sp.m_A << endl;
	cout << "sp2.m_a = " << sp2.m_A << endl;

	// ͨ���������з���
	
	cout << "m_a = " << Sperson::m_A << endl;
}

// �������֣�ΪʲôҪ�о�̬��Ա����
// ���ֱ���������Ŀ����ʲô����Ϊ�˱������ݵĲ����ԣ�����


// ��̬��Ա����
class PersonFunc {
	/*
	* ��̬��Ա�������ص㣺
	* ������һ������
	* ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	*/
public:
	static void func() {
		cout << "func �ĵ��� " << endl;
		m_A = 100;
		// m_B = 200;  �����޷�����
		cout << "m_A = " << m_A << endl;
		
	}
	static int m_A; // ��̬��Ա
	int m_B;// ���Ǿ�̬��Ա
};

int PersonFunc::m_A = 10; // ��ʼ��
// int PersonFunc::m_B = 10  ���Ǿ�̬��


// ע�⾲̬��Ա�ǣ������ڽ�����������������г�ʼ��

void call_person_func() {
	// һ��Ҫע��publicl 
	// Ĭ���������private
	PersonFunc p1;
	p1.func();

	cout << "ͨ������з��� " << endl;
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

