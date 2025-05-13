#pragma once
#include <iostream>
using namespace std;

/*
	���� Ÿ��(����, ���, Ÿ��), ���� ������(���� ���� ���� Ư��) 
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

class ��հ� : Weapon
{
private:
	void Passive();

};

class ����Į���� : ��հ�
{
public:
	void ActiveSkill();


};

class �Ѽյб� : Weapon
{
private:
	void Passive();

};

class ��׽�Ÿ : �Ѽյб�
{
public:
	void ActiveSkill();

};

// ���⸶���� Ư¡

class Blacksmith
{
private:
	����Į���� weapon1;

public:
	void EnforceWeapon(Weapon& weapon);
};

