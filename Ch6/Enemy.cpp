#include "Enemy.h"
#include "Player.h"

void Enemy::AttackedBy(int damage)
{
	if (damage < 0)
	{
		cout << "피해량이 음수가 될 수 없습니다." << endl;
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
	// 아이템 사용 갯수를 1 뺀다.

	HP += heal;

}
