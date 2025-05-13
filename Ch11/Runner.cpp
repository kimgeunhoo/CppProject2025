#include "Runner.h"


void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed); // 1. ĳ������ �ִ� �ӵ� ����
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)			   // 2. �̵��Ѵ�.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;					// 3. ���¸� �׷��ش�
}


void Runner::Run()
{
	// maxSpeed ���� �Լ�
	SetMaxSpeed();		// ���� �� �� �ִ� �Լ� (virtual)
	DrawMoveDistance(); // ���� �� �� ���� �Լ�
	SetShape();			// ���� �� �� �ִ� �Լ�
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
		cout << "�ּ� �ӵ��� 1 �����߽��ϴ�" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(1);
		cout << "�ִ� �ӵ��� 1 �����߽��ϴ�" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "���� ������ �����ϴ�." << endl;
	}

}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "�ּ� �ӵ��� "<< amount <<" �����߽��ϴ�" << endl;

	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "�ִ� �ӵ��� " << amount << " �����߽��ϴ�" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "���� ������ �����ϴ�." << endl;
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
	run = 0;		// ��� ���ڰ� 0���� ����
	isEnd = false;  // ��� �Ѱ��� x


}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 2;	// ������, ��ų �̸�: ȿ��: �÷��̾��� �ִ� �ӵ��� 1 ���� �����ִ� ��ų
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
	cout << "���� ����" << endl;
	cout << "�ּ� �ӵ� : " << minSpeed << "�ִ� �ӵ� : " << maxSpeed << endl;
	cout << "���� �ݾ� : " << money << endl;
}

void Enemy::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1;	// ������, ��ų �̸�: ȿ��: �÷��̾��� �ִ� �ӵ��� 1 ���� �����ִ� ��ų
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
