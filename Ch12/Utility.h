#pragma once

#include <random>
#include <Windows.h>
#include <tchar.h>

// static : Ŭ���� ��ü ���� �Լ� ȣ��

class RandomUtil
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil
{
public:
	static void GotoXY(int x, int y);
};

class SoundUtil
{
public:
	static void PlayTitleSound1(LPCWSTR filename);
	static void PlayBGM1(LPCWSTR filename);
};