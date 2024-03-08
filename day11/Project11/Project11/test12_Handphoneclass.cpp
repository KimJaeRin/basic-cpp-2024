#include <iostream>
#include <cstring>

using namespace std;

class Handphone
{
	string model, RAM;

public:
	Handphone()
	{ }

	Handphone(int RAM, string model)
	{
		this -> RAM = RAM;

		this -> model = model;

	}
	void show();
	string getName() { return model; }
	string getram() { return RAM; }
};

void Handphone::show() {
	cout << "¸ðµ¨¸í : " << model << endl;
	cout << "RAM : " << RAM << endl;

}


