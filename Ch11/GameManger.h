#pragma once

// main() ���α׷� ���� -> ���� ���� -> ���� ����

#include "Runner.h"
#include <conio.h>

class GameManager
{
private:
	Player* player;

	void ShowTitle();
	void ShowPhase();
	void GamePhase();

public:
	GameManager() 
	{
		player = new Player();
	}
	void Play();


};

