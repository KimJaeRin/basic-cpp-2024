#include <iostream>
#include <cstring>
using namespace std;

class StudentClass
{

	const int ID;
	char name[20];
	char major[20];
	int age;

public:
	StudentClass(int id,const char* myname, const char* mymajor, int myage): ID(id) {      //Member �̴ϼȶ�����
		//ID = id;
		strcpy(name, myname);
		strcpy(major, mymajor);
		age = myage;
	}


	
	void ShowData() const


	{
		cout << " �й� : " << ID << endl;
		cout << " �̸� : " << name << endl;
		cout << " ���� : " << major << endl;
		cout << " ���� : " << age << endl << endl;

	}

};

	int main(void)
	{
		StudentClass sc1(123,"����","������", 34);
			sc1.ShowData();
		



		return 0;
	}