#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	// ��������
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	// ÿ���������и�������������������������������ݵ�
	// v.begin()�Ƿ��ص����������������ָ�������ĵ�һ������
	// v.end()���ص����������������ָ�������е����һ������
	vector<int>::iterator pBegain = v.begin();
	// pBegain�Ǹ�ָ��  cout << *pBegain << endl;
	vector<int>::iterator pEnd = v.end();

	// ��һ�ֱ�����ʽ
	while (pBegain != pEnd) {
		cout << *pBegain << endl;
		pBegain++;

	}
	// �ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin();
		it != v.end(); it++) {
		cout << *it << endl;
	}
	// �����֣�ʹ��STL�еı�׼������ʽ
	for_each(v.begin(), v.end(), myPrint);

	// Ӧ����Ҫ����STL�е����ַ�ʽ
}


// vector ����Զ��������
class Person {
public:
	Person(string name, int age) {
		this->mName = name;
		this->mAge = age;
	}
public:
	string mName;
	int mAge;
};

void test02() {
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	for (vector<Person>::iterator it = v.begin();
		it != v.end(); it++) {
		cout << "name: " << (*it).mName <<
			" Age: " << (*it).mAge << endl;
	}

	// ��Ŷ����ַ
	vector<Person*> v2;
	v2.push_back(&p1);
	v2.push_back(&p2);
	v2.push_back(&p3);
	v2.push_back(&p4);
	v2.push_back(&p5);

	for (vector<Person*>::iterator it = v2.begin();
		it != v2.end(); it++) {
		Person* p = (*it);
		cout << "name: " << p->mName <<
			" age: " << p->mAge << endl;

	}


}

// ������Ƕ������
void test03() {
	// �����ʾһ��vector�����Ԫ�ػ���vector
	vector<vector<int> > v;
	
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v3.push_back(i + 4);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin();
		it != v.end(); it++
		) {
		for (vector<int>::iterator vit = (*it).begin();
			vit != (*it).end(); vit++) {
			cout << *vit << endl;
		}
	}
		

}


int main() {
	test03();
	//test02();
	//test01();
	return 0;
}