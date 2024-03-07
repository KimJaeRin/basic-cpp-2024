#include <iostream>
using namespace std;


class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}

	Number& operator = (const Number& ref)
	{
		cout << "operator = ()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }

};

int main(void)
{
	/*
	int a = 10;
	int b = a; 가능
	
	But

	double d = 3.14;
	a = d; 불가능
	d = a; 가능(Upcasting은 자동형변환)
	
	
	*/
	Number num;
	num = 30;
	num.ShowNumber();
	return 0;
}