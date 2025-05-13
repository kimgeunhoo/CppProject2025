#pragma once

#include "Common.h"


class Monster
{

};

// ������Ʈ �����ϰ� �����ϴ� ���
// 1. �ͼ��� ������ �����´�.
// 2. �ϳ��� �����͸� �����ؼ� ��ü�� ǥ���Ѵ�.






// Has-A

/*
	virtual Ű���带 ���� �߰��ϰ�, ���� ����� ���ϴ°�?
	�ڵ带 ����ϴ� ��ü�� ����� �߰����� Ư¡�� ������. virtual, �Լ� �������̵�
	��� ������ ����ٴ� ����� �����ϴ�.
*/


class Attacker 
{
public:
	void Attack();

};

class Flyer
{

};

class Unit // ��� ������ ���� �����Ѱ�? ������ ���� ���� �ִ�
{
	Attacker* attacker;
	Flyer* flyer;

	bool isAttackable;

public:
	// �ΰ��� ����
	Unit() 
	{
		attacker = new Attacker();
	}
	Unit(bool attackable)
	{
		isAttackable = attackable;
		if (attackable)
		{
			attacker = new Attacker();
		}
	}

public:

	Attacker* ReturnAttacker();

	virtual void Attack(); // virtual ��� ��, ������ ������ ���� Attack ������ ��µȴ�.
	void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();
};

class Factory // �׶� ���丮 �ƴ�. �����ϴ� �ǹ�
{

};

class Nexus : public Factory
{

};

class GateWay : public Factory
{

};

class Probe : public Unit// ���κ�� ����?
{
public:
	Probe(bool attackable) : Unit(attackable) {}

	void Attack();
	void UseSkill();
};

class Zealot : public Unit
{
public:
	void Attack();
	void UseSkill();
};

class Dragoon : public Unit
{
public:
	void Attack();
	void UseSkill();
};
