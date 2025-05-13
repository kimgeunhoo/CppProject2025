/*
	캡슐화 
	상속 - 공통된 코드를 하나로 묶을 수 있다.
	상속을 언제 해야 하는가? "Is-A" == 상속 O "Has-A" 상속 x 다른방식으로

	상속을 사용하면 어떤 장점이 있는가?
	
*/

/*
	만들어볼 게임의 데이터 정리

	std::cout << "공허 시너지 n개 이상 모이면" 코드가 실행된다. 예시 방어력 50% 증가 등;
	게임시너지			-
	예시: 시너지 (공통) -

*/

#include "Monster.h"
#include "MonsterHandler.h"

int main()
{
	MonsterHandler monsterHandler;

	Monster slime2(1,5);
	Slime slime(1, 5);
	Orc orc(2, 10);

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);



	// 데이터 베이스
	// 데이터를 직접 만든다.
	// 데이터를 저장한다. 배열에 저장한다.
	// 데이터를 검색하고 사용한다.

	// 탐색 알고리즘. 
}