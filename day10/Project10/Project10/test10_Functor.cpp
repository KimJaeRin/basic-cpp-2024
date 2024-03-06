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
		cout << name << "의 총점 : " << sum << endl;
	}
};

int main(void)
{
	Grade Student();

	int kr;
	cout << "국어성적 입력 : " ;
	cin >> kr;

	int math;
	cout << "수학성적 입력 : " ;
	cin >> math;

	int english;
	cout << "영어성적 입력 : " ;
	cin >> english;

	int sum;
	cout << "총점 : " << sum << endl;

	return 0;
}