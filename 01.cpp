#include<iostream>
#include<limits>
using namespace std;

int main1(){

	float f1 = 3.14f;  //在后面加上一个f就表示这是个单精度的数字
	cout << f1 << endl;
	cout << 3e2 << endl;  // 科学计数法
	cout << 3e-1 << endl;
	cout << 10 % 3 << endl;
	int arr[5] = { 1, 2, 3};  // 如果没有对其全部赋值，就会用零来添加剩余的元素
	for (int i = 0; i < 5; i++) {
		cout << "输出的数组" << arr[i] << endl;
	}
	cout << "数组的首地址\t" << arr << endl;
	cout << "数组的元素个数\t" << sizeof(arr) / sizeof(int) << endl;

	//寻找最大值
	/*
	   感觉这个思路还是非常重要：
	     先设定一个最大值，然后不断地更新这个最大值
	*/
	int max_num = 0;
	int test_array[6] = { 30, 40, 50, 10, 60, 3 };
	for (int i = 0; i < (sizeof(test_array) / sizeof(int)); i++) {
		if (test_array[i] > max_num) {
			max_num = test_array[i];
		}
	}
	cout << "最大值是" << max_num << endl;
	return 0;


}