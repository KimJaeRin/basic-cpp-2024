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
	cout << "-----상품관리 프로그램-----" << endl;
	cout << "1.상품 추가  2.상품 출력  3.상품 검색 0.종료 " << endl;
	cout << "번호 입력 : " ;
	cin >> num;

	switch (num) {
	case '1':
		
		cout << "1.책  2.핸드폰  3.컴퓨터" << endl;
		cout << "추가할 상품의 종류 선택 : ";
		cin >> pnum;
		break;
	
	case '2':
		
		cout << "1.책  2.핸드폰  3.컴퓨터" << endl;
		cout << "출력할 상품의 종류 선택 : ";
		cin >> pnum;

		break;

	case '3':
		
		cout << "1.책  2.핸드폰  3.컴퓨터" << endl;
		cout << "검색할 상품의 종류 선택 : ";
		cin >> pnum;

		break;

	case '4':
		cout << "프로그램을 종료." << endl;
		
		break;
	default:
		cout << "다시 선택해주세요." << endl;
	}


	return 0;
}