#include <iostream>
using namespace std;

class StudentClass
{

	const int ID;  //�й��� ���ȭ
	char name[20];
	char major[20];
	int age;

public://���ڿ��� �ּ��̱⶧���� ������ ������ �־ ����Ѵ�
	   // ��� �̴ϼȶ������ ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ� . �� ��ü������ ������� �̸��ʱ�ȭ���Ǵ�
	StudentClass(int id,const char* myname, const char* mymajor, int myage): ID(id) {      //Member �̴ϼȶ�����
		//ID = id;
		strcpy(name, myname);         //���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ�Ѵ�.
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
		StudentClass sc1(123,"����","������", 34);  //��ü�� �����ϸ� �����ڸ� ȣ���ؾ��Ѵ�.
			sc1.ShowData();
		



		return 0;
	}