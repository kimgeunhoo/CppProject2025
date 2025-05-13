#include "Player.h"
#include "Enemy.h"

void Player::AttackedBy(int damage)
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

void Player::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return; // Ǯ���ε� ����� �ȴٰ� �ǵ���� �������� ��ȯ
	}

	// ������ ��� ������ 1 ����.

	HP += heal;

}
