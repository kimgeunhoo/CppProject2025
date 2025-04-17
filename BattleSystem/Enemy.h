#pragma once
#include "Common.h"
#include "Image.h"


/*
	전투? Battle
	대상: Player. Enemy.
	체력, 공격력, 방어력
	사망하다.( 체력이 0보다 작거나 같을 때 )
	(체력을 조작하는 기능)
	공격을 받았다. 포션을 먹는다.

*/

struct Enemy 
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH+1];
	BattleState battleState;

	// 기능을 선언
	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage(int& posX, int& posY);

	Enemy(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), ATK(ATK), DEF(DEF), name(name) 
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	} 
	
	// 조건에 해당하는 기능
	bool IsBattle(int x, int y);
	bool IsWalk(int x, int y);
	bool IsIdle(int x, int y);

	
	// 기능을 조합해서 하나의 새 기능으로 표현
	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};