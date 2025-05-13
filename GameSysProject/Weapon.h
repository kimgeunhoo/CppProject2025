#pragma once

#include "Common.h"

/*
	무기에는 소형, 중형, 대형 무기가 존재하고,
	그에 따른 무기 기초 공격력, 속도, 무게가 정해짐.
	강화 Sys는 무기 레어도에 따라 다른 강화석을 사용한다.
*/

enum AttackType
{
	CUT, // 베기
	THROUGH, // 관통
	HIT, // 타격
	NONE // 속성 x
};

enum Size
{
	SMALL,	// 소형
	MIDDLE, // 중형
	BIG,	// 대형
	SPECIAL // 특수
};

enum Stat
{
	STR,	// 근력
	TELENT, // 기량
	INTEL,	// 지능
	MYSTIC,	// 신비
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
