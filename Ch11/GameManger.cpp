#include "GameManger.h"

void GameManager::ShowTitle()
{
	// Ÿ��Ʋ�� ���� �����ִ� �ڵ� ����
	ConsoleUtil::GotoXY(30,0);
	cout << "���� ����" << endl;
	//SoundUtil::PlayTitleSound1(_T("sound.wav"));	// ���� ����� ���� �� ���� ���� �ڵ�� �Ѿ�� �ʴ´�
}

void GameManager::ShowPhase()
{
	// �÷��̾��� ��ȭ �ý��� �ʿ�
	system("cls");
	cout << "������ �����߽��ϴ�." << endl;

	int input = 0;
	cout << "�ൿ�� �����ϼ���" << endl;
	cout << "1_minSpeed�� 1��ŭ �����մϴ�." << endl;
	cout << "2_maxSpeed�� 1��ŭ �����մϴ�." << endl;
	cout << "3_������ �����մϴ�." << endl;
	cin >> input;

	if (input == 1)
	{
		player->Upgrade(PlayerStat::MINSPEED, 1);
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 2);
	}
	else if (input == 3)
	{
		cout << "������ �����մϴ�" << endl;
	}
}

void GameManager::GamePhase()
{
	Runner* runB = new Enemy("BBB");
	Runner* runC = new Enemy();
	Runner* runD = new Enemy("DDD");
	//int runA = 0;	// 1�� ������ ���� �̵� �Ÿ�
	//int runB = 0;	
	//int runC = 0;
	//int runD = 0;

	/*int endA = false;
	int endB = false;
	int endC = false;
	int endD = false;*/
	

	string line = "==========================================================================";

	int endline = line.length();

	player->Initialize();
	runB->Initialize();
	runC->Initialize();
	runD->Initialize();

	SoundUtil::PlayBGM1(_T("sound.wav"));

	while (true)
	{


		Sleep(500);  // 1�ʸ��� ������ ������Ʈ
		system("cls"); // ȭ�� �����

		cout << line << endl;

		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		player->ShowPlayerGameInfo();

		if (player->CheckEndLine(endline)
			|| runB->CheckEndLine(endline)
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "��� ����" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A�� 1���� �Ͽ����ϴ�." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �Ͽ����ϴ�." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C�� 1���� �Ͽ����ϴ�." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �Ͽ����ϴ�." << endl;
	}

	cout << "���� ����� �����ϱ� ���� ��ư�� �Է����ּ���." << endl;
	_getch();
}

void GameManager::Play()
{
	GameManager::ShowTitle();


	while (true)
	{
		GameManager::ShowPhase();
		GameManager::GamePhase();
		// if (Escape)
	}
	
}
