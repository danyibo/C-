#include<iostream>
#include<string>
using namespace std;


// �ṹ��
struct student {
	string name;
	int age;
	int score;
};

void call_student() {
	struct student s1;
	s1.name = "����";
	s1.age = 30;
	s1.score = 100;

	cout << "������" << s1.name << endl;
	cout << "���䣺" << s1.age << endl;
	cout << "������" << s1.score << endl;

	// ������ʽ
	struct student s2 = { "����", 19, 90 };
	cout << "������" << s2.name << endl;
	cout << "���䣺" << s2.age << endl;
	cout << "������" << s2.score << endl;

 }

void call_sturct_array() {
	student arr[3] = {
		{"����", 18, 80},
		{"����", 19, 89},
		{"����", 20, 70}
	};

	for (int i = 0; i < 3; i++) {
		cout << "������" << arr[i].name <<
			"���䣺" << arr[i].age << "������" <<
			arr[i].score << endl;
	}
}

void call_sturct_point() {
	//�ṹ��ָ�룬��ָ�����ʽ���ʽṹ��
	student stu = { "����", 10, 100 };
	
	// ����һ��ָ�룬���ָ����ָ��student�����ַ��ָ��
	student* p = &stu;  
	cout << "������" << p->name << "���䣺" << p->age <<
		"������" << p->score << endl;

}

// �ṹ��Ƕ��
struct teacher {
	int id; // ְ�����
	string name; // ��ʦ����
	int age;
	student stu; // �ӽṹ�壬ѧ��
};

void call_student_and_teacher() {
	teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;
	t1.stu.name = "С��"; // �ӽṹ����ʾ���������Ϳ��Խ�ȥ��
	t1.stu.age = 10;
	t1.stu.score = 100;

	cout << "ְ����ţ�" << t1.id
		<< " ��ʦ������" << t1.name
		<< " ��ʦ���䣺" << t1.age
		<< " ѧ��������" << t1.stu.name
		<< " ѧ�����䣺" << t1.stu.age
		<< " ѧ��������" << t1.stu.score
		<< endl;


}

void printStudent(student stu) {
	// ֵ����
	stu.age = 28;

}


void call_struct_pass_value() {
	// �ṹ���е�ֵ����

}


struct hero {
	string name;
	int age;
	string sex;
}; // ע��ṹ�������Ҫ�зֺŵ�


void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; i++) {
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



// C++���ı�̲��ִ���
/*
	����������ź�����Ķ����ƴ��룬�ɲ���ϵͳ���й���
	ȫ���������ȫ�ֱ����;�̬������ע�⣩�Լ�����
	ջ�����ɱ������Զ������ͷţ���ź����Ĳ������ֲ�������
	��ˣ�ջ���Ǻ����ֲ�������������
	���������ɳ���Ա������ͷŵ����򣬳������ʱ���ɲ���ϵͳ����
*/

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

void check_region() {
	// �ֲ�����
	int a = 10;
	int b = 10;

	// ��ӡ��ַ�鿴һ��
	cout << "�ֲ�����a�ĵ�ַΪ��" << int(&a) << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << int(&b) << endl;

	cout << "ȫ�ֱ���a�ĵ�ַΪ��" << int(&g_a) << endl;
	cout << "ȫ�ֱ���b�ĵ�ַΪ��" << int(&g_b) << endl;
	
}

// ջ��

int* func() {
	int a = 10;
	return &a;
}

void call_point_return() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl; // ��η��صľͲ����������

	// ��Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ��������ɱ��������Զ��ͷŵ�
}

int* func2() {
	// ����һ������Ϊ10���ٴ���һ��ָ��aָ����������ĵ�ַ
	// new���ٵ��ڴ������Ǵ���ڶ��������ɳ���Ա���ٺ��ͷŵģ��������
	int* a = new int(10);
	return a;

}

void call_fun_new() {
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	// �����������ǲ��еģ���Ϊ�Ѿ��ͷ�������ڴ�ռ�
	// �����οռ��ǲ����ڵģ����޷����ʵ�

	// cout << *p << endl;
}


void heap_array() {
	// �ڶ�������һ������
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	// �ͷ������ʱ��delete�����[]
	delete[] arr;


}

// ����

