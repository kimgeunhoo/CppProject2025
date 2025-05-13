#pragma once

#include "Common.h"
#include "Enemy.h"
#include "Player.h"
// Player, Enemy

struct GameManager
{
	Enemy currentEnemy; // enemy 복사해서 사용한다. 여러마리라면 배열?
	Player player;
	TurnSystem currentTurnState;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}

	// 다른 게임 로직들을 통합한 기능
	void GameLoop();


	void Battle();

	void Animation();

	// 플레이어의 행동
	
	void PlayerTurn();

	// 몬스터의 행동

	void EnemyTurn();
};
