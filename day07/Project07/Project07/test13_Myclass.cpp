#include <iostream>
#include<cstring>
using namespace std;



class Myclass {

private :
	char name[30];
	int age;

public:
		void Aname (const char* name ,int aage)
	{
		strcpy(this->name, name);
		int age = aage;


	}
		void name()
		{
			cout <<"���� �̸���"<< Aname <<"���̴� "<< aage << endl<<endl;
		}


};

class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	MyInfo(const char myname, int myage) : Myclass (Aname), Myclass (aage)
	{ }

	void num()
	{

		cout << " ��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;

	}
};

int main(void) {





	return 0;
}