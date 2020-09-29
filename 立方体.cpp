#include<iostream>
#include<string>
using namespace std;


class Cube {
public:
	// 写方法

	// 设置长
	void setL(int l) {
		m_L = l;
	}
	// 获取长
	int getL() {
		return m_L;
	}
	// 设置宽
	void setW(int w) {
		m_W = w;
	}
	// 获取宽
	int getW() {
		return m_W;
	}
	// 设置高
	void setH(int h) {
		m_H = h;
	}
	// 获取高
	int getH() {
		return m_H;
	}

	// 获得立方体的体积
	int get_V_of_cube() {
		return m_L * m_W * m_H;
	}
	// 用成员函数判断两个立方体是否相等
	bool isSame(Cube &c2) {
		if (c2.getH() == m_H &&
			c2.getW() == m_W &&
			c2.getL() == m_L) {
			return true;
		}
		else{
			return false;
	}
	}

private:
	//写成员的属性
	int m_L; // length
	int m_W; // width
	int m_H; // height

};



int main2() {
	Cube c1;
	c1.setH(10);
	c1.setW(10);
	c1.setL(10);
	cout << "立方体的体积是：" << c1.get_V_of_cube() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(20);
	bool result = c1.isSame(c2);
	if (result) {
		cout << "是相同的立方体！" << endl;

	}
	else {
		cout << "不相同！" << endl;
	}

	return 0;
}

