#include "ConsoleUtils.h"

void ConsoleUtils::GoToXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ConsoleUtils::InputPlayerKey(int& x, int& y)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT)) // 키보드 왼쪽
		{
			x--;
			if (x < 0)
			{
				x = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT)) // 키보드 오른쪽
		{
			x++;
			if (x > 30)
			{
				x = 30;
			}
		}
		else if (GetAsyncKeyState(VK_UP)) // 키보드 위쪽
		{
			y--;
			if (y < 0)
			{
				y = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN)) // 키보드 아래쪽
		{
			y++;
			if (y > 30)
			{
				y = 30;
			}
		}
	}
}
