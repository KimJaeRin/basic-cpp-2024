#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

	vector<int> v1;
	int in;

	cout << "������ �Է��Ͻÿ� 0�� ���� :";
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