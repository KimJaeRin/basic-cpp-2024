#include <iostream>

class Human {

private:  //��������
	char name[20];
	int age;
	char job[20];


public:   //�������� ������
	Human() { //Ŭ�����̸��� �Ȱ��� �ż���� ������ �ʱ�ȭ ����
	

	}
	void AInfo() {
		std::cout << "name,age,job" << name<<age<<job << std::endl;
	}
};

int main()
{

	Human h();  
	h.humanInfo();

	return 0;
}