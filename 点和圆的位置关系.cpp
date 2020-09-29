#include<iostream>
#include<string>
using namespace std;

class Point {
public:
	void setX(int x) {
		m_X = x;
	}
	int getX() {
		return m_X;
	}
	void setY(int y) {
		m_Y = y;
	}
	int getY() {
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};

class Circile {
public:
	void setR(int r) {
		m_R = r;
	}
	int getR() {
		return m_R;
	}
	void setPoint(Point p) {
		m_P = p;
	}
	Point getPoint() {
		return m_P;
	}


private:
	int m_R; // 半径
	Point m_P; // 圆心
};

void isInCircle(Circile c, Point p) {
	int distence = ((p.getX() - c.getPoint().getX()) * (p.getX() - c.getPoint().getX()) +
		(p.getY() - c.getPoint().getY() * (p.getY() - c.getPoint().getY())));

	if (c.getR() * c.getR() == distence)
	{
		cout << "在圆上" << endl;
	}
	else if (c.getR() * c.getR() > distence) {
		cout << "在圆外" << endl;
	}
	else {
		cout << "在圆内" << endl;
	}
}

int main() {

	Circile c;
	c.setR(10);
	Point p;
	p.setX(10);
	p.setY(9);

	Point c_p;
	c_p.setX(10);
	c_p.setY(0);
	isInCircle(c, p);

	return 0;
}