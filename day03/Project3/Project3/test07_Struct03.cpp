/*c++ Ŭ���� :Ŭ���� ����� ��� ������ ��� �Լ��� ������. ��� �Լ� �߰� ��, ����ü���� Ŭ������*/

#include <iostream>

class human {    // human Ŭ���� (����� ���� �ڷ���)
	public: 
	char name[20];
	int age;
	char job[20];

	void showHuman() //��� ��� ��� �Լ�
	{

		printf("name : %s age : %d  job : %s\n", name, age, job);
	}

}Human;


int main()
{
	int a = 10;
	//human h1 = { "ȫ�浿", 50, "����" };
	//h1.showHuman();
	human h1 = { "ȫ�浿", 50, "����"};
	h1.showHuman();



	return 0;
}