#include<iostream>
using namespace std;

int main3() {
	int array[2][3] = {
		{1, 2 ,3},
		{4, 5, 6}
	};
	cout << "打印数组的首地址是：" << array << endl;
	cout << sizeof(array) << endl;
	cout << "元素的个数是：" << sizeof(array) / sizeof(int) << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "每个元素是：" << array[i][j] << endl;
		}
	}
	return 0;
}