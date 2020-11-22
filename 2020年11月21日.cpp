#include<iostream>
#include<string>
using namespace std;
# define day 7 // 注意不需要等号什么的，直接定义即可

void test() {

	// 注意字符串的打印是双引号
	cout << "***** 程序1 *****" << endl;
	cout << "hellow world " << endl;
	
	// 1.3 变量
	// 变量就是给一段内存空间起名，方便操作这段内存
	cout << "***** 程序2 *****" << endl;
	// 语法：数据类型 变量名 = 初始值
	// 注意这里是要有初始值的

	int a = 10;
	cout << "a = " << a << endl;
	// 创建变量的时候，必须要给一个初始值，否则会报错

	// 1.4 常量
	// # define 宏定义  const 修饰
	cout << "***** 程序3 *****" << endl;
	cout << "一周有" << day << "天" << endl;
	// day = 8;  这种操作是不被允许的
	const int month = 12;
	// 语法：const 修饰变量即可
	cout << "一年有" << month << "月" << endl;

	// 1.5 关键字
	// 2.2 sizeof
	cout << "***** 程序4 *****" << endl;
	cout << "short类型占有的内存空间为" << sizeof(short) << endl;
	cout << "int类型占有内存空间为" << sizeof(int) << endl;
	cout << "long类型占有的内存空间为" << sizeof(long) << endl;
	cout << "long long 类型占有的内存空间为" << sizeof(long long) << endl;

	// 2.3 实型
	cout << "***** 程序5 *****" << endl;
	float f1 = 3.14f;
	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1 << endl;
	cout << "float sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;
	// 科学计数法
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;
	float f3 = 32 - 2;
	cout << "f3 = " << f3 << endl;

	// 2.6 字符串
	cout << "***** 程序6 *****" << endl;
	// c风格的字符串
	char str1[] = "hello world";
	cout << str1 << endl;
	// c++风格的字符串
	string str2 = "hello world C++";
	cout << str2 << endl;

	// 2.7 布尔类型
	cout << "***** 程序7 *****" << endl;
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "size of bool = " << sizeof(bool) << endl;

	// 2.8 数据的输入
	cout << "***** 程序8 *****" << endl;
	int aa = 0;
	//cout << "请输入整数变量：" << endl;
	//cin >> aa;
	//cout << aa << endl;

	// 分支
	/*cout << "***** 程序9 *****" << endl;
	int score = 0; // 使用输入的时候，需要进行初始化
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您的分数为：" << score << endl;
	if (score > 600) {
		cout << "你考上了一本大学！" << endl;
	}
	else if (score > 500) {
		cout << "你考上了二本大学！" << endl;
	}
	else if (score > 400) {
		cout << "你考上了三本大学！" << endl;
	}
	else {
		cout << "你没有考上大学！" << endl;
	}*/

	// 三目运算符
	cout << "***** 程序10 *****" << endl;
	int a_a = 10;
	int b_b = 20;
	int c_c = 0;
	c_c= a_a > b_b ? a_a : b_b;
	cout << "c = " << c_c << endl;

	// switch
	// 对于这个还是需要多写点程序，多掌握一些
	cout << "***** 程序11 *****" << endl;
	int score = 0;
	cout << "请给电影打个分" << endl;
	score = 8;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	
	default:
		cout << "烂片" << endl;
		break;
	}

	// while 循环
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

	// 这里还是需要注意下
	// do while 是先执行循环语句，再进行判断
	// while 是先进行判断再执行循环语句
	// 这两个是不同的，要注意区分
	
	// for 循环

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
	cout << "请选择你要挑战副本的难度：" << endl;
	cout << "1，普通" << endl;
	cout << "2，中等" << endl;
	cout << "3，困难" << endl;
	int num = 0;
	cin >> num;
	switch (num)

	{
	case 1:
		cout << "你选择的是普通难度：" << endl;
		break;
	case 2:
		cout << "你选择的是中等难度：" << endl;
		break;
	case 3:
		cout << "你选择的是困难难度：" << endl;
		break;
	}
}

void for_break() {
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;  // 如果等于5就跳出循环，不会打印5
		}
		cout << i << endl;
	}
}

int main_11_21() {
	learning_break();
	for_break();
	return 0;
}