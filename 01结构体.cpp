#include<iostream>
#include<string>
using namespace std;

// �����ṹ��
struct Student
{
	string name;
	int age;
	int score;

};
struct  Teacher
{
	int ID;
	string name;
	int age;
	Student stud;

};

//�ṹ��ͺ���

// ͨ��ֵ���д�ӡ
void PrintByValue(Student s) {
	cout << "**********���Ӻ����н��д�ӡ���*********" << endl;
	cout << "ѧ�������� " << s.age << " ѧ���ĳɼ� " << s.score << endl;

}


// ͨ��ָ����д�ӡ
void PrintByRef(Student *s) {
	cout << "*********���Ӻ����н��д�ӡ************" << endl;
	cout << "***********�����ַ*************" << endl;
	cout << "ѧ���������ǣ�" << s->age << " ѧ���ĳɼ��� " << s->score << endl;
}

int main() {
	// ����һ���ṹ��
	Student student_1 = { "����", 20, 100 };
	cout << "�����ǣ�" << student_1.name << endl;
	cout << "�����ǣ�" << student_1.age << endl;
	cout << "�����ǣ�" << student_1.score << endl;
	cout << "***************************" << endl;

	// �����ṹ������
	Student array[3] = {
		{"tom", 10, 90},
		{"small", 9, 100},
		{"mike", 11, 99}
	};
	for (int i = 0; i < 3; i++) {
		cout << "ÿ��Ԫ���ǣ�" 
			<< "���䣺"<< array[i].age
			<< "  ������"<< array[i].name
			<< "  ������"<< array[i].score
			<< endl;
	}

	//����ָ����жԽṹ��ķ���
	Student* p = &student_1;
	cout << "�ṹ���ָ��: " << p << endl;
	//cout << "��ָ����н����ã�" << *p << endl;   // �˴���Ҫ���������
	// ָ���������
	cout << "���� " << p->age << " ���� " << p->name << " ���� " << p->score << endl;


	// �ṹ��Ƕ��
	

	Teacher teacher_1;
	teacher_1.ID = 10000;
	teacher_1.name = "����ʦ";
	teacher_1.age = 50;
	teacher_1.stud.age = 10;
	teacher_1.stud.name = "С��";
	teacher_1.stud.score = 100;

	PrintByValue(student_1);
	PrintByRef(&student_1); // 


	


}