#include <iostream>
using namespace std;

class StudentClass
{

	const int ID;  //학번을 상수화
	char name[20];
	char major[20];
	int age;

public://문자열은 주소이기때문에 포인터 변수에 넣어서 사용한다
	   // 멤버 이니셜라이즈는 객체 생성시 초기화되지않는 멤버들을 초기화할때 사용한다 . 즉 객체생성과 상관없이 미리초기화가되는
	StudentClass(int id,const char* myname, const char* mymajor, int myage): ID(id) {      //Member 이니셜라이즈
		//ID = id;
		strcpy(name, myname);         //문자열 배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화한다.
		strcpy(major, mymajor);
		age = myage;
	}


	
	void ShowData() const


	{
		cout << " 학번 : " << ID << endl;
		cout << " 이름 : " << name << endl;
		cout << " 전공 : " << major << endl;
		cout << " 나이 : " << age << endl << endl;

	}

};

	int main(void)
	{
		StudentClass sc1(123,"김김김","가가가", 34);  //객체를 생성하면 생성자를 호출해야한다.
			sc1.ShowData();
		



		return 0;
	}