#include "Runner2.h"

void Runner2::Run()
{
	// maxSpeed ���� �Լ�
	run += RandomUtil::GetRandomInt(maxSpeed);

	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
}

bool Runner2::CheckEndLine(int length)
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
	Runner2::Run();
	cout << "~~~";
}

void Enemy::Run()
{

}
