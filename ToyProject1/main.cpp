/*
	목표: cpp 게임 화면 구성하기
	복습: Windows.h GotoXY 재구현
	입출력 : cpp 방식으로 입출력하기
	이론 : namespace 응용해보기
*/

/*
	이름 공간 사용 할 때의 장점
	1. 다른 두 프로젝트를 copy paste 합칠 때 발생하는 문제를 최소화 할 수 있다.
	2. 이름 공간에 쓰여진 이름을 통해서 코드를 분류 할 수 있다.

*/
#include <iostream>
#include <Windows.h> // 커서의 위치를 옮기는 함수 SetCursorPosition
#include <conio.h>

namespace ConsoleUtils 
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main() 
{
	// 예제 1. 10, 10좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "플레이어의 정보";
	system("cls");
	// 예제 2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한줄 아래에 출력
	// 입력값을 정수로 받아서, 1을 받으면 플레이어 이름을 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	char name[10];

	while (true) 
	{
		int inputNumber = 0;
		
		std::cout << "1_사용자의 이름을 변경할 수 있다. 2_플레이어의 정보를 화면에 출력한다. " << std::endl;
		std::cin >> inputNumber; // 언제 주소 연산자 사용하고 사용 안 하는데 이 부분이 이해가 안된다.
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어의 정보";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름: " << name << std::endl;
			_getch();
		}
		else 
		{

		}
		system("cls");
	}
}

