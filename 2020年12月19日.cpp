#include<iostream>
#include<string>

using namespace std;


void test01() {
	string str("some string");
	for (auto c : str) {
		cout << c << endl;
	}

	string s("Hello World!!!");
	// punct_cn的类型和s.size的类型相同
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt << endl;

	
	if (!s.empty()) {
		s[0] = toupper(s[0]);
	}
	cout << s << endl;
}

void test02() {
	// 引用
	int ival = 1027; 
	int& refVal = ival;
	cout << ival << endl;
	cout << refVal << endl;
	int a = 10;
	int* p = &a;
	cout << *p << endl;

}

void test03() {
	string line;
	while (getline(cin, line)) {
		cout << line << endl; 
	}
	
	while(getline(cin, line))
		if (line.size() > 10) {
			cout << line << endl;
		}
}

void test04() {
	string str("some string");
	for (char c : str){
	}

	for (auto &c : str) {
		c = toupper(c);
	}
	cout << str << endl;
}

void test05() {
	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
		it++;
	}
	cout << s << endl;
}


int main() {
	test05();
	//test04();
	//test03();
	// test02();
	// test01();
	return 0;
}