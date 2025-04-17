#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage(int& posX, int& posY)
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			// 특정 좌표로 이동하세요
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enemy::IsBattle(int x, int y)
{
	if (x <= 10) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(Image);

	// 이동 로직

	// x의 좌표가 목표 위치보다 크면 이동해야 한다.
	// x의 좌표가 목표 위치보다 작거나 같으면 정지.

	if (IsBattle(posX, posY)) //
	{ 
		posX = 10;
	}
	else 
	{
		// 적마다 특별한 행동을 하는 함수 호출
		posX--;
	}
	ShowImage(posX, posY);

}
