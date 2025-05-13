#include "Monster.h"

void Attacker::Attack()
{
	cout << "공격한다" << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}

void Unit::Attack()
{
	cout << "유닛이 공격한다" << endl;
	cout << endl;
}

void Unit::UseSkill()
{
}

void Probe::Attack()
{
	cout << "소형 타입의 공격" << endl;
	cout << endl;
}

void Probe::UseSkill()
{
	cout << "건물 소환" << endl;
	cout << endl;
}

void Zealot::Attack()
{
	cout << "소형 타입의 공격" << endl;
	cout << "연속 두번 공격" << endl;
	cout << endl;
}

void Zealot::UseSkill()
{
	cout << "돌진" << endl;
	cout << endl;
}

void Dragoon::Attack()
{
	cout << "중형 타입의 공격" << endl;
	cout << "일정 확률로 빗나감" << endl;
	cout << endl;
}

void Dragoon::UseSkill()
{
	cout << "양자포 강화" << endl;
	cout << endl;
}
