#include <iostream>
#include <cstring>
using namespace std;

class Grade {
private:

	char name[100];
	int kr;
	int math;
	int english;
	int sum;

	public:			
	Grade(const char* sname, int skr, int smath, int senglish, int sum)
	{
		strcpy(name, sname);
		kr = skr;
		math = smath;
		english = senglish;
		sum = kr + math + english;
	}


	void Student() const
	{
		cout << name << "�� ���� : " << sum << endl;
	}
};

int main(void)
{
	Grade Student();

	int kr;
	cout << "����� �Է� : " ;
	cin >> kr;

	int math;
	cout << "���м��� �Է� : " ;
	cin >> math;

	int english;
	cout << "����� �Է� : " ;
	cin >> english;

	int sum;
	cout << "���� : " << sum << endl;

	return 0;
}