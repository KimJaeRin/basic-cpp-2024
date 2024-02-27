/*
메모리 동적할당 : new 연산자 사용
프로그램 실행 중에 메모리를 할당 받는다.
*/

#include <iostream>
using namespace std;
int main()
{
	
	int *pi = new int;            //new연산자를 통해서 heap영역에 int(4byte) 크기만큼 메모리 공간을 할당받고 할당받은 메모리 주소를 리턴시킴.

	*pi = 10;

	cout << "pi가 가르키는 곳의 저장된 값 : " << *pi << endl;
	return 0;
}