#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	// 创建容器
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	// 每个容器都有个迭代器，是用来遍历容器里面的数据的
	// v.begin()是返回迭代器，这个迭代器指向容器的第一个数据
	// v.end()返回迭代器，这个迭代器指向容器中的最后一个数据
	vector<int>::iterator pBegain = v.begin();
	// pBegain是个指针  cout << *pBegain << endl;
	vector<int>::iterator pEnd = v.end();

	// 第一种遍历方式
	while (pBegain != pEnd) {
		cout << *pBegain << endl;
		pBegain++;

	}
	// 第二种遍历方式
	for (vector<int>::iterator it = v.begin();
		it != v.end(); it++) {
		cout << *it << endl;
	}
	// 第三种，使用STL中的标准遍历方式
	for_each(v.begin(), v.end(), myPrint);

	// 应该主要熟练STL中的这种方式
}


// vector 存放自定义的数据
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

	// 存放对象地址
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

// 容器中嵌套容器
void test03() {
	// 这个表示一个vector里面的元素还是vector
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