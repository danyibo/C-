#include<iostream>
#include<string>
using namespace std;

// 创建结构体
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

//结构体和函数

// 通过值进行打印
void PrintByValue(Student s) {
	cout << "**********在子函数中进行打印输出*********" << endl;
	cout << "学生是年龄 " << s.age << " 学生的成绩 " << s.score << endl;

}


// 通过指针进行打印
void PrintByRef(Student *s) {
	cout << "*********在子函数中进行打印************" << endl;
	cout << "***********传入地址*************" << endl;
	cout << "学生的年龄是：" << s->age << " 学生的成绩是 " << s->score << endl;
}

int main() {
	// 创建一个结构体
	Student student_1 = { "张三", 20, 100 };
	cout << "姓名是：" << student_1.name << endl;
	cout << "年龄是：" << student_1.age << endl;
	cout << "分数是：" << student_1.score << endl;
	cout << "***************************" << endl;

	// 创建结构体数组
	Student array[3] = {
		{"tom", 10, 90},
		{"small", 9, 100},
		{"mike", 11, 99}
	};
	for (int i = 0; i < 3; i++) {
		cout << "每个元素是：" 
			<< "年龄："<< array[i].age
			<< "  姓名："<< array[i].name
			<< "  分数："<< array[i].score
			<< endl;
	}

	//利用指针进行对结构体的访问
	Student* p = &student_1;
	cout << "结构体的指针: " << p << endl;
	//cout << "对指针进行解引用：" << *p << endl;   // 此处需要运算符重载
	// 指针访问数据
	cout << "年龄 " << p->age << " 姓名 " << p->name << " 分数 " << p->score << endl;


	// 结构体嵌套
	

	Teacher teacher_1;
	teacher_1.ID = 10000;
	teacher_1.name = "王老师";
	teacher_1.age = 50;
	teacher_1.stud.age = 10;
	teacher_1.stud.name = "小王";
	teacher_1.stud.score = 100;

	PrintByValue(student_1);
	PrintByRef(&student_1); // 


	


}