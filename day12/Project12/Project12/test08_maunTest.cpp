#include <iostream>

int main(int argc, char* argv[])
{
	printf("argc : %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d}: %s", i, argv[i]);
	}
	printf("프로그램 종료\n");

	return 0;

}