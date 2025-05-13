#pragma once

#include <iostream>
using namespace std;

// 몬스터 - 몬스터 조작, 관리
// 몬스터는 공격을 한다
// 몬스터의 공격 규칙
// 최종 공격력 - 

/*
	오버라이드(override)
	
	Monster::Attack();
	Slime::Attack();
	Slime 입장, 몬스터 Attack, Slime Attack 어떤 Attack 사용해야 하는가?
	부모의 함수를 대체하여 자식함수 사용.

*/

/*
	virtual, override

	virtual : 코드가 실제(존재)하지 않는다. 다른 곳에서 이 함수를 찾아 사용해라
	override : 같은 이름의 함수를 자식에서 선언하면 부모의 코드가 숨겨진다.

	슬라임, 고블린, 오크, 
	Monster.Attack();
	Slime.Attack();
	Goblin,Attack();
	Orc.Attack();

	확장성 문제. 슬라임, 오크, 고블린... 새로 추가할 몬스터의 개성을 추가할 수 없다.

	override 키워드? 사람이 하는 실수를 보완해주는 키워드.
	함수의 이름이 같아야 한다.

*/

class ElementTYPE // enum도 가능함
{

};

class Monster	// 몬스터 is 속성? x 몬스터 has 속성? o
{
protected:
	int LV;
	int defaultATK;
	int finalATK;
	ElementTYPE type; // 

public:
	Monster() {}
	Monster(int lv, int defaultATK) : LV(lv), defaultATK(defaultATK) {}

public:
	virtual void Attack();

	void CalculateFinalATK();
};

class Slime : public Monster
{

public:
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;
};

class Orc : public Monster
{

public:
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;
};


