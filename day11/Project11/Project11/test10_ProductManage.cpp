#include <iostream>
#include <cstring>
using namespace std;

class Product
{
	char* id;
	int price;
	char* producer;

public:
	Product()
	{
		id = NULL;
		price = 0;
		producer = NULL;

	}

	Product(const char* myid, int myprice, const char* myproducer)
	{
		id = new char[strlen(myid) + 1];
		strcpy(id, myid);
		producer = new char[strlen(myproducer) + 1];
		strcpy(producer, myproducer);
		price = myprice;
	}



};

int main(void)
{


	return 0;
}