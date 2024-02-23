#include <iostream>

class AClass {

private:  //생략가능
	int num;

public:   //접근제어 지시자
	AClass(int anum) { //클래스이름과 똑같은 매서드는 생성자 초기화 역할
		num = anum;

	}
	void AInfo() {
		std::cout << "A::num:" << num << std::endl;
	}
};

int main()
{

	AClass a(10);  //AClass에 있는 생성자를 호출하는 코드
	a.AInfo();

	return 0;
}