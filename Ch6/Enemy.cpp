#include "Enemy.h"
#include "Player.h"

void Enemy::AttackedBy(int damage)
{
	if (damage < 0)
	{
		cout << "���ط��� ������ �� �� �����ϴ�." << endl;
	}

	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}

}

void Enemy::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
	}
	// ������ ��� ������ 1 ����.

	HP += heal;

}
