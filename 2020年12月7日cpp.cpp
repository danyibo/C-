#include<iostream>
#include<string>

using namespace std;

/*
* 函数模板和类模板编程
* 1. 函数模板
*   template<typname T>
* 
*/



void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 模板编程
template <typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void call_myswap() {
	int a = 10;
	int b = 20;
	
	// 1. 自动推导类型
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2. 显示指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}



int main() {
	call_myswap();
	return 0;
}