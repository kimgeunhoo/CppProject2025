#pragma once
#include "Common.h"
#include "Weapon.h"

enum PlayerOrigin 
{
	KNIGHT=1,
	CHIEF,
	MAGICIAN,
	PENNILESS
};

class Player
{
private:
	PlayerOrigin playerOrigin;
	int str;
	int telent;
	int intel;
	int mystic;
public:
	Player() : playerOrigin(PENNILESS), str(10), telent(10), intel(10), mystic(10) {}
	Player(PlayerOrigin playerOrigin, int str, int telent, int intel, int mystic) : playerOrigin(playerOrigin), str(str), telent(telent), intel(intel), mystic(mystic) {}

	void UserOrigin(PlayerOrigin player, int input, int& str, int& telent, int& intel, int& mystic);
	string ShowStat();
	string SwapStatus();
	void SelectWeapon(int& weaponInput, Weapon& UserWeapon);

	PlayerOrigin GetOrigin() const { return playerOrigin; }
	int GetStr() const { return str; }
	int GetTelent() const { return telent; }
	int GetIntel() const { return intel; }
	int GetMystic() const { return mystic; }

};

class TotalStat : public Weapon
{
protected:
	Weapon equipWeapon;
	Player player;
public:
	TotalStat() {}
	TotalStat(Player player, Weapon equipWeapon) : player(player), equipWeapon(equipWeapon) {}


	
	void TotalATK(Player &player ,Weapon &equipWeapon);
};





