#include "Player.h"

void Player::ShowInfo()
{
	cout << endl;
	cout << "[" << xPos << "," << yPos << "]" << "     ���� �̸�:" << name << endl;
}

void Player::ChangePos(int x, int y)
{
	Player::xPos = x;
	Player::yPos = y;
}

void Player::ShowPlayerInfo()
{
	cout << " ���� �̸� : " << name << " ���� : " << ReturnByTypeName()
		<< " ���� : " << level << " ����ġ : " << exp << endl;
}

void Player::PlayerStat()
{
	cout << name << "�� ���� :" << name << endl;
}

string Player::ReturnByTypeName()
{
	switch (type)
	{
	case WARRIOR: return "WARRIOR";
	case ARCHOR: return "ARCHOR";
	case MAGICIAN: return "MAGICIAN";
	case CHIEF: return "CHIEF";
	default: return "error";
	}
}
