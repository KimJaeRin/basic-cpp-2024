#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second: public First
{public:
		void MyFunc() { cout << "SecondFunc" << endl; }
		};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;
	/*객체 포인터 타입을 기분으로 접근법위가 결정.
	오버라이딩 된 경우는 부모것은 자식으로 가려진다.*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;


}
