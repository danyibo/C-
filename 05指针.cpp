#include<iostream>
using namespace std;

int main() {
	/*int a = 10;
	int* p;
	p = &a;
	// ָ���ֵ���ǵ�ַ
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "ָ���ֵ�ǣ�" << p << endl;
	// �������ǻ�ȡָ��ָ��λ�õ�ֵ
	cout << "��ַ����ֵ�ǣ�" << a << endl;
	cout << "��ָ����н������ǣ�" << *p << endl;*/

	//����ָ������������
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr; // ��ָ��ָ��������׵�ַ
	for (int i = 0; i < 10; i++) {
		 // ���ϵ�ƫ�����ָ��
		cout << "���Ԫ��Ϊ��" << *p << endl;
		p++;
	}
}