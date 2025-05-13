#pragma once

#include "Common.h"

/*
	���⿡�� ����, ����, ���� ���Ⱑ �����ϰ�,
	�׿� ���� ���� ���� ���ݷ�, �ӵ�, ���԰� ������.
	��ȭ Sys�� ���� ����� ���� �ٸ� ��ȭ���� ����Ѵ�.
*/

enum AttackType
{
	CUT, // ����
	THROUGH, // ����
	HIT, // Ÿ��
	NONE // �Ӽ� x
};

enum Size
{
	SMALL,	// ����
	MIDDLE, // ����
	BIG,	// ����
	SPECIAL // Ư��
};

enum Stat
{
	STR,	// �ٷ�
	TELENT, // �ⷮ
	INTEL,	// ����
	MYSTIC,	// �ź�
};

class Weapon
{
private:
	string name;
	AttackType ATT;
	int weaponATK;
	Size size;
	int inhance;
	Stat stat;
	//double ATKSpeed;
public:
	Weapon() : name(), ATT(NONE), weaponATK(0), size(SPECIAL), inhance(0), stat(STR) {}
	Weapon(string name, AttackType ATT, int weaponATK, Size size, int inhance, Stat stat) 
		: name(name), ATT(ATT), weaponATK(weaponATK), size(size), inhance(inhance), stat(stat) {}

	void ShowWeaponStatus();
	
	string ShowATKType();
	string WeaponSize();

	string GetName() const { return name; }
	AttackType GetATT() const { return ATT; }
	int GetATK() const { return weaponATK; }
	Size GetSize() const { return size; }
	int GetInhance() const { return inhance; }
	Stat GetStat() const { return stat; }
};
//PlayerOrigin GetOrigin() const { return playerOrigin; }
//	int GetStr() const { return str; }
//	int GetTelent() const { return telent; }
//	int GetIntel() const { return intel; }
//	int GetMystic() const { return mystic; }
