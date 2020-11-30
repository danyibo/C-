#include<iostream>
#include<string>

using namespace std;

// ����CPU��
class CPU {
public:
	// ����ļ��㺯��
	virtual void calculate() = 0;
	// ���Ǹ����麯��
};

// �����Կ���
class VideoCard {
public:
	 // �������ʾ����
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	// ��д���캯��
	Computer(CPU* cpu, VideoCard* vc,
		Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	// �ṩ�����ĺ���
	void work() {
		// ������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	// �ṩ�����������ͷ��������Ե����
	~Computer() {
		// �ͷ�CPU���
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		// �ͷ��Կ����
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		// �ͷ��ڴ����
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

// ���峧�̵���
class IntelCPU : public CPU {
public:
	virtual void calculate() {
		cout << "INtel��CPU��ʼ�����ˣ�" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel���ڴ�����ʼ������" << endl;
	}
};

// ����ĳ���
class LenovoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "�����CPU��ʼ������" << endl;
	}
};

class LenovoMemory : public Memory {
public:
	virtual void storage() {
		cout << "������ڴ�����ʼ������" << endl;
	}
};

void test() {
	// ��һ̨�������
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	// ������һ̨���Կ�ʼ����
	Computer* computer1 = new Computer(
		intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
}

int main() {
	test();
	return 0;

}