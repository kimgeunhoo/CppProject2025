#pragma once

/*
	A, B 개발자.
	A (상급자) - B(신입)
	A 캐릭터. B. 스킬

*/

/*
	스킬을 만들어야 한다.
	객체 : 마나, 스탯, 이펙트
	스킬.Use함수. skill.Use()

	A개발자. Skill skill; skill.Use();

	skill. mana stat effect

	C개발자. stat mana effect
*/

/*
	정보 은닉. 외부에서 모르는 정보는 숨겨라
	캡슐화 : 기능을 구현할 때 세부 내용을 공개할 필요 없이 사용할 함수만 공개하는 것.

*/
#include <iostream>

using namespace std;

class Mana
{
public:
	void Use();
};

class Stat 
{
public:
	void Use();
};

class Effect 
{
public:
	void Use();
};

class Skill
{
private:	// private 선언한 타입들은 외부에서 사용할 때 직접 사용하지 말라.
	Mana mana;
	Stat stat;
	Effect effect;

	// manaUse- statUse- effectUse- 설명서
	void manaUse();
	void statUse();
	void effectUse();

public:


	/// <summary>
	/// 마나를 스탯을 사용 후 이펙트가 출력됩니다.
	/// </summary>
	void Use();
};

