#include "Runner.h"

void Runner::Run()
{
	// maxSpeed 제어 함수
	run += RandomUtil::GetRandomInt(maxSpeed);
	
	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else {
		isEnd = false;
	}
	return isEnd;
}

void Player::Run()
{
	Runner::Run();
	cout << "~~~" << endl;
}

void Enemy::Run()
{
}
