#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void GoToXY(int x, int y);

enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

enum TuenSystem
{
	PLAYERTURN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEEND
};
