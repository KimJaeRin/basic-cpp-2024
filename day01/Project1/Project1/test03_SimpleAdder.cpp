#include <iostream>

int main(void)
{
	int val1;  //�޸𸮰���(RAM)�� int ũ��� ��������� �Ҵ� �ް� "val" �̸����� ����Ѵ�.
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;  // �Է� ȭ��ǥ ���� �ݴ�

	int result = val1 + val2;
	std::cout << "���� ��� : " << result << std::endl;
	
	return 0;
	
}

/*
	�������� = ���ú��� : ����Ǿ��� ���� �ȿ����� ����� ����(static������ ����).
	���������� ��ü �������� ��� ����.
*/

/*int main()
{
	int val1, val2; ==
	// int val1;
	// int val1; �� ����
	int result = 0; //���� ����� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	
	return 0;
}
*/

/*
 ���
	1.���� ���
		if, switch
	2.�ݺ� ���
		for, while

*/

