#include "Player.h"
#include "Enemy.h"

void Player::AttackedBy(int damage)
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

void Player::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return; // 풀피인데 사용이 된다고 피드백이 있을때만 반환
	}

	// 아이템 사용 갯수를 1 뺀다.

	HP += heal;

}
