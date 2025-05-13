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

void Runner::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(1);
		cout << "최소 속도가 1 증가했습니다" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(1);
		cout << "최대 속도가 1 증가했습니다" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "사용된 스탯이 없습니다." << endl;
	}

}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "최소 속도가 "<< amount <<" 증가했습니다" << endl;

	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "최대 속도가 " << amount << " 증가했습니다" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "사용된 스탯이 없습니다." << endl;
	}

}

void Runner::SetMin(int value)
{
	if (maxSpeed < value) {
		value = maxSpeed;
	}
	else {
		minSpeed += value;
	}
	
}

void Runner::SetMax(int value)
{
	if (10 < value) {
		value = 10;
		maxSpeed = value;
	}
	else {
		maxSpeed += value;
	}
	
}

void Runner::Initialize()
{
	run = 0;		// 모든 주자가 0에서 시작
	isEnd = false;  // 우승 한것이 x


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

void Player::ShowPlayerGameInfo()
{
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << "보유 금액 : " << money << endl;
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
