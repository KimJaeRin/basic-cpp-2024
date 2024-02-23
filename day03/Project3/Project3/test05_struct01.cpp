/*c 기준 : 멤버로 멤버 변수만 가진다. */

#include <stdio.h>

typedef struct human{          //huma 구조체 (사용자 정의 자료형)
	char name[20];    //배열, 속성 : 멤버 변수 3개(name, age, job)
	int age;
	char job[20];

}Human;    //앞으로 human 구조체를 "Human" 자료형으로 사용하겠다.
 
void showHuman(Human h) 
{

	printf("name : %s age : %d  job : %s\n", h.name, h.age, h.job);
}

int main() 
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" }; //Human타입의 변수를 선언하고 초기화 시킴.
	showHuman(h1);

	return 0;
}