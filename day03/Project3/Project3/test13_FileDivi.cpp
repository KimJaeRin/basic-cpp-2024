#include <iostream>

class AClass {

private:  //��������
	int num;

public:   //�������� ������
	AClass(int anum) { //Ŭ�����̸��� �Ȱ��� �ż���� ������ �ʱ�ȭ ����
		num = anum;

	}
	void AInfo() {
		std::cout << "A::num:" << num << std::endl;
	}
};

int main()
{

	AClass a(10);  //AClass�� �ִ� �����ڸ� ȣ���ϴ� �ڵ�
	a.AInfo();

	return 0;
}