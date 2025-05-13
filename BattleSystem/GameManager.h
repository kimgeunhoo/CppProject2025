#pragma once

#include "Common.h"
#include "Enemy.h"
#include "Player.h"
// Player, Enemy

struct GameManager
{
	Enemy currentEnemy; // enemy �����ؼ� ����Ѵ�. ����������� �迭?
	Player player;
	TurnSystem currentTurnState;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}

	// �ٸ� ���� �������� ������ ���
	void GameLoop();


	void Battle();

	void Animation();

	// �÷��̾��� �ൿ
	
	void PlayerTurn();

	// ������ �ൿ

	void EnemyTurn();
};
