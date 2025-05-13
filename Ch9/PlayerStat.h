#pragma once

#include "Weapon.h"

/*
	플레이어 스탯
	최종 데미지가 weapon과 조합된다.
*/

class PlayerStat
{
protected:
	int str;
	int dex;
	int intelP;
	int luck;

public:
	PlayerStat() {}
	PlayerStat(int str, int dex, int intelP, int luck): str(str), dex(dex), intelP(intelP), luck(luck){}

public:
	void CalculateFinalATK(int str, int dex, int intelP, int luck);
};

