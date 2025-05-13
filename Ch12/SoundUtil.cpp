#include "SoundUtil.h"

void SoundUtil::PlayTitleSound1(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil::PlayBGM1(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC);
}
