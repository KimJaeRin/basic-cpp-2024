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
	std::cout << "Ã¹ ¹øÂ° ¼ýÀÚÀÔ·Â : ";
	std::cin >> val1;

	char op;
	std::cout << "¿¬»êÀÚ ÀÔ·Â(+, -, x, /) : ";
	std::cin >> op;

	int val2;
	std::cout << "µÎ ¹øÂ° ¼ýÀÚ ÀÔ·Â : ";
	std::cin >> val2;



	if (op == '+') {
		std::cout << "µ¡¼À °á°ú : " <<sum(val1,val2) << std::endl;
	}

	if (op == '-') {
		
		std::cout << "–E¼À °á°ú : " << minus(val1, val2) << std::endl;
	}

	if (op == 'x') {
		
		std::cout << "°ö¼À °á°ú : " << times(val1, val2) << std::endl;
	}

	if (op == '/') {
		std::cout << "³ª´°¼À °á°ú : " << divide(val1, val2) << std::endl;

	}
	return 0;

}
