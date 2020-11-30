#include<iostream>
#include<string>

using namespace std;

// 抽象CPU类
class CPU {
public:
	// 抽象的计算函数
	virtual void calculate() = 0;
	// 这是个纯虚函数
};

// 抽象显卡类
class VideoCard {
public:
	 // 抽象的显示函数
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	// 编写构造函数
	Computer(CPU* cpu, VideoCard* vc,
		Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	// 提供工作的函数
	void work() {
		// 让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	// 提供析构函数，释放三个电脑的零件
	~Computer() {
		// 释放CPU零件
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		// 释放显卡零件
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		// 释放内存零件
		if (m_mem != NULL){
			delete m_mem;
			m_mem = NULL;
		}
	}


private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

// 具体厂商的类
class IntelCPU : public CPU {
public:
	virtual void calculate() {
		cout << "INtel的CPU开始计算了！" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};

class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存条开始储存了" << endl;
	}
};

// 联想的厂商
class LenovoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "联想的CPU开始计算了" << endl;
	}
};

class LenovoMemory : public Memory {
public:
	virtual void storage() {
		cout << "联想的内存条开始储存了" << endl;
	}
};

void test() {
	// 第一台电脑零件
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	// 创建第一台电脑开始工作
	Computer* computer1 = new Computer(
		intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
}

int main() {
	test();
	return 0;

}