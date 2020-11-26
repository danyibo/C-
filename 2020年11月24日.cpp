#include<iostream>
#include<string>

using namespace std;
// 2020��11��24�մ���

// C++����ĳ�Ա�����ͳ�Ա�����Ƿֿ��洢��

class Person {
public:
	Person() {
		mA = 0;
	}
	// ���Ǿ�̬�ĳ�Ա��ռ�ö���ռ�
	int mA;

	// ��̬��Ա�ǲ�ռ����ռ�ģ�ע�������Ƕ���ռ�

	static int mB;

	// ��̬��Ա����Ҳ�ǲ�ռ�ж���ռ��

	static void func() {

	}

};


void call_Person() {
	cout << sizeof(Person) << endl;

	// ��С��4 ˵��ֻ��һ�����ε��ֽ�
	// ����˵����ֻ�Ǿ�̬��Ա����ռ�ж���ռ��

}

// this ָ��
// �о�������pythn�е�self


/*
* this ָ��ָ�򱻵��ö���ĳ�Ա���������Ķ���
* this ������ÿһ���Ǿ�̬��Ա������ָ��
* this ����Ҫ���壬����ֱ��ʹ��
* ����ķǾ�̬��Ա��������Ҫ���ض������ʱ�򣬿���ʹ��return *this
* 
*/

class PersonThis {
public:
	PersonThis(int age) {
		// ���βκͳ�Ա������������ͬ��ʱ�򣬿���ʹ��this ָ���������
		this->age = age;
		// �������python�ĸо���
	}
	

	PersonThis& PersonAddPerson(PersonThis p) {
		// ����ķǾ�̬��Ա�����з��ض�����
		// ����Ķ��������this��age
		 
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

// ��ָ����ʳ�Ա����
class PersonVoid {
public:
	void ShowClassName() {
		cout << "����person��" << endl;
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
	// �����һ����ָ��
	PersonVoid* p = NULL;
	p->ShowClassName(); // ���ָ���ǿյģ����ǻ��ǿ��Է��ʳ�Ա������
	// p->m_Age(); �޷����ʳ�Ա���ԣ����ǿ��Է��ʺ���
	p->ShowPerson();
	// ע���ǲ��ܷ���������Եģ���Ȼ�������쳣
	// ����������ľ��嶫�������Ǻ����

}


// ��Ԫ��������һ�����������࣬������һ�����е�˽�г�Ա
// ע����˽�г�Ա

class Building {
	// ���߱�����goodGay��һ��Buinding��ĺ����ѣ��ǿ��Է���˽�����Ե�
	friend void goodGay(Building* buinding);

	// �������ֻ�Ǻ���������������û�н��ж����
	// ���Ǻ�����Ϊ��Ԫ�����

public:
	Building() {
		this->m_BedRoom = "����";
		this->m_SittingRoom = "����";
	}
public:
	string m_SittingRoom; // �����ǹ���������
private:
	string m_BedRoom; //  ��˽������
};

void goodGay(Building* building) {
	cout << "�û������ڷ��ʿ�����" << building->m_SittingRoom << endl;
	cout << "�û������ڷ������ң�" << building->m_BedRoom << endl;
}


void call_friend() {
	Building b;
	goodGay(&b);
}


// ���������
class PersonAdd {
public:
	PersonAdd() {};
	PersonAdd(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	}

	// ��Ա����ʵ�� + ���������
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