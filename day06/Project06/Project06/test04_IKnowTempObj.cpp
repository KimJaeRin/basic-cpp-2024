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
	Temporary(100);                           //�ӽð�ü Temporary t(100);
	cout << "******* after make!" << endl << endl;

	Temporary(200);
	cout << "******* after make!" << endl << endl;

	const Temporary &ref = Temporary(300);        // �ӽð�ü�� const�� ������� ���� ����
	cout << "******* end of main!" << endl << endl;
	return 0;


}