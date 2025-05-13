#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

enum TurnSystem
{
	PLAYERTURN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEEND
};

enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

void GoToXY(int x, int y);
void setCursorVisible(int x, int y);

