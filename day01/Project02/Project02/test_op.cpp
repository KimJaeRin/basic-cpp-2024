#include <iostream>

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

int main(void)
{
	int val1;
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1;

	char op;
	std::cout << "������ �Է�(+, -, x, /) : ";
	std::cin >> op;

	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;



	if (op == '+') {
		std::cout << "���� ��� : " <<sum(val1,val2) << std::endl;
	}

	if (op == '-') {
		
		std::cout << "�E�� ��� : " << minus(val1, val2) << std::endl;
	}

	if (op == 'x') {
		
		std::cout << "���� ��� : " << times(val1, val2) << std::endl;
	}

	if (op == '/') {
		std::cout << "������ ��� : " << divide(val1, val2) << std::endl;

	}
	return 0;

}
