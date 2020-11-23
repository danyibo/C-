#include<iostream>
#include<string>
using namespace std;


// 结构体
struct student {
	string name;
	int age;
	int score;
};

void call_student() {
	struct student s1;
	s1.name = "张三";
	s1.age = 30;
	s1.score = 100;

	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age << endl;
	cout << "分数：" << s1.score << endl;

	// 创建方式
	struct student s2 = { "李四", 19, 90 };
	cout << "姓名：" << s2.name << endl;
	cout << "年龄：" << s2.age << endl;
	cout << "分数：" << s2.score << endl;

 }

void call_sturct_array() {
	student arr[3] = {
		{"张三", 18, 80},
		{"李四", 19, 89},
		{"王五", 20, 70}
	};

	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << arr[i].name <<
			"年龄：" << arr[i].age << "分数：" <<
			arr[i].score << endl;
	}
}

void call_sturct_point() {
	//结构体指针，用指针的形式访问结构体
	student stu = { "张三", 10, 100 };
	
	// 创建一个指针，这个指针是指向student对象地址的指针
	student* p = &stu;  
	cout << "姓名：" << p->name << "年龄：" << p->age <<
		"分数：" << p->score << endl;

}

// 结构体嵌套
struct teacher {
	int id; // 职工编号
	string name; // 教师姓名
	int age;
	student stu; // 子结构体，学生
};

void call_student_and_teacher() {
	teacher t1;
	t1.id = 10000;
	t1.name = "老汪";
	t1.age = 40;
	t1.stu.name = "小敏"; // 子结构体访问就是两个点就可以进去了
	t1.stu.age = 10;
	t1.stu.score = 100;

	cout << "职工编号：" << t1.id
		<< " 老师姓名：" << t1.name
		<< " 老师年龄：" << t1.age
		<< " 学生姓名：" << t1.stu.name
		<< " 学生年龄：" << t1.stu.age
		<< " 学生分数：" << t1.stu.score
		<< endl;


}

void printStudent(student stu) {
	// 值传递
	stu.age = 28;

}


void call_struct_pass_value() {
	// 结构体中的值传递

}


struct hero {
	string name;
	int age;
	string sex;
}; // 注意结构体最后是要有分号的


void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; i++) {
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



// C++核心编程部分代码
/*
	代码区：存放函数体的二进制代码，由操作系统进行管理
	全局区：存放全局变量和静态变量（注意）以及常量
	栈区：由编译器自动分配释放，存放函数的参数，局部变量等
	因此，栈区是函数局部变量的生命期
	堆区：是由程序员分配和释放的区域，程序结束时，由操作系统回收
*/

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

void check_region() {
	// 局部变量
	int a = 10;
	int b = 10;

	// 打印地址查看一下
	cout << "局部变量a的地址为：" << int(&a) << endl;
	cout << "局部变量b的地址为：" << int(&b) << endl;

	cout << "全局变量a的地址为：" << int(&g_a) << endl;
	cout << "全局变量b的地址为：" << int(&g_b) << endl;
	
}

// 栈区

int* func() {
	int a = 10;
	return &a;
}

void call_point_return() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl; // 这次返回的就不是这个数了

	// 不要返回局部变量的地址，栈区开辟的数据是由编译器来自动释放的
}

int* func2() {
	// 创建一个变量为10，再创建一个指针a指向这个变量的地址
	// new开辟的内存区域是存放在堆区，是由程序员开辟和释放的，来管理的
	int* a = new int(10);
	return a;

}

void call_fun_new() {
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	// 下面这行是是不行的，因为已经释放了这段内存空间
	// 因此这段空间是不存在的，我无法访问的

	// cout << *p << endl;
}


void heap_array() {
	// 在堆区开辟一个数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	// 释放数组的时候delete后面加[]
	delete[] arr;


}

// 引用

