#include <iostream>
#include <cstring>
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
private:
	int salary; //월 급여
public:
	PermanentWorker(const char* name, int money)
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
	class TemporaryWorker : public Employee
	{
	private:
		int workTime;
		int payPerHour;
	public:
		TemporaryWorker(const char* name, int pay)
			: Employee(name), workTime(0), payPerHour(pay)
		{ }
		void AddWorkTime(int time)
		{
			workTime += time;

		}
		int GetPay() const
		{
			return workTime * payPerHour;
		}
		void ShowSalaryInfo() const
		{
			ShowYourName();
			cout << "salary : " << GetPay() << endl << endl;
		}

	};
	class SalesWorker : public PermanentWorker
	{
	private:
		int salesResult;
		double bonusRatio;
	public:
		SalesWorker(const char* name, int money, double ratio)
			: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
		{ }
		void AddSalesResult(int value)
		{
			salesResult+= value;

		}
		int GetPay() const  //오버라이딩된 멤버함수는 자식것이 실행된다. 따라서 재정의된 부모것을 호출하려면 PermanentWorker의 GetPay 함수 호출
		{
			return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
		}
		void ShowSalaryInfo() const
		{
			ShowYourName();
			cout << "salary : " << GetPay() << endl << endl;
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
			for (int i = 0; i < empNum; i++)
				delete empList[i];
		}

	};
	int main(void)
	{
		//직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
		EmployeeHandler handler;

		//정규직 등록
		handler.AddEmployee(new PermanentWorker("Kim", 1000));
		handler.AddEmployee(new PermanentWorker("Lee", 2000));

		//임시직 등록
		TemporaryWorker* alba = new TemporaryWorker("jung", 700);
		alba->AddWorkTime(5);
		handler.AddEmployee(alba);

		//영업직 등록
		SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
		seller->AddSalesResult(7000);
		handler.AddEmployee(seller);

		handler.ShowAllSalaryInfo();

		handler.ShowTotalSalary();

		return 0;
	}