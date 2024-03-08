#include <iostream>
#include "PointTemplate.h"
#include "test05_PointTempalte.cpp"

using namespace std;


int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<int> pos3('P', 'F');
	pos3.ShowPosition();
	return 0;
}