#include "Utility.h"

// int rand = GetRandomInt(5);
int RandomUtil::GetRandomInt(int range) // 1 ~ range ������ �� ��ȯ
{
	static std::random_device device;
	static std::mt19937 gen(device());
	std::uniform_int_distribution<> dist(1, range);
	return dist(gen);
}

// ConsoleUtil::GotoXY(3, 5)
void ConsoleUtil::GotoXY(int x, int y) // x,y ��ǥ�� Ŀ���� �̵�
{
	static COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SoundUtil::PlayTitleSound1(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil::PlayBGM1(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC);
}

