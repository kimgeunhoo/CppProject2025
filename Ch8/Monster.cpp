#include "Monster.h"

void Attacker::Attack()
{
	cout << "�����Ѵ�" << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}

void Unit::Attack()
{
	cout << "������ �����Ѵ�" << endl;
	cout << endl;
}

void Unit::UseSkill()
{
}

void Probe::Attack()
{
	cout << "���� Ÿ���� ����" << endl;
	cout << endl;
}

void Probe::UseSkill()
{
	cout << "�ǹ� ��ȯ" << endl;
	cout << endl;
}

void Zealot::Attack()
{
	cout << "���� Ÿ���� ����" << endl;
	cout << "���� �ι� ����" << endl;
	cout << endl;
}

void Zealot::UseSkill()
{
	cout << "����" << endl;
	cout << endl;
}

void Dragoon::Attack()
{
	cout << "���� Ÿ���� ����" << endl;
	cout << "���� Ȯ���� ������" << endl;
	cout << endl;
}

void Dragoon::UseSkill()
{
	cout << "������ ��ȭ" << endl;
	cout << endl;
}
