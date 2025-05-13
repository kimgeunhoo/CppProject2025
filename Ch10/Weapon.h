#pragma once

#include "Common.h"

class Weapon
{
private: // ��� ����, ��ӹ��� �ڽĵ� ��� �Ұ� 
	string name;
	int lv;
	int baseATK;
	int weight;

protected: // ��ӹ��� �ڽ��� �� ����� �����޾Ƽ� ��밡��
	int DoUpgrade();
	int FinalATK;
public: // ������ public
	Weapon(string name, int base, int weight) :
		name(name), lv(1), baseATK(base), weight(weight) {}
	Weapon(string name, int lv, int base, int weight) : 
		name(name), lv(lv), baseATK(base), weight(weight) {}
public: // ��� �Լ� public
	
	void ShowInfo();
	virtual void Attack();
	virtual void Upgrade();
};

class Spear : public Weapon
{
private:
	int specialAtk;

public:
	Spear(string name, int lv, int base, int weight, int specialAtk) : 
		Weapon(name, lv, base, weight), specialAtk(specialAtk) {}

public:
	void Attack();
	void Upgrade() override;
};

class Sword : public Weapon
{

public:
	Sword(string name, int lv, int base, int weight) :
		Weapon(name, lv, base, weight) {}

public:
	void Attack();
	void Upgrade() override;
};

class Arrow : public Weapon
{
public:
	Arrow(string name, int lv, int base, int weight) :
		Weapon(name, lv, base, weight) {}

public:
	void Attack();
	void Upgrade() override;
};


