#include "Monster.h"

void Monster::Attack()
{
	CalculateFinalATK();
	cout << "���� ���ݷ�: " << finalATK << endl;
}

void Monster::CalculateFinalATK()
{
	// ���� * �⺻ ���ݷ�
	finalATK = LV * defaultATK;
}

void Slime::Attack() // Monster Attack ����. ���� �����ϰڴ�.
{
	// Monster ����� ������ �״�� ����ϰ� �ʹ�.
	Monster::Attack();

	cout << "�������� Ư�� ����� �����մϴ�." << endl;
}

void Orc::Attack()
{
	Monster::Attack();

	cout << "��ũ�� Ư�� ����� �����մϴ�." << endl;
}
