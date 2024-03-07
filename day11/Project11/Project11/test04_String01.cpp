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
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };    //���ڿ� Ÿ���� �迭����.
	cout << ary << endl;
	cout << "=================================" << endl;
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };    //�ι��� - ���ڿ��� ���� �˸�.
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;                  //��ü���� ũ��.
	cout << strlen(ary1) << endl;                  //�ι��� �ձ����� ũ��.
	cout << "=================================" << endl;
	char str[] = "string";                         //�ڵ����� �ι��ڰ� ����.
	cout << str << endl;
	cout << sizeof(str) << endl;                  //�ι��ڰ� ���Ե� ũ�Ⱑ ����.
	cout << strlen(str) << endl;                  //�ι��� �ձ����� ũ��.
	str[0] = 'S';
	cout << str << endl;
	cout << "=================================" << endl;
	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;                  //pstr�������� ũ��.
	cout << strlen(pstr) << endl;
	// pstr[0] = 'S';       //���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ��� Readonly
	cout << "=================================" << endl;
	cout << "=================================" << endl;



	/*
	C++ Style  heap ������ �����.
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