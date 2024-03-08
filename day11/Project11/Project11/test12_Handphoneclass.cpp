#include <iostream>
#include <cstring>
using namespace std;

class Handphone
{
	char* model;
	int RAM;

public:
	Handphone()
	{
		model = NULL;
		RAM = 0;

	}

	Handphone(const char* mymodel, int myram)
	{
		model = new char[strlen(mymodel) + 1];
		strcpy(model, mymodel);
		RAM = myram;

	}



};