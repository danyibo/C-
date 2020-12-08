#include<iostream>
#include<string>

using namespace std;

/*
* ����ģ�����ģ����
* 1. ����ģ��
*   template<typname T>
* 
*/



void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// ģ����
template <typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void call_myswap() {
	int a = 10;
	int b = 20;
	
	// 1. �Զ��Ƶ�����
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2. ��ʾָ������
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}



int main() {
	call_myswap();
	return 0;
}