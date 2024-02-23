#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()   //생성자 (class 이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1 :";
	Simple* sp1 = new Simple; //new = 힙 영역에 메모리 공간 할당 받아서 객체 생성 ,"*" = 포인트 변수 , 주소 이용
	//Aaa *ap = new Aaa;
	cout << "case 2 :";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;                           //객체 반환
	free(sp2);
	return 0;
	/*클래스 이름이랑 함수이름이랑 같으면 생성자 함수 클래스 안 메소드,
	클래스를 이용해 객체를 만듦.클래스 = 하나의 타입.*/
}


}