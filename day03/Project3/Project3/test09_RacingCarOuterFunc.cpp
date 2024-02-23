#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10

	};
}

struct Car
{// 멤버 변수
	char gamerID[CAR_CONST::ID_LEN]; //배열  '::' = 범위연산자 CAR_CONST에 있는 ID_LEN
	int fuelGauge;
	int curSpeed;
	//멤버 함수 선언
	void ShowCarState();
	void Accel();
	void Break();
};


void Car::ShowCarState()
	{
		cout << "소유자 ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재 속도 : " << curSpeed << "km/s" << endl << endl;

	}
	void Car:: Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{

			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP;
	}
	void Car :: Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}



int main(void)
{

	Car run99 = { "run99", 100, 0 }; //Car타입
	run99.Accel(); //98, 10  new 를 쓰지 않아서 힙영역이 아닌 스택에 저장
	run99.Accel(); //96, 20
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;

}