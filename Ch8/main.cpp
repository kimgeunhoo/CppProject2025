/*
	상속. 
	1. 공통된 내용을 하나로 묶는 방법
	2. 언제 상속을 해야되는가?	
*/

/*
	Unit의 행동 시스템 구현.

	유닛이 공격한다.
	Unit.Attack();
	1. 문제가 생긴다. 똑같은 유닛 코드를 실행하게 된다.
	2. virtual 키워드를 사용하면 실제 코드가 실행된다.

*/

/*
	Unit 코드를 이용해서
	Attack, Stop, Hold, ... 만들었다.
	상속을 시켜서 특별한 공격을 하도록 한다.
	같은 타입의 코드이지만 다른 기능을 실행시킬 수 있다.
*/

/*
	Monster.Attack();
	Slime. 분열한다
	Goblin. 독화살 발사
*/

/*	
	
*/


#include "Common.h"
#include "Book.h"

#include "Monster.h"

int main() 
{
	Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	spBook.Read();
	stBook.Read();
	qBook.Read();

	Probe probe1(true);
	probe1.ReturnAttacker()->Attack();

	Attacker tempAttacker;
	tempAttacker = *(probe1.ReturnAttacker());
	tempAttacker.Attack();

	Zealot zealot;
	Dragoon dragoon;

	cout << "유닛 공격 텍스트 출력 " << endl;


	probe1.Attack();
	zealot.Attack();
	dragoon.Attack();

	cout << "Unit으로 표현하기 " << endl;

	Unit& selectUnit = probe1; // 공통 타입으로 똑같은 형태로 표현해보기
	Unit& selectUnit2 = zealot;
	Unit& selectUnit3 = dragoon;

	selectUnit.Attack();
	selectUnit2.Attack();
	selectUnit3.Attack();

	cout << "유닛 스킬 표현하기 " << endl;

	selectUnit.UseSkill();
	selectUnit2.UseSkill();
	selectUnit3.UseSkill();
}


