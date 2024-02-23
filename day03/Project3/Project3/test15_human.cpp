#include <iostream>

class Human {

private:  //생략가능
	char name[20];
	int age;
	char job[20];


public:   //접근제어 지시자
	Human() { //클래스이름과 똑같은 매서드는 생성자 초기화 역할
	

	}
	void AInfo() {
		std::cout << "name,age,job" << name<<age<<job << std::endl;
	}
};

int main()
{

	Human h();  
	h.humanInfo();

	return 0;
}