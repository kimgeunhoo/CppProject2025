#pragma once

/*
	Player 클래스 안에서 사용되는 Money
	플레이어는 돈을 xx한다.

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

// 아이템을 구입한다.
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

