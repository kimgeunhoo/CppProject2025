#pragma once
#include <iostream>
#include <Windows.h> // Ŀ���� ��ġ�� �ű�� �Լ� SetCursorPosition
#include <conio.h> // �Է� ��� �Լ� _getch()
#include <string> // ���ڿ��� ����� �����ϰ� �ִ� ���̺귯��
#include <iomanip> // input output manipulate


namespace ConsoleUtils
{
	void GoToXY(int x, int y);

	void InputPlayerKey(int& x, int& y);

}