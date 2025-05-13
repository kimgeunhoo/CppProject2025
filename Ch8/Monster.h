#pragma once

#include "Common.h"


class Monster
{

};

// 프로젝트 간단하게 시작하는 방법
// 1. 익숙한 게임을 가져온다.
// 2. 하나의 데이터를 선택해서 객체로 표현한다.






// Has-A

/*
	virtual 키워드를 언제 추가하고, 언제 사용을 안하는가?
	코드를 상속하는 객체의 기능이 추가적인 특징을 가진다. virtual, 함수 오버라이딩
	모든 유닛은 멈춘다는 기능이 동일하다.
*/


class Attacker 
{
public:
	void Attack();

};

class Flyer
{

};

class Unit // 모든 유닛은 공격 가능한가? 공격을 못할 수도 있다
{
	Attacker* attacker;
	Flyer* flyer;

	bool isAttackable;

public:
	// 두가지 형태
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

	virtual void Attack(); // virtual 사용 시, 각각의 유닛이 가진 Attack 내용이 출력된다.
	void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();
};

class Factory // 테란 팩토리 아님. 제작하는 의미
{

};

class Nexus : public Factory
{

};

class GateWay : public Factory
{

};

class Probe : public Unit// 프로브는 유닛?
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