void learning_ref() {
	int a = 10;  //10��ԭ��������a
	int& b = a;  //������b
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 100; // �����b��ֵ100����ôa��ֵҲ��ı�Ϊ100
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

// ���ñ�����г�ʼ��

void test_ref() {
	int a = 10;
	int b = 20;
	//int& c; ����Ǵ���ģ���Ϊcû�н��г�ʼ��
	int& c = a;
	c = b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


}

void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void test_pass_value() {
	int a = 10; int b = 20;
	// ����������ִ�е�ʱ��02�Ѿ��������ݣ�03�ٻ�һ�Σ��ͺ�01��ͬ��
	mySwap01(a, b);
	cout << "a = " << a << " b = " << b << endl;
	mySwap02(&a, &b);
	cout << "a = " << a << " b = " << b << endl;
	mySwap03(a, b);
	cout << "a = " << a << " b = " << b << endl;
}

// ������Ϊ�����ķ���ֵ


int& test01() {
	int a = 10;
	return a;
}

int& test02() {
	static int a = 20;
	return a;
}

// ����ռλ��

void fun_zhan(int a, int) {
	cout << "this is a func" << endl;
}

void call_fun_zhan() {
	fun_zhan(10, 10);  // ���뽫ռλ�ĵط�����

}

// ��������

void func_over() {
	cout << "func �ĵ���" << endl;
}

void func_over(int a) {
	cout << "func a  �ĵ���" << endl;
}

void func_over(double a) {
	cout << "func double �ĵ���" << endl;
}

void call_over() {
	func_over();
	func_over(10);
	func_over(12.9);
}


// class 

const double PI = 3.14;

class Circle {
public:
	int m_r; // �뾶
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

void call_circle() {
	Circle c;
	c.m_r = 10;
	cout << "Բ���ܳ��ǣ�" << c.calculateZC() << endl;
}

class Student {
public:
	void setName(string name) { m_name = name; }
	void setID(int id) { m_id = id; }
public:
	string m_name;
	int m_id;
};

void call_class_student() {
	Student s;
	s.setName("����");
	s.setID(10);
	cout << s.m_name << s.m_id << endl;
}

class Person {
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func() {
		m_name = "����"; // ���ں����ⶼ�ǿ��Է��ʵ�
		m_car = "������"; // �����ǿ��Է��ʵ�
		m_password = 123456;  // �����ǿ��Է��ʵ�
	}
};

void call_person() {
	Person p;
	p.m_name = "����";
}

// �ṹ�����������ǣ�Ψһ�����Ƿ��ʵ�Ȩ�޲�ͬ


// ����˽�л����������л�
class Person2 {
public:
	void setName(string name) {
		m_name = name;
	}
	string getName()const {  // ���name�ǲ����Ըı����˼Ӹ�const 

		return m_name;
	}
	void setAge(int age) {
		if (age < 0 || age> 150) {
			cout << "�����������" << endl;
			return;
		}

		m_age = age;
	}
	int getAge()const{
		return m_age;
	}

	// ����������˽�еĲ����Զ�����ʵ�
	void setLover(string lover){
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;

};

void call_person2() {
	Person2 p;
	p.setAge(10);
	p.setName("����");
	p.setLover("С��");
	cout << "��ʾ��Ϣ" << endl;
	cout << " ���䣺" << p.getAge()
		<< " ������" << p.getName()
		<< endl;
	// �����Ϣ���޷���ʾ��

}

// ���캯������������
class Person3 {
public:
	// ���캯��
	Person3() {
		cout << "���ù��캯�� " << endl;
	}
	// ��������
	~Person3() {
		cout << "������������ " << endl;
	}

};

void call_xi_gou() {
	Person3 p3;

}

/*
	���캯����Ϊ���вι�����޲ι���
	          ����ͨ����Ϳ�������

	��ʵ����Ҫ���������������ķ������ļ���
	��ô���캯����д��Ҳ�������ļ�����

*/

class Dog {
public:
	// Ĭ�Ϲ��캯��
	Dog() {
		cout << "����Ĭ�Ϲ��캯��" << endl;
	}
	// �вι���
	Dog(int a) {
		m_age = a;
		cout << "�����вι��캯��" << endl;
	}
	// �������캯��
	Dog(const Dog& d) {
		m_age = d.m_age;
		cout << "��������ĵ���" << endl;
	}
	~Dog() {
		cout << "���������ĵ���" << endl;
	}
public:
	int m_age;
};

void call_Dog() {
	Dog d1;
	Dog d2(10);
	Dog d3(d2);
	cout << d2.m_age << endl;
	cout << d3.m_age << endl;
}



int main() {
	//call_Dog();
	//call_xi_gou();
	//call_person2();
	//call_class_student();
	//call_circle();
	//call_over();
	//call_fun_zhan();
	//test_pass_value();
	//test_ref();
	//learning_ref();
	//heap_array();
	//call_fun_new();
	//call_point_return();
	//check_region();
	//call_student_and_teacher();
	//call_student();
	//call_sturct_array();
	//call_sturct_point();
	return 0;
}