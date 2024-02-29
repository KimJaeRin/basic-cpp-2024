#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage,const char* myname) {

		age = myage;
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm" << age << "years old" << endl;
	}
};
class UnivStudent : public Person                 //   public Person == 상속
{
	char major[50];

public:
	UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname)  //string mymajor 도 가능
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};




int main(void)
{
	UnivStudent ustd1("Kim", 27, "elec");
	ustd1.WhoAreYou();
	UnivStudent ustd2("Kim", 21, "elec");
	ustd2.WhoAreYou();

	return 0;
}