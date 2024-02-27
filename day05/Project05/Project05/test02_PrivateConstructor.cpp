#include <iostream>
using namespace std;

class AAA
{
private:
	int num;                                //private�� Ŭ���� ���ο����� ��ü ��������  �̱������� ��ü �ѹ��� ��������
public:
	AAA() : num(0){} //�ʱ�ȭ
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
	obj2.ShowNum();                        //new Ȱ�� �ٸ� �� ������ �޾Ƽ� �ٸ� ��ü                     


	delete& obj1;
	delete& obj2;

	return 0;

}