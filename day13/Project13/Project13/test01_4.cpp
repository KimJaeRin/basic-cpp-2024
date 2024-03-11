/*
¿¹¿ÜÃ³¸® try,catch

*/
#include <iostream>
using namespace std;


int sum(int a, int b) {
	return a + b;
}
int times(int a, int b) {
	return a * b;
}
int minus(int a, int b) {
	return a - b;
}
int divide(int a, int b) {
	return a / b;
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "Á¤¼ö 2°³¸¦ ÀÔ·ÂÇÏ¼¼¿ä : " ;
	cin >> n1 >> n2 ;

	cout << " µ¡¼À : " << sum(n1, n2) << endl;
	cout << " »¬¼À : " << minus(n1, n2) << endl;
	cout << " °ö¼À : " << times(n1, n2) << endl;
	try {

		if (!n2) throw n2;
	cout << " ³ª´°¼À : " << divide(n1, n2) << endl;

	}
	catch (exception)
	{
		cout << "0 À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù." << endl;
	}




	return 0;
}