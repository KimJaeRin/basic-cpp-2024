#include <iostream>
#include <cstring>
using namespace std;

class person
{
private:
	char* name;
	int age;
public:
	person(const char* myname, int myage)             //�Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;    //null ���ڸ� �����ֱ� ���� +1
		name = new char[len];
		strcpy(name, myname);   //myname = �����Լ� , name = ��
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;

	}
	~person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	person man1("Lee Dong Woo", 29);
	person man2("Jang Dong Gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}