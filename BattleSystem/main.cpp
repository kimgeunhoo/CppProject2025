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

#include "GameManager.h"

/*
	Enemy 객체
	GameManager 객체
*/

/*
		적이 어떤 조건일 때 SlimeIdle이어야 하는가?
		적이 어떤 조건일 때 Move인가?
		적이 어떤 조건일 때 Battle인가?
	*/

int main() 
{

	Enemy Slime(100, 10, 1, "슬라임", SlimeIdle, IDLE); // 몬스터 객체를 생성.
	Player player(100, 10, 1, "모험가", PlayerIdle, IDLE); // 플레이어 객체 생성.
	GameManager Game(Slime, player);
	
	Game.GameLoop();

	/*while (true)
	{
		Game.player.SetBattleImage(PlayerIdle);
		Game.currentEnemy.SetBattleImage(SlimeIdle);
		Sleep(500);
		system("cls");
		Game.player.SetBattleImage(PlayerMove1);
		Sleep(150);
		Game.player.SetBattleImage(PlayerMove2);
		Game.currentEnemy.SetBattleImage(SlimeMove);
		Sleep(500);
		system("cls");
		
	}*/
}
