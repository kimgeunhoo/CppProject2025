#pragma once

/*
	A, B ������.
	A (�����) - B(����)
	A ĳ����. B. ��ų

*/

/*
	��ų�� ������ �Ѵ�.
	��ü : ����, ����, ����Ʈ
	��ų.Use�Լ�. skill.Use()

	A������. Skill skill; skill.Use();

	skill. mana stat effect

	C������. stat mana effect
*/

/*
	���� ����. �ܺο��� �𸣴� ������ ���ܶ�
	ĸ��ȭ : ����� ������ �� ���� ������ ������ �ʿ� ���� ����� �Լ��� �����ϴ� ��.

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
private:	// private ������ Ÿ�Ե��� �ܺο��� ����� �� ���� ������� ����.
	Mana mana;
	Stat stat;
	Effect effect;

	// manaUse- statUse- effectUse- ����
	void manaUse();
	void statUse();
	void effectUse();

public:


	/// <summary>
	/// ������ ������ ��� �� ����Ʈ�� ��µ˴ϴ�.
	/// </summary>
	void Use();
};

