#include "GameManager.h"

void GameManager::GameLoop()
{
	while (true)
	{
		Animation();
		Battle();

	}
}

void GameManager::Battle()
{
	// ���� UI ���
	GoToXY(50, 5);
	cout << "�÷��̾��� ����";
	GoToXY(50, 6);
	cout << "�÷��̾��� ü��: " << player.HP;
	GoToXY(50, 7);
	cout << "�÷��̾��� ���ݷ�: " << player.ATK;
	GoToXY(50, 8);
	cout << "�÷��̾��� ����: " << player.DEF;

	GoToXY(80, 5);
	cout << "���� ����";
	GoToXY(80, 6);
	cout << "���� ü��: " << currentEnemy.HP;
	GoToXY(80, 7);
	cout << "���� ���ݷ�: " << currentEnemy.ATK;
	GoToXY(80, 8);
	cout << "���� ����: " << currentEnemy.DEF;

	// �÷��̾��� ���� ���

	// �÷��̾ ���� ����Ѵ� -> ���Ͱ� ���� �����Ѵ�
	if (currentTurnState == PLAYERTURN)
	{
		PlayerTurn();
	}
	else if (currentTurnState == ENEMYTURN) 
	{
		EnemyTurn();
	}
	else if (currentTurnState == GAMECLEAR) 
	{
		// GameClear ������ �� ����
	}
	else if (currentTurnState == GAMEEND) 
	{
		// GameEnd ������ �� ����
	}

}

void GameManager::Animation()
{
	system("cls");
	player.SetBattleImage(PlayerIdle);
	currentEnemy.SetBattleImage(SlimeIdle);
	Sleep(500);
	system("cls");
	player.SetBattleImage(PlayerMove1);
	Sleep(150);
	player.SetBattleImage(PlayerMove2);
	currentEnemy.SetBattleImage(SlimeMove);
	Sleep(500);
}

void GameManager::PlayerTurn()
{
	GoToXY(0, 17);
	cout << "���� �÷��̾��� ��" << endl;
	cout << "1_�����Ѵ�. 2_����Ѵ�. 3_�������� ����Ѵ�." << endl;

	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: currentEnemy.Attacked(player.ATK); break;
	case 2: player.Defence(); break;
	case 3: player.UseItem(10); break;
	default: break;
	}

	currentTurnState = ENEMYTURN;
}

void GameManager::EnemyTurn()
{
	GoToXY(0, 17);
	cout << "���� ��" << endl;

	int inputRand = 0;

	player.Attacked(currentEnemy.ATK);
	GoToXY(0, 18);
	cout << "Ű�� ������ �÷��̾� ���� ����˴ϴ�." << endl;
	_getch();

	currentTurnState = PLAYERTURN;
}
