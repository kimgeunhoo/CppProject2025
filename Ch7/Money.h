#pragma once

/*
	Player Ŭ���� �ȿ��� ���Ǵ� Money
	�÷��̾�� ���� xx�Ѵ�.

*/

class GameMoney 
{
public:
	void Use();
	void Add();
};

class Gold
{
public:
	void Use();
	void Add();
};

// �������� �����Ѵ�.
// player.Use();

class Money
{
private:
	GameMoney gameMoney;
	Gold	  gold;

public:
	void Add();
	void Use();
	
};

