// ascii art archeive

// 간단한 스토리 게임 구성 요소
// 콘솔 유틸리티 함수,
// Image 클래스
// ImageModel 객체 구조체
// Actor - Tell(), Selection()

/*
	등장 인물.
	등장 배경.
	"사건"
*/

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main() 
{
	ImageModel model;
	Actor actor;
	Console::CursorVisible(false);

	Image bat(model.batArt, 7);

	Console::GoToXY(20, 20);
	actor.Tell("나레이션", "박쥐가 등장하였다"); // 대사

	bat.move(0, 5, 10, 500); // 박쥐 애니메이션
	actor.Tell("나레이션", "정면에 호랑이가 나타났습니다.");
	actor.Tell("나레이션", "박쥐의 선택은?");
	bool b1 = actor.Selection("나레이션", "공격한다","도망친다");

	if (b1)
	{
		actor.Tell("나레이션", "박쥐가 호랑이를 공격하였으나, 호랑이를 이기진 못하였습니다.");
		std::cout << "Bad Ending";
	}
	else {
		actor.Tell("나레이션", "박쥐는 도망쳤다.");
		//bool b2 = actor.Selection("나레이션", "박쥐는 도망쳤다.", );
	}
	//bat.moveReverse(10, 5, 15, 500);

	

	while (true) 
	{

	}
}