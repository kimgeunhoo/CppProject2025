/*

*/

#include "SoundUtil.h"


// Winmm.lib : Window Multi Media Library

int main()
{
	cout << "������� �ִ� ��" << endl;

	// visual studio Audio File ��� ���
	// Windows.h PlaySound �Լ� ����غ���

	// SND_SYNC  : ���� ������ ���� ����ǰ� �� �Ŀ� �Ʒ� �ڵ带 �����Ѵ�.
	// SND_ASYNC : �Ʒ� �ڵ�� ������ �����Ѵ�.
	SoundUtil::PlayBGM1(_T("sound.wav"));

	//bool isPlay = PlaySound(_T("sound.wav"), NULL, SND_ASYNC); // �Ҹ��� ��µǰ� �ִٸ� "True"

	cout << "�Ҹ� ���" << endl;

	while (true)
	{

	}
}
