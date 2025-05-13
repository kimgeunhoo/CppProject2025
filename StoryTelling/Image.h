#pragma once
#define YLENGTH 10
#define XLENGTH 100

#include <iostream>
#include <string>
#include "Console.h"

// 1���� �����͸� 2���� �迭�� ��ȯ �� �ٽ� �����ִ� ��ü
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
			const char* lineEnd = strchr(lineStart, '\n'); // i ��° �ٿ��� ���๮�ڸ� ã�ƶ�.
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // ������ �� ǥ��
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
			if (currentX < 0)  // �ֿܼ��� x�� 0���� ������ ���� �߻�
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

