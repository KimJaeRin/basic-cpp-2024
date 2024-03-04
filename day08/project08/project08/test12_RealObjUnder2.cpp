#include <iostream>
using namespace std;

//Ŭ���� Data�� �䳻 �� ����
typedef struct Data
{
	int data;
	void (*ShowData)(Data*);             // ����Լ� ����
	void (*Add)(Data*, int);             // ����Ѽ� ����
}Data;

void ShowData(Data* THIS) {              // ����Լ� ����
	cout << "Data : " << THIS->data << endl;
}
void Add(Data* THIS, int num) {          // ����Լ� ����
	THIS->data += num;
};

//������ ����� �����Լ�
int main(void)
{
	Data obj1 = { 15, ShowData, Add };       //Data ����ü ���� obj1 ����� �ʱ�ȭ
	Data obj2 = { 7, ShowData, Add };        //Data ����ü ���� obj2 ����� �ʱ�ȭ

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
	return 0;



}