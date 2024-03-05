/*
객체를 더하는 add 멤버 함수
*/
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int ax = 0, int ay = 0) : x(ay), y(ay)
	{
		cout << "Operatot" << endl;
	}

	Point add(const Point& other) {
		return Point(x + other.x, y + other.y);
	}
	void ShowPoint()
	{
		cout << '[' << x << ", " << y<<']' << endl;
	}
};
int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.add(pos2);
	pos1.ShowPoint();
	pos2.ShowPoint();
	pos3.ShowPoint();



	return 0;
}