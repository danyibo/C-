#include<iostream>
#include<limits>
using namespace std;

int main2() {
	int array[9] = { 2, 3, 1, 4, 5, 5, 9, 6, 7 };
	for (int i = 0; i < 9; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	// 务必记住是如何进行排序的
	// 排序的轮数 = 元素个数 - 1
	// 内层循环是 = 元素个数 - 排序轮数 - 1

	for (int i = 0; i < 9 - 1; i++) {  // 元素的个数减一
		for (int j = 0; j < 9 - i - 1; j++) { // 元素的个数减去轮数再减一
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "排序后的结果: " << endl;
	for (int i = 0; i < 9; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;

}