#include<iostream>
#include<limits>
using namespace std;

int main1(){

	float f1 = 3.14f;  //�ں������һ��f�ͱ�ʾ���Ǹ������ȵ�����
	cout << f1 << endl;
	cout << 3e2 << endl;  // ��ѧ������
	cout << 3e-1 << endl;
	cout << 10 % 3 << endl;
	int arr[5] = { 1, 2, 3};  // ���û�ж���ȫ����ֵ���ͻ����������ʣ���Ԫ��
	for (int i = 0; i < 5; i++) {
		cout << "���������" << arr[i] << endl;
	}
	cout << "������׵�ַ\t" << arr << endl;
	cout << "�����Ԫ�ظ���\t" << sizeof(arr) / sizeof(int) << endl;

	//Ѱ�����ֵ
	/*
	   �о����˼·���Ƿǳ���Ҫ��
	     ���趨һ�����ֵ��Ȼ�󲻶ϵظ���������ֵ
	*/
	int max_num = 0;
	int test_array[6] = { 30, 40, 50, 10, 60, 3 };
	for (int i = 0; i < (sizeof(test_array) / sizeof(int)); i++) {
		if (test_array[i] > max_num) {
			max_num = test_array[i];
		}
	}
	cout << "���ֵ��" << max_num << endl;
	return 0;


}