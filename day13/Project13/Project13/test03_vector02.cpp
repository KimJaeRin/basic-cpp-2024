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
		cout << "������ �Է��Ͻÿ� 0�� ���� :";
		cin >> in;
		if (in == 0) {
			break;
		}
		v1.push_back(in);
		sum += in;
		cout << sum / v1.size() << endl;
	}
	cout << "���α׷� ����." << endl;












	return 0;
}