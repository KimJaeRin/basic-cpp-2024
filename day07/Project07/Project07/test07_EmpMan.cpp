#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class PermanentWorker
{
private:
	char name[100]; 
	int salary;
public:
		PermanentWorker(const char* name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay()<<endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];              //객체 포인터 배열
	int empNum;
public:
	EmployeeHandler(): empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)    //정규직 객체를 받아서 empList 배열에 집어 넣는다
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "Salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}


};
int main(void)
{
	EmployeeHandler handler;         //직원관리 목적으로 설계된 컨트롤 클래스 객체생성

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}