void learning_ref() {
	int a = 10;  //10的原来名字是a
	int& b = a;  //别名是b
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 100; // 给这个b赋值100，那么a的值也会改变为100
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

// 引用必须进行初始化

void test_ref() {
	int a = 10;
	int b = 20;
	//int& c; 这个是错误的，因为c没有进行初始化
	int& c = a;
	c = b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


}

void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void test_pass_value() {
	int a = 10; int b = 20;
	// 这三个代码执行的时候，02已经换了数据，03再换一次，就和01相同了
	mySwap01(a, b);
	cout << "a = " << a << " b = " << b << endl;
	mySwap02(&a, &b);
	cout << "a = " << a << " b = " << b << endl;
	mySwap03(a, b);
	cout << "a = " << a << " b = " << b << endl;
}

// 引用作为函数的返回值


int& test01() {
	int a = 10;
	return a;
}

int& test02() {
	static int a = 20;
	return a;
}

// 函数占位符

void fun_zhan(int a, int) {
	cout << "this is a func" << endl;
}

void call_fun_zhan() {
	fun_zhan(10, 10);  // 必须将占位的地方补上

}

// 函数重载

void func_over() {
	cout << "func 的调用" << endl;
}

void func_over(int a) {
	cout << "func a  的调用" << endl;
}

void func_over(double a) {
	cout << "func double 的调用" << endl;
}

void call_over() {
	func_over();
	func_over(10);
	func_over(12.9);
}


// class 

const double PI = 3.14;

class Circle {
public:
	int m_r; // 半径
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

void call_circle() {
	Circle c;
	c.m_r = 10;
	cout << "圆的周长是：" << c.calculateZC() << endl;
}

class Student {
public:
	void setName(string name) { m_name = name; }
	void setID(int id) { m_id = id; }
public:
	string m_name;
	int m_id;
};

void call_class_student() {
	Student s;
	s.setName("张三");
	s.setID(10);
	cout << s.m_name << s.m_id << endl;
}

class Person {
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func() {
		m_name = "张三"; // 类内和类外都是可以访问的
		m_car = "拖拉机"; // 类内是可以访问的
		m_password = 123456;  // 类内是可以访问的
	}
};

void call_person() {
	Person p;
	p.m_name = "李四";
}

// 结构体和类的区别是：唯一区别是访问的权限不同


// 属性私有化，方法公有化
class Person2 {
public:
	void setName(string name) {
		m_name = name;
	}
	string getName()const {  // 这个name是不可以改变的因此加个const 

		return m_name;
	}
	void setAge(int age) {
		if (age < 0 || age> 150) {
			cout << "你个老妖精！" << endl;
			return;
		}

		m_age = age;
	}
	int getAge()const{
		return m_age;
	}

	// 情人设置是私有的不可以对外访问的
	void setLover(string lover){
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;

};

void call_person2() {
	Person2 p;
	p.setAge(10);
	p.setName("张三");
	p.setLover("小敏");
	cout << "显示信息" << endl;
	cout << " 年龄：" << p.getAge()
		<< " 姓名：" << p.getName()
		<< endl;
	// 别的信息是无法显示的

}

// 构造函数和析构函数
class Person3 {
public:
	// 构造函数
	Person3() {
		cout << "调用构造函数 " << endl;
	}
	// 析构函数
	~Person3() {
		cout << "调用析构函数 " << endl;
	}

};

void call_xi_gou() {
	Person3 p3;

}

/*
	构造函数分为：有参构造和无参构造
	          ：普通构造和拷贝构造

	其实就是要想清楚，创建对象的方法有哪几种
	那么构造函数的写法也就是有哪几种了

*/

class Dog {
public:
	// 默认构造函数
	Dog() {
		cout << "调用默认构造函数" << endl;
	}
	// 有参构造
	Dog(int a) {
		m_age = a;
		cout << "调用有参构造函数" << endl;
	}
	// 拷贝构造函数
	Dog(const Dog& d) {
		m_age = d.m_age;
		cout << "拷贝构造的调用" << endl;
	}
	~Dog() {
		cout << "析构函数的调用" << endl;
	}
public:
	int m_age;
};

void call_Dog() {
	Dog d1;
	Dog d2(10);
	Dog d3(d2);
	cout << d2.m_age << endl;
	cout << d3.m_age << endl;
}



int main() {
	//call_Dog();
	//call_xi_gou();
	//call_person2();
	//call_class_student();
	//call_circle();
	//call_over();
	//call_fun_zhan();
	//test_pass_value();
	//test_ref();
	//learning_ref();
	//heap_array();
	//call_fun_new();
	//call_point_return();
	//check_region();
	//call_student_and_teacher();
	//call_student();
	//call_sturct_array();
	//call_sturct_point();
	return 0;
}