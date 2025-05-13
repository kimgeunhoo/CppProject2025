/*
	소울라이크 스타일의 유저 스펙 결정

	캐릭터 출신지를 선택, 첫 장비 결정

	무기에는 소형, 중형, 대형 무기가 존재하고,
	그에 따른 무기 기초 공격력, 속도, 무게가 정해짐.
	강화 Sys는 무기 레어도에 따라 다른 강화석을 사용한다.

	상대방의 방어력에 따라 데미지가 감소한다. 방어력이 각각 다른 허수아비를 배치하여 측정
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
	cout << "종합 스탯 측정기" << endl;
	Player player;
	player.UserOrigin(playerOrigin, input, str, telent, intel, mystic);
	while (true) {
		//int input, int& str, int& telent, int& intel, int& mystic
		//Player player = { static_cast<PlayerOrigin>(input - 1), str, telent, intel, mystic };
		/*Weapon defaultWeapon;
		defaultWeapon.ShowWeaponStatus();*/
		
		system("cls");
		//Console::GoToXY(0, 20);
		cout << "스탯  str: " << str << " telent: " << telent << " intel: " << intel << " mystic: " << mystic << endl;
		
		player.SelectWeapon(weaponInput, UserWeapon);
		
		cout << "현재 장착 무기: "; UserWeapon.ShowWeaponStatus();
		cout << "계속할려면 아무 키나 눌러주세요..." << endl;;
		_getch();

		TotalStat totalStat;
		totalStat.TotalATK(player, UserWeapon);
		
	}


}