/*
	Common.h
	GoToXY();

	Player
	Enemy, Monster, Slime

	Game, Stage, Monster Manager
*/

/*
	전투? Battle
	대상: Player. Enemy.
	체력, 공격력, 방어력
	사망하다.( 체력이 0보다 작거나 같을 때 )
	(체력을 조작하는 기능)
	공격을 받았다. 포션을 먹는다.

*/

#include "Enemy.h"

int main() 
{
	Enemy Slime(100, 10, 1, "슬라임", SlimeIdle); // 몬스터 객체를 생성.

	int slimeX = 30;
	int slimeY = 5;

	//_getch(); // 키보드의 아무 버튼을 누르면 다음으로 진행됩니다.

	/*
		적이 어떤 조건일 때 SlimeIdle이어야 하는가?
		적이 어떤 조건일 때 Move인가?
		적이 어떤 조건일 때 Battle인가?
	*/

	while (true)
	{
		Slime.SetBattleImage(SlimeIdle, slimeX, slimeY);
		Sleep(500);
		system("cls");
		Slime.SetBattleImage(SlimeMove, slimeX, slimeY);
		Sleep(500);
		system("cls");

		
	}
}
