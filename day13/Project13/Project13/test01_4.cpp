/*
����ó�� try,catch

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
	cout << "���� 2���� �Է��ϼ��� : " ;
	cin >> n1 >> n2 ;

	cout << " ���� : " << sum(n1, n2) << endl;
	cout << " ���� : " << minus(n1, n2) << endl;
	cout << " ���� : " << times(n1, n2) << endl;
	try {

		if (!n2) throw n2;
	cout << " ������ : " << divide(n1, n2) << endl;

	}
	catch (exception)
	{
		cout << "0 ���� ���� �� �����ϴ�." << endl;
	}




	return 0;
}