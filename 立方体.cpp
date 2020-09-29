#include<iostream>
#include<string>
using namespace std;


class Cube {
public:
	// д����

	// ���ó�
	void setL(int l) {
		m_L = l;
	}
	// ��ȡ��
	int getL() {
		return m_L;
	}
	// ���ÿ�
	void setW(int w) {
		m_W = w;
	}
	// ��ȡ��
	int getW() {
		return m_W;
	}
	// ���ø�
	void setH(int h) {
		m_H = h;
	}
	// ��ȡ��
	int getH() {
		return m_H;
	}

	// �������������
	int get_V_of_cube() {
		return m_L * m_W * m_H;
	}
	// �ó�Ա�����ж������������Ƿ����
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
	//д��Ա������
	int m_L; // length
	int m_W; // width
	int m_H; // height

};



int main2() {
	Cube c1;
	c1.setH(10);
	c1.setW(10);
	c1.setL(10);
	cout << "�����������ǣ�" << c1.get_V_of_cube() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(20);
	bool result = c1.isSame(c2);
	if (result) {
		cout << "����ͬ�������壡" << endl;

	}
	else {
		cout << "����ͬ��" << endl;
	}

	return 0;
}

