#include<iostream>
#include<string>

// ע�͵Ŀ�ݼ� ctrl+k+c 
// ��ע�Ϳ�ݼ� ctrl+k+u

using namespace std;

class Person {
public:
	int a;
	int b;
//��Ա���������������
	//person operator+(person &p){
	//	person temp;
	//	temp.a = this->a + p.a;
	//	temp.b = this->b + p.b;
	//	return temp;}
};

// ����ȫ�ֺ��������������
Person operator+(Person p1, Person p2) {
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
// ����������ٷ�����������

Person operator+(Person p1, int num) {
	Person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}
// ��������������ó�Ա�������أ�������ȫ�ֺ�������
 
ostream & operator<<(ostream& cout, Person& p) {
	cout << "a = " << p.a  << "\n"<< "b = " << p.b;
	return cout;
	// ��ʽ��̵�˼�룬����Ϊʲô���ص���һ�������أ�����
}


// ���е������������

class Myint {
public:

	friend ostream& operator<<(ostream& cout, Myint m);
	Myint() {
		m_int = 0;
	}
	
	// ΪʲôҪ�������ã�
	//  ������Ϊ���Ƕ����ݽ��в�����ʱ���������ݵĻ����Ͻ��е�
	Myint& operator++() {
		++m_int;
		return *this;  // ����this��ԭ���Ƿ��ص�ǰ�����ָ��
	}

private:
	int m_int;
};


ostream& operator<<(ostream &cout, Myint m) {
	cout << m.m_int;
	return cout;
}

// �̳�

class Base {
public:
	void get(){
		cout << "����" << endl;
	}
};


class Java : public Base
{
public:
	void jave_get() {
		cout << "����ķ���" << endl;
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