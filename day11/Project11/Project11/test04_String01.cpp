#include <iostream>
using namespace std;

/*
C Style

*/
int main(void)
{
	int code = 97;
	cout << code<<endl;
	cout << (char)code<<endl;
	cout << "================================="<<endl;
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };    //문자열 타입의 배열선언.
	cout << ary << endl;
	cout << "=================================" << endl;
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };    //널문자 - 문자열의 끝을 알림.
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;                  //전체문자 크기.
	cout << strlen(ary1) << endl;                  //널문자 앞까지의 크기.
	cout << "=================================" << endl;
	char str[] = "string";                         //자동으로 널문자가 붙음.
	cout << str << endl;
	cout << sizeof(str) << endl;                  //널문자가 포함된 크기가 리턴.
	cout << strlen(str) << endl;                  //널문자 앞까지의 크기.
	str[0] = 'S';
	cout << str << endl;
	cout << "=================================" << endl;
	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;                  //pstr포인터의 크기.
	cout << strlen(pstr) << endl;
	// pstr[0] = 'S';       //문자열으 포인터로 사용하는 경우는 변경이 불가능 Readonly
	cout << "=================================" << endl;
	cout << "=================================" << endl;



	/*
	C++ Style  heap 영역에 저장됨.
	*/

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;                  
	cout << s.size() << endl;
	//cout << strlen(s) << endl;
	cout << "=================================" << endl;
	string s1 = "KimJaeRin";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;

	return 0;
}