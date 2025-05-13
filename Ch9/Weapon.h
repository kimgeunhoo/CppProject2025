#pragma once
#include <iostream>
using namespace std;

/*
	공격 타입(참격, 찌르기, 타격), 무기 사이즈(소형 중형 대형 특대) 
*/
enum ATtype {
	CUT,
	PIERCE,
	HIT
};

enum WeaponType {
	SMALL,
	MIDDLE,
	LARGE,
	EXTRALARGE
};

class Weapon
{
private:
	string name;
	int defaultATK;
	ATtype atType;
	WeaponType wpType;

public:
	Weapon() {}
	Weapon(int defaultATK, ATtype atType, WeaponType wpType): 
		defaultATK(defaultATK), atType(atType), wpType(wpType) {}

public:
	virtual void ShowInfo();

};

class 양손검 : Weapon
{
private:
	void Passive();

};

class 엑스칼리버 : 양손검
{
public:
	void ActiveSkill();


};

class 한손둔기 : Weapon
{
private:
	void Passive();

};

class 모닝스타 : 한손둔기
{
public:
	void ActiveSkill();

};

// 무기마다의 특징

class Blacksmith
{
private:
	엑스칼리버 weapon1;

public:
	void EnforceWeapon(Weapon& weapon);
};

