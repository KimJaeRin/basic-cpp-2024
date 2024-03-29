#include <iostream>
# include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name :" << name << endl;
	}
};


class PermanentWorker : public Employee
{
private :
	int salary; //월 급여
public:
	PermanentWorker(const char * name, int money)
		: Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary :" << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		/*
		for(int i = 0;i<empNum; i++)
		empList[i] -> ShowSalaryInfo();
		*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for(int i = 0;i<empNum; i++)
		sum+= empList[i] -> GetPay();
		*/
		cout << "salary sum :" << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i=0; i < empNum; i++)
			delete empList[i];
	}

};
int main(void)
{

	//직원관리 목적 class
	EmployeeHandler handler;

	//직원 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 2000));
	handler.AddEmployee(new PermanentWorker("JUN", 3000));

	//이번 달 지급 급여 정보
	handler.ShowAllSalaryInfo();

	//이번달 급여 총합
	handler.ShowTotalSalary();
	return 0;


}