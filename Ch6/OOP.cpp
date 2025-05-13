#include "OOP.h"

void Example1()
{
	Point p1 = { -2, 8 };
	Point p2 = { 4, 10 };

	Point point(4, 6);

	cPoint cp1(3, 5);

	cp1.SetX(-3);

}


void Example2()
{

}

void Example3()
{

}

int cPoint::GetX() const
{
	return x;
}

int cPoint::GetY() const
{
	return y;
}

void cPoint::SetX(int amount)
{
	if (amount < 0)
	{
		cout << "잘못된 값으로 X를 변경하였습니다." << endl;
		return;
	}
	x = amount;
}

void cPoint::SetY(int amount)
{
	if (amount < 0)
	{
		cout << "잘못된 값으로 Y를 변경하였습니다." << endl;
		return;
	}
	y = amount;
}
