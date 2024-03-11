#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

	vector<int> v1;
	int in;

	cout << "정수를 입력하시오 0은 종료 :";
	cin >> in;


	while (true)
	{
		if (in == 0) {
			break;
		}
		v1.push_back(in);
	}










	return 0;
}