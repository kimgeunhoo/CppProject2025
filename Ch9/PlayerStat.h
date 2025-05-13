#pragma once

#include "Weapon.h"

/*
	�÷��̾� ����
	���� �������� weapon�� ���յȴ�.
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

