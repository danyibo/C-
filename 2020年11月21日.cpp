#include<iostream>
#include<string>
using namespace std;
# define day 7 // ע�ⲻ��Ҫ�Ⱥ�ʲô�ģ�ֱ�Ӷ��弴��

void test() {

	// ע���ַ����Ĵ�ӡ��˫����
	cout << "***** ����1 *****" << endl;
	cout << "hellow world " << endl;
	
	// 1.3 ����
	// �������Ǹ�һ���ڴ�ռ������������������ڴ�
	cout << "***** ����2 *****" << endl;
	// �﷨���������� ������ = ��ʼֵ
	// ע��������Ҫ�г�ʼֵ��

	int a = 10;
	cout << "a = " << a << endl;
	// ����������ʱ�򣬱���Ҫ��һ����ʼֵ������ᱨ��

	// 1.4 ����
	// # define �궨��  const ����
	cout << "***** ����3 *****" << endl;
	cout << "һ����" << day << "��" << endl;
	// day = 8;  ���ֲ����ǲ��������
	const int month = 12;
	// �﷨��const ���α�������
	cout << "һ����" << month << "��" << endl;

	// 1.5 �ؼ���
	// 2.2 sizeof
	cout << "***** ����4 *****" << endl;
	cout << "short����ռ�е��ڴ�ռ�Ϊ" << sizeof(short) << endl;
	cout << "int����ռ���ڴ�ռ�Ϊ" << sizeof(int) << endl;
	cout << "long����ռ�е��ڴ�ռ�Ϊ" << sizeof(long) << endl;
	cout << "long long ����ռ�е��ڴ�ռ�Ϊ" << sizeof(long long) << endl;

	// 2.3 ʵ��
	cout << "***** ����5 *****" << endl;
	float f1 = 3.14f;
	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1 << endl;
	cout << "float sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;
	// ��ѧ������
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;
	float f3 = 32 - 2;
	cout << "f3 = " << f3 << endl;

	// 2.6 �ַ���
	cout << "***** ����6 *****" << endl;
	// c�����ַ���
	char str1[] = "hello world";
	cout << str1 << endl;
	// c++�����ַ���
	string str2 = "hello world C++";
	cout << str2 << endl;

	// 2.7 ��������
	cout << "***** ����7 *****" << endl;
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "size of bool = " << sizeof(bool) << endl;

	// 2.8 ���ݵ�����
	cout << "***** ����8 *****" << endl;
	int aa = 0;
	//cout << "����������������" << endl;
	//cin >> aa;
	//cout << aa << endl;

	// ��֧
	/*cout << "***** ����9 *****" << endl;
	int score = 0; // ʹ�������ʱ����Ҫ���г�ʼ��
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;
	if (score > 600) {
		cout << "�㿼����һ����ѧ��" << endl;
	}
	else if (score > 500) {
		cout << "�㿼���˶�����ѧ��" << endl;
	}
	else if (score > 400) {
		cout << "�㿼����������ѧ��" << endl;
	}
	else {
		cout << "��û�п��ϴ�ѧ��" << endl;
	}*/

	// ��Ŀ�����
	cout << "***** ����10 *****" << endl;
	int a_a = 10;
	int b_b = 20;
	int c_c = 0;
	c_c= a_a > b_b ? a_a : b_b;
	cout << "c = " << c_c << endl;

	// switch
	// �������������Ҫ��д����򣬶�����һЩ
	cout << "***** ����11 *****" << endl;
	int score = 0;
	cout << "�����Ӱ�����" << endl;
	score = 8;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	// while ѭ��
	int num = 0;
	while (num < 10) {
		cout << "num = " << num << endl;
		num++;

	}
	cout << "do while " << endl;
	do {
		cout << num << endl;
		num++;

	} while (num < 10);

	// ���ﻹ����Ҫע����
	// do while ����ִ��ѭ����䣬�ٽ����ж�
	// while ���Ƚ����ж���ִ��ѭ�����
	// �������ǲ�ͬ�ģ�Ҫע������
	
	// for ѭ��

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}

}


// break
void learning_break() {
	cout << "��ѡ����Ҫ��ս�������Ѷȣ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;
	int num = 0;
	cin >> num;
	switch (num)

	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷȣ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷȣ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷȣ�" << endl;
		break;
	}
}

void for_break() {
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;  // �������5������ѭ���������ӡ5
		}
		cout << i << endl;
	}
}

int main_11_21() {
	learning_break();
	for_break();
	return 0;
}