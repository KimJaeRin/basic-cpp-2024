// if 문

#include <iostream>

using namespace std; // std 네임 스페이스의 모든 것을 사용하겠다.

int main()
{
	int inKey;
	cout << "숫자 하나를 입력하세요 : ";
	cin >> inKey;

	if (inKey == 11) {  //if(조건식) {....실행문}
		cout << "빙고" << endl;

	}
	if (inKey > 11) {
		cout << "숫자가 큽니다" << endl;
	}
	if (inKey < 11) {
			cout << "숫자가 작습니다" << endl;
	}




	return 0;
}