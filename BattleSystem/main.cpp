/*
	Common.h
	GoToXY();

	Player
	Enemy, Monster, Slime

	Game, Stage, Monster Manager
*/

/*
	����? Battle
	���: Player. Enemy.
	ü��, ���ݷ�, ����
	����ϴ�.( ü���� 0���� �۰ų� ���� �� )
	(ü���� �����ϴ� ���)
	������ �޾Ҵ�. ������ �Դ´�.

*/

#include "GameManager.h"

/*
	Enemy ��ü
	GameManager ��ü
*/

/*
		���� � ������ �� SlimeIdle�̾�� �ϴ°�?
		���� � ������ �� Move�ΰ�?
		���� � ������ �� Battle�ΰ�?
	*/

int main() 
{

	Enemy Slime(100, 10, 1, "������", SlimeIdle, IDLE); // ���� ��ü�� ����.
	Player player(100, 10, 1, "���谡", PlayerIdle, IDLE); // �÷��̾� ��ü ����.
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
