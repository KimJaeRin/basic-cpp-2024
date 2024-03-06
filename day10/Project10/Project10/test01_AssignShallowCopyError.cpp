#include<iostream>
#include<cstring>
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
	Person& operator = (const Person& ref)
	{
		delete[]name;                    // "YOON JI YUL"이 저장된 공간 반환
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};
int main(void)
{
	Person man1("LEE DONG WOO", 23);
	Person man2("LEE JANG WOO", 35);
	man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;

}