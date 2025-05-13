#include "Player.h"

void Player::ShowInfo()
{
	cout << endl;
	cout << "[" << xPos << "," << yPos << "]" << "     유저 이름:" << name << endl;
}

void Player::ChangePos(int x, int y)
{
	Player::xPos = x;
	Player::yPos = y;
}

void Player::ShowPlayerInfo()
{
	cout << " 유저 이름 : " << name << " 직업 : " << ReturnByTypeName()
		<< " 레벨 : " << level << " 경험치 : " << exp << endl;
}

void Player::PlayerStat()
{
	cout << name << "의 스탯 :" << name << endl;
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
