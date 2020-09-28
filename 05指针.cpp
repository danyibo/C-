#include<iostream>
using namespace std;

int main() {
	/*int a = 10;
	int* p;
	p = &a;
	// 指针的值就是地址
	cout << "a的地址是：" << &a << endl;
	cout << "指针的值是：" << p << endl;
	// 解引用是获取指针指向位置的值
	cout << "地址处的值是：" << a << endl;
	cout << "对指针进行解引用是：" << *p << endl;*/

	//利用指针来访问数组
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr; // 让指针指向数组的首地址
	for (int i = 0; i < 10; i++) {
		 // 不断地偏移这个指针
		cout << "输出元素为：" << *p << endl;
		p++;
	}
}