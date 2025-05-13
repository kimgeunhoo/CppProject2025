#include "GameManger.h"

void GameManager::ShowTitle()
{
	// 타이틀을 먼저 보여주는 코드 실행
	ConsoleUtil::GotoXY(30,0);
	cout << "제목 설정" << endl;
	//SoundUtil::PlayTitleSound1(_T("sound.wav"));	// 사운드 출력이 끝날 때 까지 다음 코드로 넘어가지 않는다
}

void GameManager::ShowPhase()
{
	// 플레이어의 강화 시스템 필요
	system("cls");
	cout << "상점에 진입했습니다." << endl;

	int input = 0;
	cout << "행동을 선택하세요" << endl;
	cout << "1_minSpeed가 1만큼 증가합니다." << endl;
	cout << "2_maxSpeed가 1만큼 증가합니다." << endl;
	cout << "3_게임이 시작합니다." << endl;
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
		cout << "게임이 시작합니다" << endl;
	}
}

void GameManager::GamePhase()
{
	Runner* runB = new Enemy("BBB");
	Runner* runC = new Enemy();
	Runner* runD = new Enemy("DDD");
	//int runA = 0;	// 1번 주자의 현재 이동 거리
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


		Sleep(500);  // 1초마다 게임을 업데이트
		system("cls"); // 화면 지우기

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
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A가 1등을 하였습니다." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 하였습니다." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C가 1등을 하였습니다." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 하였습니다." << endl;
	}

	cout << "상점 페이즈를 진행하기 위해 버튼을 입력해주세요." << endl;
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
