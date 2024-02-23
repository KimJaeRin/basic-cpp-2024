/*c++ 기준 :구조체 멤버로 멤버 변수와 멤버 함수를 가진다. 멤버 함수 추가 됨, 구조체에서 클래스로*/

#include <iostream>

typedef struct human {          
	char name[20];    
	int age;
	char job[20];

	void showHuman() //기능 담당 멤버 함수
	{

		printf("name : %s age : %d  job : %s\n", name, age, job);
	}

}Human;    


int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" }; 
	h1.showHuman();

	return 0;
}