/*c ���� : ����� ��� ������ ������. */

#include <stdio.h>

typedef struct human{          //huma ����ü (����� ���� �ڷ���)
	char name[20];    //�迭, �Ӽ� : ��� ���� 3��(name, age, job)
	int age;
	char job[20];

}Human;    //������ human ����ü�� "Human" �ڷ������� ����ϰڴ�.
 
void showHuman(Human h) 
{

	printf("name : %s age : %d  job : %s\n", h.name, h.age, h.job);
}

int main() 
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" }; //HumanŸ���� ������ �����ϰ� �ʱ�ȭ ��Ŵ.
	showHuman(h1);

	return 0;
}