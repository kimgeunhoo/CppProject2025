// Ŭ������ ����� ����.

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
*  �޸��� ����
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

