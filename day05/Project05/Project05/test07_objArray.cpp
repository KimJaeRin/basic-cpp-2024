/*
��ü�迭
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;


public:
	Human(const char* myname, int age)
	{
		cout << "������ ȣ��" << endl;
		strcpy(name, myname);
		this->age = age;

	}
	void HumanInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;

	}
	~Human() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main(void)
{
	Human h[3] = { Human("���縰", 27),Human("������",22), Human("������",25) };      //Human Ÿ���� ��ü h

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();

 }
	Human* h1 = new Human("������", 50);        //��ü�����ͷ� ��� ����
	Human h2("�󸶹�", 30);                     //��ü�� �������
	h1->HumanInfo();   // �������� �Ҵ�� Human��ü�� �����ͺ��� h1�� Humandata�Լ� ȣ�⿡ ���  
	delete h1;


	return 0;
}