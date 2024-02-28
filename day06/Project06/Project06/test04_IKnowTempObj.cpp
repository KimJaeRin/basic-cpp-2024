#include <iostream>
using namespace std;


class Temporary
{

private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "creat obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destoroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
};
int main(void)
{
	Temporary(100);                           //임시객체 Temporary t(100);
	cout << "******* after make!" << endl << endl;

	Temporary(200);
	cout << "******* after make!" << endl << endl;

	const Temporary &ref = Temporary(300);        // 임시객체는 const를 적어줘야 참조 가능
	cout << "******* end of main!" << endl << endl;
	return 0;


}