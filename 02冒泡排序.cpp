#include<iostream>
#include<limits>
using namespace std;

int main2() {
	int array[9] = { 2, 3, 1, 4, 5, 5, 9, 6, 7 };
	for (int i = 0; i < 9; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	// ��ؼ�ס����ν��������
	// ��������� = Ԫ�ظ��� - 1
	// �ڲ�ѭ���� = Ԫ�ظ��� - �������� - 1

	for (int i = 0; i < 9 - 1; i++) {  // Ԫ�صĸ�����һ
		for (int j = 0; j < 9 - i - 1; j++) { // Ԫ�صĸ�����ȥ�����ټ�һ
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "�����Ľ��: " << endl;
	for (int i = 0; i < 9; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;

}