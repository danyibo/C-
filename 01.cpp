#include<iostream>
#include<string>
using namespace std;

/*
	C++�еĹ��캯����python�е�__init__�����Ǻ����Ƶ�
	���г�ʼ���������

*/



// ������������͹��캯����˳��
class People {
public:
	People(string name, string p) : people_name(name), people_phone(p)
	{} //���ò����б�����ʼ����

	string people_name;
	Phone people_phone;

};

class Phone {
public:
	Phone(string name):phone_name(name) {}
	string phone_name;

};
int main() {

	Phone pp("С��");
	//People p("����", "С��");
	//cout << p.people_name << "����" << p.people_phone.phone_name << endl;
	return 0;
}