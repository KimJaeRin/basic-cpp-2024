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
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;

	char op;
	std::cout << "연산자 입력(+, -, x, /) : ";
	std::cin >> op;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;



	if (op == '+') {
		std::cout << "덧셈 결과 : " <<sum(val1,val2) << std::endl;
	}

	if (op == '-') {
		
		std::cout << "뺼셈 결과 : " << minus(val1, val2) << std::endl;
	}

	if (op == 'x') {
		
		std::cout << "곱셈 결과 : " << times(val1, val2) << std::endl;
	}

	if (op == '/') {
		std::cout << "나눗셈 결과 : " << divide(val1, val2) << std::endl;

	}
	return 0;

}
