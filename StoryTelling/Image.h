#pragma once
#define YLENGTH 10
#define XLENGTH 100

#include <iostream>
#include <string>
#include "Console.h"

// 1차원 데이터를 2차원 배열로 변환 후 다시 보여주는 객체
// 12312343435143'\n'
class Image
{

private:
	char art[YLENGTH][XLENGTH];
	int height;

public:
	Image(const char* model, int height)
	{
		this->height = height;

		const char* lineStart = model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); // i 번째 줄에서 개행문자를 찾아라.
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // 마지막 줄 표현
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		Console::GoToXY(x, y);
		for (int i = 0; i < height; i++) 
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance, int delay) // ->
	{
		for (int i = 0 ; i < moveDistance; i++)
		{


			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}
		
	}

	void moveReverse(int x, int y, int moveDistance, int delay) // <-
	{
		for (int i = 0; i < moveDistance; i++)
		{ 
			int currentX = x - i;
			if (currentX < 0)  // 콘솔에서 x가 0보다 작으면 에러 발생
			{
				currentX = 0;
			}

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}

	}
};

