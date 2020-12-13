#include<iostream>
#include<string>


using namespace std;

// string 

void test01() {
	string s1; // ����һ�����ַ���
	cout << "str1 = " << s1 << endl;

	const char* str = "hello world";
	string s2(str); // ��C�����ַ���תΪ��string 
	cout << "str2 = " << s2 << endl;

	string s3(s2);
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str4 = " << s4 << endl;
}


void test02() {
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello C++", 5);
	// ���ַ�����ǰn���ַ���ֵ
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	// ��n���ַ�c��ֵ
	cout << "str7 = " << str7 << endl;

} 

void test03() {
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1 = " << str1 << endl;

	str1 += ';';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL LDF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" Love");
	str3.append("game abcde", 4);
	cout << str3 << endl;

} 

void test04() {
	string str1 = "abcsdgjkgn";
	int pos = str1.find("bsssc");
	if (pos == -1) {
		cout << "δ�ҵ�" << endl;
	}
	else {
		cout << "pos = " << pos << endl;
	}

	pos = str1.find("bc");
	cout << "pos = " << pos << endl;

}

void test05() {
	string str1 = "agkdfsagna";
	cout << "ԭ�����ǣ�" << str1 << endl;
	str1.replace(1, 3, "1111");
	cout << "�滻����ǣ�" << str1 << endl;
}

void test06() {
	string s1 = "hello";
	string s2 = "aello";
	int ret = s1.compare(s2);
	// �Ƚϵ�������ASCII

	if (ret == 0) {
		cout << "s1 ���� s2" << endl;
	}
	else if (ret > 0) {
		cout << "s1 ���� s2" << endl;
	}
	else {
		cout << "s1 С�� s2" << endl;
	}
}

void test07() {
	string str = "hello world";
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;
}

void test08() {
	string str = "hello";
	str.insert(1, "1111");
	cout << str << endl;

	str.erase(1, 3);
	cout << str << endl;

	// �����ɾ���Ŀ�ʼ�±궼��0��ʼ��

}

void test09() {
	string str = "agcddgfgfdasghjadkgh";
	string substr = str.substr(1, 3);

	cout << "substr = " << substr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;
}



int main() {
	test09();
	// test08();
	// test07();
	// test06();
	// test05();
	// test04();
	// test03();
	// test02();
	// test01();
	return 0;
}