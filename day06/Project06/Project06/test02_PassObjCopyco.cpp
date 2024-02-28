#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()                        // 멤버 함수  -> 객체 생성 후 사용이 가능.
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)            // 전역 함수 -> 누구나 접근가능.
{
	ob.ShowData();

}
int main(void)
{
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수 호출 후" << endl;
	return 0;
}