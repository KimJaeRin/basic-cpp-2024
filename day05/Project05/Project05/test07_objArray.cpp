/*
객체배열
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;


public:
	Human(const char* myname, int age)
	{
		cout << "생성자 호출" << endl;
		strcpy(name, myname);
		this->age = age;

	}
	void HumanInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}
	~Human() {
		cout << "소멸자 호출" << endl;
	}
};

int main(void)
{
	Human h[3] = { Human("김재린", 27),Human("가가가",22), Human("나나나",25) };      //Human 타입의 객체 h

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();

 }
	Human* h1 = new Human("가나다", 50);        //객체포인터로 멤버 접근
	Human h2("라마바", 30);                     //객체로 멤버접근
	h1->HumanInfo();   // 힙영역에 할당된 Human객체의 포인터변수 h1을 Humandata함수 호출에 사용  
	delete h1;


	return 0;
}