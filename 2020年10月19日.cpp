#include<iostream>
#include<string>
using namespace std;

// ����ģ�庯��
template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


template<class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i; //�϶����ֵ�±�
		for (int j = i + 1; j < len; j++) {
			// �϶����ֵ���ȱ���������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j]) {
				max = j;  // �������ֵ�±�
			}
		}
		if (max != i) {
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}
}

// �ṩ��ӡ����
template<class T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01() {
	// ����char����
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


// ��ģ��
template<class nameType, class ageType>
class Person {
public:
	Person(nameType name, ageType age) {
		this->m_name = name;
		this->m_age = age;
	}
	void show() {
		cout << "���䣺" << this->m_age << endl;
		cout << "������" << this->m_name << endl;
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