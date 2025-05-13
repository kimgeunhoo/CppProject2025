#include "Player.h"

void Player::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Player::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			// Ư�� ��ǥ�� �̵��ϼ���
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Player::IsBattle()
{
	if (posX >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);

	// �̵� ����

	// x�� ��ǥ�� ��ǥ ��ġ���� ũ�� �̵��ؾ� �Ѵ�.
	// x�� ��ǥ�� ��ǥ ��ġ���� �۰ų� ������ ����.

	if (IsBattle()) //
	{
		posX = 5;
	}
	else
	{
		// ������ Ư���� �ൿ�� �ϴ� �Լ� ȣ��
		posX++;
	}
	ShowImage();
}

void Player::Attacked(int damage)
{
	// ������ ���� ��Ģ
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}

	// HP�� 0���� �۰ų� ������ ���Ͱ� �׾��ٴ� ����� �˷��� �Ѵ�. - Bool isDeath
}

void Player::Defence()
{
	DEF += 1;
}

void Player::UseItem(int heal)
{
	HP += heal;

	// �ִ�ü��
}
