#include "Skill.h"
#include "Money.h"
#include "Charactor.h"
#include "Enemy.h"
// A ������ player. <- (��ų), (��ȭ)
// B ������			  Currency, Money


class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:

};

class ShopManager
{

};

class MoveManager 
{

};

class BattleManager 
{
private:
	Player player;
	Enemy enemy;
	
	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}
	void PlayerTurn() 
	{

	}
public:
	void Battle()
	{
		while (true) 
		{
			PlayerTurn();
			EnemyTurn();

			if (isEnd) {
				break;
			}
		}
	}
};

int main() 
{
	BattleManager battle;

	battle.Battle();

}