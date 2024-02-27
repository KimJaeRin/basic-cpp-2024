#include <iostream>
#include <cstring>
using namespace std;

class person
{
private:
	char* name;
	int age;
public:
	person(const char* myname, int myage)             //입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;    //null 문자를 더해주기 위해 +1
		name = new char[len];
		strcpy(name, myname);   //myname = 메인함수 , name = 프
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}
	~person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	person man1("Lee Dong Woo", 29);
	person man2("Jang Dong Gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}