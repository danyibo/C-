#include<iostream>
using namespace std;

int main3() {
	int array[2][3] = {
		{1, 2 ,3},
		{4, 5, 6}
	};
	cout << "��ӡ������׵�ַ�ǣ�" << array << endl;
	cout << sizeof(array) << endl;
	cout << "Ԫ�صĸ����ǣ�" << sizeof(array) / sizeof(int) << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "ÿ��Ԫ���ǣ�" << array[i][j] << endl;
		}
	}
	return 0;
}