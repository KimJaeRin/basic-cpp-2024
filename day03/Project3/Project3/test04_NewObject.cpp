#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()   //������ (class �̸��� ���� �޼���)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1 :";
	Simple* sp1 = new Simple; //new = �� ������ �޸� ���� �Ҵ� �޾Ƽ� ��ü ���� ,"*" = ����Ʈ ���� , �ּ� �̿�
	//Aaa *ap = new Aaa;
	cout << "case 2 :";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;                           //��ü ��ȯ
	free(sp2);
	return 0;
	/*Ŭ���� �̸��̶� �Լ��̸��̶� ������ ������ �Լ� Ŭ���� �� �޼ҵ�,
	Ŭ������ �̿��� ��ü�� ����.Ŭ���� = �ϳ��� Ÿ��.*/
}


}