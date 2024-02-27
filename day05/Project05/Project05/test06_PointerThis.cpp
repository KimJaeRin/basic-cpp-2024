#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int num)     // 초기화
	{
		this->num = num;
		cout<< "num = " << num << " , ";
		cout<< " address =  " << this <<endl;

	}
	void ShowSimpleData()
	{
		cout<< num <<endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << " , ";
	ptr1-> ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << " , ";
	ptr2->ShowSimpleData();     // ->(arrow) == 포인터를 이용해 데이터를 접근할때 사용
	return 0;


}