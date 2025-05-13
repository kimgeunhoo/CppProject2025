#include "Player.h"


void Player::UserOrigin(PlayerOrigin player, int input, int& str, int& telent, int& intel, int& mystic)
{
	cout << "��� ������ �����ϼ���. 1_���, 2_����, 3_������, 4_�������� : ";
	cin >> input;
	switch (input)
	{
		case 1:
			playerOrigin = KNIGHT;
			str = 30;
			telent = 20;
			intel = 8;
			mystic = 2;
			break;
		case 2:
			playerOrigin = CHIEF;
			str = 15;
			telent = 30;
			intel = 15;
			mystic = 10;
			break;
		case 3:
			playerOrigin = MAGICIAN;
			str = 7;
			telent = 15;
			intel = 30;
			mystic = 8;
			break;
		case 4:
			playerOrigin = PENNILESS;
			str = 15;
			telent = 10;
			intel = 15;
			mystic = 10;
			break;
		default:
			cout << "�߸��� �Է��Դϴ�" << endl;
			UserOrigin(player, input, str, telent, intel, mystic);
			break;
	}

	cout << "���� ������ ����: " << Player::SwapStatus() << endl;
	cout << "����ҷ��� �ƹ� Ű�� �����ּ���...";
	_getch();
}

string Player::ShowStat()
{
	return string();
}

string Player::SwapStatus()
{
	switch (playerOrigin)
	{
	case 1:
		return "Knight";
	case 2:
		return "Chief";
	case 3:
		return "Magician";
	case 4:
		return "Penniless";
	}
}

void Player::SelectWeapon(int& weaponInput, Weapon& UserWeapon)
{
	while (true)
	{
		Weapon longSword = { "1_longSword", CUT, 76, MIDDLE, 0, STR };
		longSword.ShowWeaponStatus();
		Weapon shortSword = { "2_shortSword", CUT, 62, MIDDLE, 0, STR };
		shortSword.ShowWeaponStatus();
		Weapon dagger = { "3_dagger", CUT, 51, SMALL, 0, TELENT };
		dagger.ShowWeaponStatus();
		Weapon grateSword = { "4_grateSword", CUT, 102, BIG, 0, STR };
		grateSword.ShowWeaponStatus();
		Weapon morningStar = { "5_morningStar", HIT, 78, MIDDLE, 0, STR };
		morningStar.ShowWeaponStatus();
		Weapon leapier = { "6_leapier", THROUGH, 67, MIDDLE, 0, TELENT };
		leapier.ShowWeaponStatus();
		cout << "���⸦ ������ �ּ���." << endl;
		cin >> weaponInput;
		switch (weaponInput) {
		case 1:
			UserWeapon = longSword;
			break;
		case 2:
			UserWeapon = shortSword;
			break;
		case 3:
			UserWeapon = dagger;
			break;
		case 4:
			UserWeapon = grateSword;
			break;
		case 5:
			UserWeapon = morningStar;
			break;
		case 6:
			UserWeapon = leapier;
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			continue;
		}
		break;
	}
}

void TotalStat::TotalATK(Player &player, Weapon &equipWeapon)
{
	int playerATK = 0;
	int playerStr = player.GetStr();
	int playerTel = player.GetTelent();
	int playerInt = player.GetIntel();
	int playerMys = player.GetMystic();
	Stat WeaponStat = equipWeapon.GetStat();
	int weaponATK = equipWeapon.GetATK();

	switch (WeaponStat) {
	case STR:
		playerATK = playerStr * 1 + weaponATK;
	case TELENT:
		playerATK = playerTel * 1 + weaponATK;
	case INTEL:
		playerATK = playerInt * 1 + weaponATK;
	case MYSTIC:
		playerATK = playerMys * 1 + weaponATK;
	}

	cout << "������ ���� ������ : " << playerATK << endl;;
	cout << "����ҷ��� �ƹ� Ű�� �����ּ���..." << endl;;
	_getch();

}
