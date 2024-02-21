#include <iostream>

int main(void)
{
	int val1;  //메모리공간(RAM)에 int 크기로 저장공간을 할당 받고 "val" 이름으로 사용한다.
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;  // 입력 화살표 방향 반대

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;
	
	return 0;
	
}

/*
	지역변수 = 로컬변수 : 선언되어진 범위 안에서만 사용이 가능(static영역에 저장).
	전역변수는 전체 범위에서 사용 가능.
*/

/*int main()
{
	int val1, val2; ==
	// int val1;
	// int val1; 와 동일
	int result = 0; //변수 선언과 동시에 값을 대입 : 변수 초기화
	
	return 0;
}
*/

/*
 제어문
	1.선택 제어문
		if, switch
	2.반복 제어문
		for, while
	
	
	*for(초기식; 조건식; 증감식){
		1. 초기식을 가지고 조건식을 따진다.
		2. 참이면 for문의 실행문을 실행하고
		3. 증감식을 실행한다.
		4. 조건식을 따지고
		2 > 3 > 4 > 2 식으로 계속 실행

	}




*/

