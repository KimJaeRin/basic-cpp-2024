#include <iostream>
#include <cstring>
#include "test11_BookClass.cpp"
#include "test12_Handphoneclass.cpp"
#include "test13_ComputerClass.cpp"
using namespace std;

class Product
{
	int id;
	string price;
	string producer;

public:
	Product()
	{}
	Product(int id, string pri, string pro)
	{
		this->id = id;
		price = pri;
		producer = pro;

	}
	virtual void show() = 0;

	int getId() { return id; }
	string getPrice() { return price; }
	string getPro() { return producer; }

};

int main(void)
{
	
	char num;
	char pnum;
	cout << "-----��ǰ���� ���α׷�-----" << endl;
	cout << "1.��ǰ �߰�  2.��ǰ ���  3.��ǰ �˻� 0.���� " << endl;
	cout << "��ȣ �Է� : " ;
	cin >> num;

	switch (num) {
	case '1':
		
		cout << "1.å  2.�ڵ���  3.��ǻ��" << endl;
		cout << "�߰��� ��ǰ�� ���� ���� : ";
		cin >> pnum;
		break;
	
	case '2':
		
		cout << "1.å  2.�ڵ���  3.��ǻ��" << endl;
		cout << "����� ��ǰ�� ���� ���� : ";
		cin >> pnum;

		break;

	case '3':
		
		cout << "1.å  2.�ڵ���  3.��ǻ��" << endl;
		cout << "�˻��� ��ǰ�� ���� ���� : ";
		cin >> pnum;

		break;

	case '4':
		cout << "���α׷��� ����." << endl;
		
		break;
	default:
		cout << "�ٽ� �������ּ���." << endl;
	}


	return 0;
}