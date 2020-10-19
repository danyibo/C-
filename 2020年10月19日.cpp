#include<iostream>
#include<string>
using namespace std;

// 交换模板函数
template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


template<class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i; //认定最大值下标
		for (int j = i + 1; j < len; j++) {
			// 认定最大值，比遍历出的数值要小，说明j下标的元素才是真正的最大值
			if (arr[max] < arr[j]) {
				max = j;  // 更新最大值下标
			}
		}
		if (max != i) {
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}

// 提供打印函数
template<class T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01() {
	// 测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02() {
	int intArr[] = { 6, 3, 4, 7, 8, 2, 1, 0, 10 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}


// 类模板
template<class nameType, class ageType>
class Person {
public:
	Person(nameType name, ageType age) {
		this->m_name = name;
		this->m_age = age;
	}
	void show() {
		cout << "年龄：" << this->m_age << endl;
		cout << "姓名：" << this->m_name << endl;
	}
public:
	nameType m_name;
	ageType m_age;
};

void test03() {
	Person<string, int> p1("sum", 99);
	p1.show();

}


int main() {
	test01();
	test02();
	test03();
	return 0;

}