// 클래스를 만드는 연습.

#include "Base.h"

void ClassDefaultInfo()
{
	Base* base = new Base(5);
	//base->~Base();
	delete base;

	Base* derived = new Derived();
	derived->Do();

	delete derived;

}

/*
*  달리기 게임
*  ------------------------
* 1
* 2
* 3
* 4
*  ------------------------
*/

#include "Utility.h"
#include "Runner.h"
#include "GameManger.h"

int main()
{
	GameManager game;
	game.Play();
}

