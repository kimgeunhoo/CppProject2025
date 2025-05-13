#pragma once

#include <iostream>
using namespace std;

#include <Windows.h>
#include <tchar.h>


class SoundUtil
{
public:
	static void PlayTitleSound1(LPCWSTR filename);
	static void PlayBGM1(LPCWSTR filename);


};