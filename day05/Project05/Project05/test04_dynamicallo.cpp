/*
�޸� �����Ҵ� : new ������ ���
���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�.
*/

#include <iostream>
using namespace std;
int main()
{
	
	int *pi = new int;            //new�����ڸ� ���ؼ� heap������ int(4byte) ũ�⸸ŭ �޸� ������ �Ҵ�ް� �Ҵ���� �޸� �ּҸ� ���Ͻ�Ŵ.

	*pi = 10;

	cout << "pi�� ����Ű�� ���� ����� �� : " << *pi << endl;
	return 0;
}