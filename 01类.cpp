#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14;

class Cricle {
public:
	int R;
	
	double get_ZC() {
		return 2 * PI * R;
	}
};

class Student {
public:
	string s_name; //ѧ��������
	int s_ID; //ѧ���ı��

	void setName(string name) {
		s_name = name;
	}
	void setID(int id) {
		s_ID = id;
	}
	int getID() {
		return s_ID;
	}
	string getName(){
		return s_name;
	}
};

/*
	��������������⣺
		����Ȩ�������ڣ����⣬�����Է���
		����Ȩ�������ڿ��Է��ʣ����ⲻ���Է���
		˽��Ȩ�������ڿ��Է��ʣ����ⲻ���Է���
		
		����Ȩ�޺�˽��Ȩ�޵������ǣ��ڼ̳е�ʱ�������ǿ��Է��ʱ���Ȩ�޵ģ�����˽��Ȩ���ǲ����Ե�


	������ͽṹ��������ǣ�
		Ĭ��Ȩ���£��ṹ���Ȩ���ǹ��е�
		Ĭ��Ȩ���£����Ȩ����˽�е�


	һ������£�����ĳ�Ա����ȫ������Ϊ˽������
	��д������Ĺ����ӿں��������ʺ�������Щ����
	���һ����Զ���������ݾ�һ����飬��֤�����Ǻ����

*/
 
class Test {
public:
	string my_name;
protected:
	string my_car;
private:
	string my_password;
};
 

int main1() {
	Cricle circle_01;
	circle_01.R = 2;
	cout << "���Բ���ܳ��ǣ�" << circle_01.get_ZC() << endl;


	Student s1;
	s1.setName("����");
	s1.setID(1);
	cout << "ѧ��������: " << s1.getName() << "ѧ���ı��: " << s1.getID() << endl;
	return 0;
}