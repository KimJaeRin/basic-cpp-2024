#include <iostream>
using namespace std;

class AAA
{
private:
	int num;                                //private은 클래스 내부에서만 객체 생성가능  싱글톤으로 객체 한번만 생성가능
public:
	AAA() : num(0){} //초기화
	AAA& CreateInitObj(int n) const   
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();                        //new 활용 다른 힙 영역을 받아서 다른 객체                     


	delete& obj1;
	delete& obj2;

	return 0;

}