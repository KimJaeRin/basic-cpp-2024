#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
Person(const char* myname, int myage)
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname);
	age = myage;
}
Person(const Person& copy) : age(copy.age)  
{
	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);
}
void PersonInfo() const
{
	cout << " 이름 : " << name << endl;
	cout << " 나이 : " << age << endl;
}

~Person()
{
	delete[]name;
	cout << " called destructed,, "<< endl;
}
};



int main(void)
{
		
	Person p("Kim Jae Rin", 27);
	p.PersonInfo();

	Person copyp = p;
	copyp.PersonInfo();
	return 0;

}