/*
	�ҿ����ũ ��Ÿ���� ���� ���� ����

	ĳ���� ������� ����, ù ��� ����

	���⿡�� ����, ����, ���� ���Ⱑ �����ϰ�,
	�׿� ���� ���� ���� ���ݷ�, �ӵ�, ���԰� ������.
	��ȭ Sys�� ���� ����� ���� �ٸ� ��ȭ���� ����Ѵ�.

	������ ���¿� ���� �������� �����Ѵ�. ������ ���� �ٸ� ����ƺ� ��ġ�Ͽ� ����
*/
#include "Common.h"
#include "Player.h"
#include "Weapon.h"
#include "Console.h"

int main()
{
	
	int str = 0;
	int telent = 0;
	int intel = 0;
	int mystic = 0;
	int input = 0;
	int weaponInput = 0;
	Weapon UserWeapon;
	PlayerOrigin playerOrigin = static_cast<PlayerOrigin>(input);
	//PlayerOrigin origin;
	cout << "���� ���� ������" << endl;
	Player player;
	player.UserOrigin(playerOrigin, input, str, telent, intel, mystic);
	while (true) {
		//int input, int& str, int& telent, int& intel, int& mystic
		//Player player = { static_cast<PlayerOrigin>(input - 1), str, telent, intel, mystic };
		/*Weapon defaultWeapon;
		defaultWeapon.ShowWeaponStatus();*/
		
		system("cls");
		//Console::GoToXY(0, 20);
		cout << "����  str: " << str << " telent: " << telent << " intel: " << intel << " mystic: " << mystic << endl;
		
		player.SelectWeapon(weaponInput, UserWeapon);
		
		cout << "���� ���� ����: "; UserWeapon.ShowWeaponStatus();
		cout << "����ҷ��� �ƹ� Ű�� �����ּ���..." << endl;;
		_getch();

		TotalStat totalStat;
		totalStat.TotalATK(player, UserWeapon);
		
	}


}