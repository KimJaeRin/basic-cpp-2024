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
	

	return 0;
}