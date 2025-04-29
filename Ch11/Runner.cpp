#include "Runner.h"

void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed); // 1. 캐릭터의 최대 속도 설정
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)			   // 2. 이동한다.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;					// 3. 형태를 그려준다
}


void Runner::Run()
{
	// maxSpeed 제어 함수
	SetMaxSpeed();		// 변경 할 수 있는 함수 (virtual)
	DrawMoveDistance(); // 변경 할 수 없는 함수
	SetShape();			// 변경 할 수 있는 함수
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

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 2;	// 아이콘, 스킬 이름: 효과: 플레이어의 최대 속도를 1 증가 시켜주는 스킬
	run += RandomUtil::GetRandomInt(applyMaxSpeed);


}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);

	if (percent >= 50)
	{
		cout << "~" << symbol << endl;
	}
	else {
		cout << symbol << endl;
	}
	
}

void Enemy::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1;	// 아이콘, 스킬 이름: 효과: 플레이어의 최대 속도를 1 증가 시켜주는 스킬
	run += RandomUtil::GetRandomInt(applyMaxSpeed);
}

void Enemy::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);

	if (percent >= 70)
	{
		cout << "~" << symbol << endl;
	}
	else {
		cout << symbol << endl;
	}
}
