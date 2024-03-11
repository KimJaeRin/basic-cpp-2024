#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

	vector<int> v1;
	int in;
	int sum = 0;

	


	while (true)
	{
		cout << "정수를 입력하시오 0은 종료 :";
		cin >> in;
		if (in == 0) {
			break;
		}
		v1.push_back(in);
		sum += in;
		cout << sum / v1.size() << endl;
	}
	cout << "프로그램 종료." << endl;












	return 0;
}