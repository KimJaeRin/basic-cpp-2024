#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student :public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	// Student * ptr0 = new Student(); 동일한 타입으로 사용하는 것이 원칙.
	/*
	부모타입의 객체 포인터로 자식 객체를 가리킬 수 있다.
	하지만 자식타입의 객체 포인터로 부모 객체는 가리킬 수 없다.
	그리고 접근은 객체 포인터의 타입을 따른다.
	상속관계에서 다시 쓰는거 오버로딩

	*/
	
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;

}