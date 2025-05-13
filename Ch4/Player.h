#pragma once
#include "gameUtil.h"


enum Job
{
	WARRIOR,
	ARCHOR,
	MAGICIAN,
	CHIEF,
};

enum Stat
{
	STR,
	DEX,
	INT,
	LUK
};

struct Player
{
	string name;
	Job type;
	int level;
	long long exp;

	int xPos;
	int yPos;

	Player(string name, Job type, int level, long long exp, int xPos, int yPos)
		: name(name), type(type), level(level), exp(exp), xPos(xPos), yPos(yPos)
	{};

	void ShowInfo();

	void ChangePos(int x, int y);

	void ShowPlayerInfo();
	
	void PlayerStat();

	string ReturnByTypeName();
	
};