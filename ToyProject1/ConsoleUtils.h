#pragma once
#include <iostream>
#include <Windows.h> // 커서의 위치를 옮기는 함수 SetCursorPosition
#include <conio.h> // 입력 대기 함수 _getch()
#include <string> // 문자열의 기능을 포함하고 있는 라이브러리
#include <iomanip> // input output manipulate


namespace ConsoleUtils
{
	void GoToXY(int x, int y);

	void InputPlayerKey(int& x, int& y);

}