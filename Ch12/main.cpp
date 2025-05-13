/*

*/

#include "SoundUtil.h"


// Winmm.lib : Window Multi Media Library

int main()
{
	cout << "배경음악 넣는 법" << endl;

	// visual studio Audio File 출력 방법
	// Windows.h PlaySound 함수 사용해보기

	// SND_SYNC  : 사운드 파일이 전부 실행되고 난 후에 아래 코드를 실행한다.
	// SND_ASYNC : 아래 코드와 별개로 실행한다.
	SoundUtil::PlayBGM1(_T("sound.wav"));

	//bool isPlay = PlaySound(_T("sound.wav"), NULL, SND_ASYNC); // 소리가 출력되고 있다면 "True"

	cout << "소리 출력" << endl;

	while (true)
	{

	}
}
