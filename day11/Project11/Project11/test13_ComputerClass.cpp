#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
	char* model;
	char* CPU;
	int RAM;

public:
	Computer()
	{
		model = NULL;
		CPU = NULL;
		RAM = 0;

	}

	Computer(const char* mymodel, const char* mycpu, int myram)
	{
		model = new char[strlen(mymodel) + 1];
		strcpy(model, mymodel);

		model = new char[strlen(mycpu) + 1];
		strcpy(CPU, mycpu);

		RAM = myram;

	}



};

int main(void)
{


	return 0;
}